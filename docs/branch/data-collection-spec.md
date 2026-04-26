# Data Collection Specification: spitwire

## Collection Sessions
Each session should be run with a specific tag in the log file name for traceability:
- Practice: `practice_YYYY-MM-DD_HH-MM`
- Competition match: `match_YYYY-MM-DD_HH-MM_vs-TEAM`

## Collected Channels (raw, pre-fusion)
| Channel | Source | Rate | Notes |
| :--- | :--- | :--- | :--- |
| `raw/gyroYaw` | NavX | 200Hz | Raw yaw before drift correction |
| `raw/flEncVel` | SparkMax FL | 50Hz | Pre-odometry encoder velocity |
| `raw/cancoderFL` | CANcoder FL | 100Hz | Absolute position pre-offset |
| `raw/limelightTX` | Limelight | 30Hz | Horizontal angle to primary target |
| `raw/limelightTA` | Limelight | 30Hz | Target area |

## Storage
- Use an 8GB+ USB drive in the RoboRIO USB port
- Logs auto-rotate at 500MB per file
- Retrieve via SCP: `scp lvuser@10.TE.AM.2:/home/lvuser/logs/* ./data/`
