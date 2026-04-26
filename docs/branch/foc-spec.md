# FOC Specification: red-october

## What is FOC?
Field Oriented Control decouples the motor's torque and flux components, allowing precise control of each independently. This provides more torque at higher speeds and improved efficiency over traditional voltage/velocity control.

## Implementation Plan (NEO via REVLib)
1. Enable `kVoltage` control mode as baseline
2. Switch to `kCurrent` (torque) control mode for drive output
3. Set current setpoint proportional to desired velocity error
4. Tune current limits so the motor doesn't saturate at full speed

## Expected Improvements
| Metric | PID (baseline) | FOC (target) |
| :--- | :--- | :--- |
| Top speed | 4.0 m/s | 4.5 m/s |
| Efficiency at 3 m/s | ~70% | ~85% |
| Thermal load | Higher | Lower |

## References
- REVLib ControlType documentation
- WPILib ARM FOC example
