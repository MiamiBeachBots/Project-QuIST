# Branch Notes: hemlocke

## Purpose
Resource management — optimizes memory allocation and CPU cycles for the entire robot codebase.

## Scope
All code targeting runtime performance: CPU scheduling, memory usage, CAN bus bandwidth optimization, and load reduction under time pressure.

## Key Responsibilities
- Profiling RoboRIO loop timing to stay within the 20ms robot period
- Reducing allocations in hot paths (avoid `new` in `Periodic()`)
- Tuning CAN utilization — keep update rates for non-critical signals at 10-20Hz
- Memory-safe buffer management for sensor data pipelines

## Dependencies
- WPILib `frc::Timer`, `frc::RobotController`
- HAL performance APIs
