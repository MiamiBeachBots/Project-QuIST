# Sensor Fusion Specification: rosemary

## Architecture

```
NavX Gyro ──────────────┐
SparkMax Encoders ───────┤──► SwerveDrivePoseEstimator ──► Fused Pose (field coords)
Limelight AprilTags ─────┘
```

## Confidence Weighting
Vision measurements are rejected outright if:
- Target distance > 4.0m (too far, high angular error)
- Ambiguity ratio > 0.15 (multi-tag ambiguity too high)
- Tag count == 0

Otherwise, the measurement standard deviations are scaled by `distance²` to trust close targets more.

## Latency Compensation
Limelight provides a pipeline latency estimate. Use:
```cpp
double latency = limelight.getEntry("tl").getDouble(0) / 1000.0;
poseEstimator.AddVisionMeasurement(tagPose, frc::Timer::GetFPGATimestamp() - latency, stdDevs);
```

## Coordinate System
- All poses are in the WPILib field coordinate system (origin: blue alliance corner)
- Positive X toward red alliance, positive Y toward left when facing red
