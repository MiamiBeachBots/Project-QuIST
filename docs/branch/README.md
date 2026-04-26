# Branch Notes: bellerophon

## Purpose
Wireless communication optimization and radio-link reliability.

## Scope
All code and configuration related to the robot's radio hardware, robot-to-driver station communication, and bandwidth optimization strategies.

## Key Responsibilities
- Tuning and testing the FRC radio (OM5P-AC) configuration
- Reducing robot-to-DS control loop latency
- Handling brownout detection responses that may interrupt radio link
- NetworkTables configuration for minimal bandwidth usage during matches

## Dependencies
- WPILib NetworkTables
- FRC Radio configuration tooling
- `desdemona` (emergency stop signalling over comms)
