# Data Schema: paperclip

## Logged Channels

| Channel | Type | Rate | Description |
| :--- | :--- | :--- | :--- |
| `drive/flSpeed` | double | 50Hz | Front-left module speed (m/s) |
| `drive/frSpeed` | double | 50Hz | Front-right module speed (m/s) |
| `drive/blSpeed` | double | 50Hz | Back-left module speed (m/s) |
| `drive/brSpeed` | double | 50Hz | Back-right module speed (m/s) |
| `drive/flAngle` | double | 50Hz | Front-left module angle (rad) |
| `drive/frAngle` | double | 50Hz | Front-right module angle (rad) |
| `drive/blAngle` | double | 50Hz | Back-left module angle (rad) |
| `drive/brAngle` | double | 50Hz | Back-right module angle (rad) |
| `drive/poseX` | double | 50Hz | Odometry X position (m) |
| `drive/poseY` | double | 50Hz | Odometry Y position (m) |
| `drive/poseTheta` | double | 50Hz | Odometry heading (rad) |
| `watchdog/faultFlags` | int64 | 10Hz | Bitmask of active faults |
| `battery/voltage` | double | 10Hz | Measured battery voltage |

## Log File Location
Logs are written to the RoboRIO's `/home/lvuser/logs/` directory and copied off via the FRC Driver Station Log Viewer.
