# Branch Notes: paperclip

## Purpose
Data logging and post-match black-box analysis.

## Scope
All code responsible for recording robot state during matches — motor outputs, sensor readings, loop timestamps, and fault events — and exporting this data for later review.

## Key Responsibilities
- High-rate structured logging via WPILib DataLog (`wpi::DataLog`)
- Logging swerve module states, chassis speeds, and odometry pose at 50Hz+
- Fault event timestamping from `desdemona`
- Exporting `.wpilog` files readable in AdvantageScope

## Dependencies
- WPILib `wpi::DataLog`, `frc::DataLogManager`
- AdvantageScope for post-match visualization
