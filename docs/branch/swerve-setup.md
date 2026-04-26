# Swerve Setup: init-build

## Hardware Configuration

| Module Position | Drive CAN ID | Turn CAN ID | Encoder CAN ID |
| :--- | :--- | :--- | :--- |
| Front Left | 1 | 2 | 3 |
| Front Right | 4 | 5 | 6 |
| Back Left | 7 | 8 | 9 |
| Back Right | 10 | 11 | 12 |

## Vendor Libraries
| Library | Source |
| :--- | :--- |
| REVLib 2026 | `software-metadata.revrobotics.com` |
| Phoenix 6 | `maven.ctr-electronics.com` |
| NavX | `dev.studica.com` |

## First-Time PID Tuning
1. Lock the robot in place (on blocks)
2. Increase `kTurnP` until the turn motor oscillates, then back off 30%
3. Repeat for `kDriveP` with a fixed velocity setpoint
4. Record values in `Constants.h`
