# Simulation Setup: hale

## Enabling Desktop Simulation
In `build.gradle`, set:
```groovy
def includeDesktopSupport = true
```

## Running Simulation
```bash
./gradlew simulateExternalCpp
```
Then connect AdvantageScope or Glass via the default NT4 port (5810).

## Simulated Hardware
| Device | Sim Class |
| :--- | :--- |
| Drive motor encoder | `rev::SparkMaxAlternateEncoderSim` |
| Gyro (NavX) | `AHRS` sim mode via HAL |
| CANcoder | `ctre::phoenix6::sim::CANcoderSimState` |

## Field Layout
The 2027 FRC game field JSON is loaded from `src/main/deploy/field.json`.
