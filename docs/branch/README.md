# Branch Notes: rosemary

## Purpose
Sensor fusion — combining LiDAR, Limelight, and odometry into a single unified coordinate system.

## Scope
Implements a pose estimation pipeline that merges multiple noisy sensor sources into a high-confidence field position estimate using WPILib's `SwerveDrivePoseEstimator`.

## Key Responsibilities
- Integrating Limelight AprilTag detections as periodic vision measurements
- Weighting vision and odometry contributions based on confidence (distance, target count)
- Publishing the fused pose to NetworkTables for `RA9` and `red-summer` to consume
- Handling camera calibration and latency compensation

## Dependencies
- WPILib `frc::SwerveDrivePoseEstimator`
- Limelight NetworkTables API
- `init-build` (odometry from `DriveSubsystem`)
