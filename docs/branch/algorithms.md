# Path Planning Algorithms: RA9

## Active Approach
- **PathPlanner** for pre-authored autonomous paths
- **Ramsete / LTVUnicycleController** for trajectory following on swerve

## Planned
- Real-time replanning using a potential-field obstacle avoidance layer
- Pose correction using Limelight AprilTag snap-to at waypoints

## Tuning Notes
- Keep `kMaxVelocity` and `kMaxAcceleration` conservative until field testing
- Validate trajectory timing against actual robot cycle time
