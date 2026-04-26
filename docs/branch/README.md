# Branch Notes: hale

## Purpose
3D simulator branch. Named after the fictional region of Hale from the Whitepine series.

## Scope
Simulation infrastructure for the robot. Provides a 3D virtual environment to validate autonomous paths, sensor integration, and control loops without physical hardware.

## Key Responsibilities
- WPILib simulation framework integration (`frc::sim`)
- Physics engine configuration (drivetrain, CAN encoder sim, gyro sim)
- 3D field rendering using AdvantageScope or Glass
- Headless simulation for CI/CD validation

## Dependencies
- WPILib desktop simulation target (`includeDesktopSupport = true` in `build.gradle`)
- AdvantageScope for visualization
