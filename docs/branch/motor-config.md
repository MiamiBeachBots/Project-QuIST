# Motor Configuration: petruchio

## SparkMax Settings (Drive — NEO)

| Parameter | Value |
| :--- | :--- |
| Smart Current Limit | 50A |
| Secondary Current Limit | 80A |
| Open Loop Ramp Rate | 0.25s |
| Idle Mode | Brake |
| Voltage Compensation | 12.0V |

## SparkMax Settings (Turn — NEO 550)

| Parameter | Value |
| :--- | :--- |
| Smart Current Limit | 25A |
| Secondary Current Limit | 40A |
| Open Loop Ramp Rate | 0.1s |
| Idle Mode | Brake |
| Voltage Compensation | 12.0V |

## Notes
- Ramp rate prevents voltage spikes when reversing direction suddenly
- Secondary limit is a emergency hardware cut, not a substitute for smart limiting
- Idle mode switches to coast during disabled state to allow robot to be pushed freely
