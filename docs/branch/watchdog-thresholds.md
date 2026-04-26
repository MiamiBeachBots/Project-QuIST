# Watchdog Thresholds: desdemona

## Motor Fault Thresholds (SparkMax)

| Condition | Threshold | Action |
| :--- | :--- | :--- |
| Drive motor current | > 80A sustained 500ms | Cut output 50% |
| Turn motor current | > 40A sustained 500ms | Cut output, log fault |
| Motor temperature | > 80°C | Disable motor, alert DS |

## Battery Voltage Thresholds

| Voltage | Action |
| :--- | :--- |
| < 9.0V | Reduce all motor outputs to 70% |
| < 7.5V | Emergency brownout stop triggered |

## Recovery
All faults are non-latching unless temperature exceeds 90°C. Below that threshold, the watchdog automatically re-enables the motor after a 5-second cooldown.
