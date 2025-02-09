import requests
import json
import time
import random
import math
from datetime import datetime, timedelta

# Ditto configuration
DITTO_URL = "http://localhost:8080/api/2/things"
AUTH = ('ditto', 'ditto')
HEADERS = {'Content-Type': 'application/json'}

# Simulation configuration
UPDATE_INTERVAL = 60  # seconds (1 minute)
SIMULATION_DURATION = 28800  # seconds (8 hours, simulating a full shift)

# Define manufacturing system
PRODUCTION_LINES = 3
MACHINES_PER_LINE = 5
THINGS = {}

def create_machine(machine_id, line_id):
    return {
        "attributes": {
            "location": {
                "latitude": 48.135125 + random.uniform(-0.001, 0.001),
                "longitude": 11.581981 + random.uniform(-0.001, 0.001),
                "elevation": 520 + random.uniform(-1, 1)
            },
            "asset_type": "cnc_machine"
        },
        "features": {
            "status": {
                "properties": {
                    "value": "operational",
                    "uptime": 0,
                    "efficiency": 0.85 + random.uniform(-0.05, 0.05)
                }
            },
            "temperature": {
                "properties": {
                    "value": 22.0 + random.uniform(-1, 1)  # Starting room temperature
                }
            },
            "imu": {
                "properties": {
                    "accel_x": 0,
                    "accel_y": 0,
                    "accel_z": 9.81,
                    "gyro_x": 0,
                    "gyro_y": 0,
                    "gyro_z": 0
                }
            },
            "energy": {
                "properties": {
                    "total": 0,
                    "renewable": 0,
                    "grid_load": 1000 + random.uniform(-100, 100)
                }
            },
            "relationships": {
                "properties": {
                    "part_of": {
                        "target": f"com.manufacturing:production_line{line_id}"
                    }
                }
            },
            "production": {
                "properties": {
                    "units": 0,
                    "defects": 0
                }
            }
        }
    }

def create_production_line(line_id):
    return {
        "attributes": {
            "asset_type": "production_line"
        },
        "features": {
            "status": {
                "properties": {
                    "value": "operational",
                    "uptime": 0,
                    "efficiency": 0.90 + random.uniform(-0.02, 0.02)
                }
            },
            "production": {
                "properties": {
                    "units": 0,
                    "defects": 0,
                    "oee": 0.85 + random.uniform(-0.05, 0.05)
                }
            }
        }
    }

# Initialize things
for i in range(1, PRODUCTION_LINES + 1):
    THINGS[f"com.manufacturing:production_line{i}"] = create_production_line(i)
    for j in range(1, MACHINES_PER_LINE + 1):
        THINGS[f"com.manufacturing:machine{i}_{j}"] = create_machine(f"{i}_{j}", i)

def update_machine(machine, elapsed_time):
    # Update status
    if random.random() < 0.001:  # 0.1% chance of status change per minute
        machine['features']['status']['properties']['value'] = random.choice(['operational', 'maintenance', 'idle'])
    
    machine['features']['status']['properties']['uptime'] += UPDATE_INTERVAL
    
    # Gradual efficiency changes
    efficiency_change = random.uniform(-0.001, 0.001)
    machine['features']['status']['properties']['efficiency'] += efficiency_change
    machine['features']['status']['properties']['efficiency'] = max(0.7, min(machine['features']['status']['properties']['efficiency'], 0.98))

    # Update temperature (gradual increase during operation, cooling during idle)
    if machine['features']['status']['properties']['value'] == 'operational':
        temp_change = random.uniform(0.05, 0.1)
    else:
        temp_change = random.uniform(-0.1, -0.05)
    machine['features']['temperature']['properties']['value'] += temp_change
    machine['features']['temperature']['properties']['value'] = max(20, min(machine['features']['temperature']['properties']['value'], 40))

    # Update IMU data (small vibrations during operation)
    if machine['features']['status']['properties']['value'] == 'operational':
        for axis in ['x', 'y', 'z']:
            machine['features']['imu']['properties'][f'accel_{axis}'] = random.uniform(-0.1, 0.1)
            machine['features']['imu']['properties'][f'gyro_{axis}'] = random.uniform(-0.01, 0.01)
    else:
        for axis in ['x', 'y', 'z']:
            machine['features']['imu']['properties'][f'accel_{axis}'] = 0
            machine['features']['imu']['properties'][f'gyro_{axis}'] = 0

    # Update energy consumption (follows a daily pattern)
    time_factor = math.sin(2 * math.pi * elapsed_time / SIMULATION_DURATION)
    base_energy = 10 + 5 * time_factor  # kWh per hour
    if machine['features']['status']['properties']['value'] == 'operational':
        energy_consumption = base_energy + random.uniform(0, 2)
    else:
        energy_consumption = base_energy * 0.1  # 10% of normal consumption when idle

    machine['features']['energy']['properties']['total'] += energy_consumption
    machine['features']['energy']['properties']['renewable'] += energy_consumption * random.uniform(0.2, 0.4)
    machine['features']['energy']['properties']['grid_load'] = 1000 + 200 * time_factor + random.uniform(-50, 50)

    # Update production
    units_produced = 0
    defects = 0
    if machine['features']['status']['properties']['value'] == 'operational':
        units_produced = random.randint(8, 12)  # 8-12 units per minute
        defect_rate = 0.01  # 1% defect rate
        defects = sum(random.random() < defect_rate for _ in range(units_produced))
        machine['features']['production']['properties']['units'] += units_produced
        machine['features']['production']['properties']['defects'] += defects

    return units_produced, defects

def update_production_line(line, total_units, total_defects):
    line['features']['status']['properties']['uptime'] += UPDATE_INTERVAL
    line['features']['production']['properties']['units'] += total_units
    line['features']['production']['properties']['defects'] += total_defects
    
    # Calculate OEE (Overall Equipment Effectiveness)
    availability = line['features']['status']['properties']['uptime'] / SIMULATION_DURATION
    performance = total_units / (MACHINES_PER_LINE * 10 * UPDATE_INTERVAL / 60)  # Assuming max 10 units per machine per minute
    quality = (total_units - total_defects) / total_units if total_units > 0 else 1
    oee = availability * performance * quality
    line['features']['production']['properties']['oee'] = oee

def simulate_failure(thing):
    if random.random() < 0.0001:  # 0.01% chance of failure per minute
        thing['features']['status']['properties']['value'] = 'failure'
        thing['features']['alerts'] = {
            "properties": {
                "current_alert": {
                    "type": random.choice(["overheating", "motor_failure", "power_loss"]),
                    "severity": random.randint(1, 5)
                }
            }
        }
        return True
    return False

def send_update(thing_id, thing):
    url = f"{DITTO_URL}/{thing_id}"
    response = requests.put(url, auth=AUTH, headers=HEADERS, data=json.dumps(thing))
    if response.status_code == 204:
        print(f"Successfully updated {thing_id}")
    else:
        print(f"Failed to update {thing_id}. Status code: {response.status_code}")

def run_simulation():
    start_time = datetime.now()
    end_time = start_time + timedelta(seconds=SIMULATION_DURATION)
    elapsed_time = 0

    while datetime.now() < end_time:
        for line_id in range(1, PRODUCTION_LINES + 1):
            line_thing_id = f"com.manufacturing:production_line{line_id}"
            line_total_units = 0
            line_total_defects = 0

            for machine_id in range(1, MACHINES_PER_LINE + 1):
                machine_thing_id = f"com.manufacturing:machine{line_id}_{machine_id}"
                
                if simulate_failure(THINGS[machine_thing_id]):
                    print(f"Failure occurred in {machine_thing_id}")
                
                units, defects = update_machine(THINGS[machine_thing_id], elapsed_time)
                line_total_units += units
                line_total_defects += defects
                send_update(machine_thing_id, THINGS[machine_thing_id])

            update_production_line(THINGS[line_thing_id], line_total_units, line_total_defects)
            send_update(line_thing_id, THINGS[line_thing_id])
        
        elapsed_time += UPDATE_INTERVAL
        time.sleep(UPDATE_INTERVAL)

    print("Simulation completed.")

if __name__ == "__main__":
    run_simulation()