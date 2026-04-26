# Branch Notes: red-summer

## Purpose
Predictive modeling for defensive robot evasion.

## Scope
Implements an evasion algorithm that anticipates opposing robot trajectories and generates reactive movement commands to avoid defensive contact during a match.

## Key Responsibilities
- Tracking opponent robot positions via Limelight or camera data
- Predicting near-future trajectories using simple linear extrapolation or Kalman filtering
- Generating evasive velocity commands that route around predicted collision zones
- Integrating cleanly with `DriveSubsystem` as an override command layer

## Dependencies
- Vision data from `rosemary` sensor fusion pipeline
- `DriveSubsystem` from `init-build`
- `RA9` path planning layer (evasion commands compose with planned paths)
