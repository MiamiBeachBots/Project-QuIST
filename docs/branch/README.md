# Branch Notes: RA9

## Purpose
The AI Driver. Responsible for high-level path planning and real-time trajectory optimization.

## Scope
This branch owns all code related to autonomous path generation, trajectory following commands, and any ML-assisted driving logic that sits above the drivetrain hardware layer.

## Key Responsibilities
- Trajectory generation using WPILib's `TrajectoryGenerator` or PathPlanner
- Real-time path replanning based on field state
- Integration with vision and odometry for pose correction mid-path
- Exposing clean command interfaces for the main `RobotContainer` to schedule

## Dependencies
- `DriveSubsystem` from `init-build` (merged base)
- Vision pipeline output (see `rosemary`)
- Odometry data from gyro and encoders
