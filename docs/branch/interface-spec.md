# Interface Specification: overloade

## Controller Layout (Xbox)

| Input | Action |
| :--- | :--- |
| Left stick X/Y | Translation (field-relative) |
| Right stick X | Rotation |
| Left bumper | Toggle field-relative / robot-relative |
| Right bumper | Slow mode (50% speed) |
| A button | Reset gyro heading |
| B button | Reserved |
| Start | Emergency stop all motors |

## Dashboard Widgets (Shuffleboard)

| Widget | Data Source | Tab |
| :--- | :--- | :--- |
| Gyro heading | `DriveSubsystem/Yaw` | Driving |
| Odometry pose | `DriveSubsystem/Pose` | Driving |
| Battery voltage | `RobotController/BatteryVoltage` | Status |
| Motor fault flags | `Watchdog/FaultFlags` | Status |
