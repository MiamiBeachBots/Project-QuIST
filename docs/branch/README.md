# Branch Notes: petruchio

## Purpose
The tamer of the motors — advanced current limiting and brownout protection.

## Scope
Fine-grained motor control configuration including smart current limiting, ramp rates, and idle mode management to keep the robot within safe operating bounds under heavy load.

## Key Responsibilities
- Configuring SparkMax smart current limits (`SetSmartCurrentLimit`)
- Setting motor ramp rates to prevent inrush current spikes (`SetOpenLoopRampRate`)
- Switching idle modes (coast vs. brake) based on robot state
- Responding to brownout events with graduated output reduction

## Dependencies
- REVLib `rev::CANSparkMax`
- `desdemona` (fault condition coordination)
- `manhattan` (system-wide power budget)
