# Branch Notes: init-build

## Purpose
Starting build branch. Contains the foundational swerve drive implementation and base robot infrastructure.

## Scope
The root build of Project-QuIST. The swerve drive subsystem, vendor dependencies, and `RobotContainer` wiring all land here first before being merged into feature branches.

## Key Responsibilities
- `DriveSubsystem` and `SwerveModule` implementation (NEO/NEO 550, CANcoder, NavX2)
- Vendor library setup: REVLib, Phoenix 6, KauaiLabs NavX
- `RobotContainer` default drive command
- Base `Constants.h` with CAN IDs and PID gains

## Current State
Swerve drive scaffolding is complete. PID gains in `Constants.h` need tuning against the physical robot.
