# Branch Notes: spitwire

## Purpose
Data collection branch — gathering raw sensor telemetry and match recordings for offline analysis and model training.

## Scope
On-robot data capture pipelines that record raw, unprocessed sensor streams during practice runs and matches. Data is later used to train `roxane` models and tune `rosemary` fusion weights.

## Key Responsibilities
- High-rate raw sensor recording (encoders, IMU, camera frames if bandwidth allows)
- Structured export pipeline for post-session analysis
- Integration with `paperclip` for structured `.wpilog` output
- Managing storage limits on the RoboRIO USB drive

## Dependencies
- WPILib `frc::DataLogManager`
- `paperclip` data schema
- Co-processor for camera frame buffering if included
