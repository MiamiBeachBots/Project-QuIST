# Power Budget: manhattan

## Estimated Draw Per Subsystem

| Subsystem | Nominal Draw | Peak Draw |
| :--- | :--- | :--- |
| Drive (4x NEO) | 40A | 160A |
| Turn (4x NEO 550) | 8A | 32A |
| RoboRIO + radio | 3A | 5A |
| Sensors and peripherals | 2A | 4A |
| **Total** | **53A** | **201A** |

## Battery
- Nominal: 12V, 18Ah
- Safe sustained discharge: ~120A
- Brownout protection threshold: 6.8V (RoboRIO hardware cutoff)

## Voltage Compensation
Drive and turn motors should use SparkMax `.EnableVoltageCompensation(12.0)` to normalize output relative to measured battery voltage.
