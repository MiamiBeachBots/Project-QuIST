# Release Checklist: main

Complete all items before merging into `main`.

## Code Quality
- [ ] Build passes with no warnings (`./gradlew build`)
- [ ] All subsystems compile against the target RoboRIO platform
- [ ] No TODO or FIXME comments in production code paths

## Testing
- [ ] Swerve drive validated on the physical robot
- [ ] All enabled autonomous modes complete without fault
- [ ] Watchdog (`desdemona`) does not trip under normal operation

## Hardware
- [ ] CAN IDs in `Constants.h` match the wired robot
- [ ] NavX gyro calibration completed (robot stationary on power-on)
- [ ] Battery voltage nominal (> 12.0V) at start of match

## Deployment
- [ ] `./gradlew deploy` completes successfully to the competition RoboRIO
- [ ] Driver Station shows all systems green
- [ ] Robot passes FRC inspection criteria
