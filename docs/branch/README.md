# Branch Notes: overloade

## Purpose
Advanced interface panel for operator and dashboard control.

## Scope
All code relating to the driver-facing control layer: button bindings, operator dashboard layouts (Shuffleboard / AdvantageScope), and HID device configuration.

## Key Responsibilities
- Mapping Xbox/PS5 controller axes and buttons to robot commands
- Publishing real-time telemetry to Shuffleboard or SmartDashboard
- Configuring operator profiles (e.g., left/right hand variants)
- Providing a clean separation between human input and subsystem logic

## Dependencies
- WPILib `frc::XboxController`, `frc2::JoystickButton`
- NetworkTables for dashboard publishing
- All active subsystems (commands are bound here)
