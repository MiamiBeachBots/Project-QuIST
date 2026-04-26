# Branch Notes: manhattan

## Purpose
Power distribution management and battery voltage compensation logic.

## Scope
All code interfacing with the PDP/PDH to monitor and manage power draw, distribute load, and compensate for voltage sag during high-current events.

## Key Responsibilities
- Monitoring per-channel current draw via the PDH API
- Implementing voltage feed-forward compensation as battery sags under load
- Prioritizing critical subsystems (drive, safety) over auxiliary ones (LEDs, sensors) during brownouts
- Triggering warnings when total draw approaches battery limits

## Dependencies
- WPILib `frc::PowerDistribution`
- `desdemona` (fault triggering at critical voltage levels)
