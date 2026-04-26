# Branch Notes: desdemona

## Purpose
The safety watchdog; monitors for mechanical stress and triggers emergency stops.

## Scope
All code related to detecting fault conditions — over-current, over-temperature, brownouts, motor stall detection — and gracefully halting the robot or reducing load before damage occurs.

## Key Responsibilities
- Polling SparkMax fault flags and CTRE status codes each robot cycle
- Monitoring battery voltage via `RobotController::GetBatteryVoltage()`
- Triggering timed motor disable sequences on thermal or current faults
- Raising `frc::DriverStation` alerts legible from the DS console

## Dependencies
- REVLib SparkMax fault API
- Phoenix 6 status signals
- WPILib `RobotController`
