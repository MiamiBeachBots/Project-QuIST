# Model Specification: roxane

## Detection Task
Primary task: Game piece classification (classifying object type from camera feed)

## Model Architecture
- Framework: TensorFlow Lite (EdgeTPU-compatible if co-processor supports it)
- Input: 320x320 RGB image, normalized to [0, 1]
- Output: Bounding boxes + class labels + confidence scores
- Target inference latency: < 30ms per frame

## Deployment
Model files are stored in `src/main/deploy/models/` and deployed to the robot via `./gradlew deploy`.

## Output Schema (NetworkTables)
| Key | Type | Description |
| :--- | :--- | :--- |
| `roxane/detected` | boolean | True if any object detected |
| `roxane/class` | string | Most confident detected class |
| `roxane/confidence` | double | Confidence score [0, 1] |
| `roxane/bboxX` | double | Normalized bounding box center X |
| `roxane/bboxY` | double | Normalized bounding box center Y |
