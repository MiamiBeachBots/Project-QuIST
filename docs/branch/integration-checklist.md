# Integration Checklist: stage

Complete all items before merging `stage` → `main`.

## Build
- [ ] `./gradlew build` completes with zero errors and zero warnings
- [ ] All subsystem headers compile against the RoboRIO target architecture

## Simulation
- [ ] `./gradlew simulateExternalCpp` boots without crashing
- [ ] Swerve module states output correctly in Glass / AdvantageScope simulation
- [ ] Odometry pose updates as expected under simulated encoder input

## Subsystem Interaction
- [ ] `desdemona` watchdog does not false-trigger under normal simulated load
- [ ] `hemlocke` loop time stays within 20ms budget under all subsystems active
- [ ] `paperclip` logs all expected channels during a simulated match cycle
- [ ] `overloade` controller bindings fire the correct commands

## Hardware (requires physical robot)
- [ ] Deploy succeeds to competition RoboRIO
- [ ] swerve drive operates correctly in teleop
- [ ] At least one autonomous path runs successfully to completion
- [ ] All Driver Station indicators green
