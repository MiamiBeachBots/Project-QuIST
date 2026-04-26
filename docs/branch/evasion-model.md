# Evasion Model: red-summer

## Threat Detection
Opponents are tracked as 2D bounding boxes in field coordinates derived from Limelight detections.

## Prediction Model
Uses a simple constant-velocity linear extrapolation:
- `predictedPos = currentPos + velocity * lookaheadTime`
- Default `lookaheadTime`: 0.3s (half a robot loop at competition speed)

## Evasion Response
When predicted opponent path intersects within a 0.8m radius:
1. Generate a perpendicular avoidance vector
2. Blend with current commanded velocity: 60% evasion, 40% intended
3. Apply for max 0.5s, then requery

## Tuning Parameters
| Parameter | Default | Description |
| :--- | :--- | :--- |
| `triggerRadius` | 0.8m | Distance at which evasion activates |
| `lookaheadTime` | 0.3s | How far ahead to project opponent |
| `evasionBlend` | 0.6 | Weight of evasion vs intended velocity |
