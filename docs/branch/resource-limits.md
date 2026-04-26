# Resource Limits: hemlocke

## RoboRIO CPU Budget (per 20ms loop)
| Task | Target Budget |
| :--- | :--- |
| DriveSubsystem::Periodic | < 3ms |
| Odometry update | < 1ms |
| Vision processing dispatch | < 2ms |
| Watchdog / fault polling | < 1ms |
| Total overhead headroom | > 13ms |

## CAN Bus Update Rates
| Device | Signal | Rate |
| :--- | :--- | :--- |
| SparkMax drive | Velocity, current | 20ms |
| SparkMax turn | Position, current | 20ms |
| CANcoder | Absolute position | 10ms |
| NavX | Yaw | 4ms |

## Memory Rules
- No heap allocation in `Periodic()` or any ISR-adjacent path
- Pre-allocate all arrays at construction time
- Use `wpi::SmallVector` for fixed-size collections
