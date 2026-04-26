# Radio Configuration: bellerophon

## Hardware
- FRC Radio: OM5P-AC (2.4 / 5 GHz dual band)
- Configured via FRC Radio Configuration Utility

## Key Settings
- QoS bandwidth limit: 7 Mbps (competition legal)
- Robot code should avoid publishing high-rate video streams over NT during competition
- Keep NT update rates ≤ 50Hz for telemetry values

## Latency Budget
| Link | Target |
| :--- | :--- |
| Robot → DS | < 15ms |
| DS → Robot | < 15ms |
| Total round-trip | < 30ms |
