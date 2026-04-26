# Autonomous Preload Sequence: vanguard

## Initialization State Machine

```
[DISABLED] ──► Robot Enable
                   │
                   ▼
            [GYRO_CALIB] ── Wait for NavX to calibrate (< 2s stationary)
                   │
                   ▼
            [VISION_INIT] ── Select Limelight pipeline, confirm target acquisition
                   │
                   ▼
          [TRAJECTORY_CACHE] ── Pre-compute auto path, validate waypoints
                   │
                   ▼
          [HEALTH_CHECK] ── Poll desdemona; abort to safe state if fault detected
                   │
                   ▼
           [READY] ── Handoff to AutonomousCommand or teleop DriveSubsystem
```

## Timing Budget
| Stage | Max Duration |
| :--- | :--- |
| Gyro calibration | 2.0s |
| Vision init | 0.5s |
| Trajectory cache | 0.3s |
| Health check | 0.1s |
| **Total** | **< 3.0s** |

Must complete before the 15-second autonomous period is 20% elapsed.
