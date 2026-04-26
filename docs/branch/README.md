# Branch Notes: vanguard

## Purpose
Preloading intelligent systems before the end of autonomous — ensuring all subsystems are primed, calibrated, and ready for teleop before the automation period concludes.

## Scope
The autonomous preload sequence: running gyro warm-ups, initializing vision pipelines, pre-caching trajectory data, and ensuring all background threads are live before the driver takes control.

## Key Responsibilities
- Triggering sensor warm-up routines at robot enable (NavX calibration, Limelight pipeline selection)
- Pre-computing first autonomous trajectory before match start to minimize latency
- Confirming all subsystem health checks pass before teleop handoff
- Providing a clean enable-time state machine that sequences initialization safely

## Dependencies
- `rosemary` (vision pipeline startup)
- `RA9` (trajectory pre-caching)
- `desdemona` (health check gate)
- All drive and sensor subsystems
