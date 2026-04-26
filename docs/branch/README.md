# Branch Notes: red-october

## Purpose
A dedicated branch for Field Oriented Control (FOC) implementation. Named after the famous submarine film.

## Scope
Implements FOC for the NEO drive motors using Phoenix 6's TorqueCurrentFOC control mode, or a software FOC approximation via REVLib. FOC significantly improves efficiency and torque at speed.

## Key Responsibilities
- Replacing velocity PID control with torque-current FOC on the drive motors
- Validating FOC brushless commutation timing against NEO motor specs
- Performance benchmarking: comparing FOC vs PID max speed and energy draw
- Documenting the tradeoff between implementation complexity and field efficiency

## Dependencies
- REVLib advanced motor control modes
- Phoenix 6 TorqueCurrentFOC (if switching to Kraken in future seasons)
- `init-build` (base swerve infrastructure)
