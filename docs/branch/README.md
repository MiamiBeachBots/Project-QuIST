# Branch Notes: roxane

## Purpose
AI deep learning system for high-performance inference and training.

## Scope
Implements on-robot ML inference via a lightweight TensorFlow Lite or ONNX model, enabling vision-based detection tasks (game piece classification, alliance target recognition) to run directly on the RoboRIO or a co-processor.

## Key Responsibilities
- Deploying and running inference models on the RoboRIO or Raspberry Pi co-processor
- Processing camera frames and producing structured detection outputs
- Exporting results to NetworkTables for consumption by `rosemary` and `RA9`
- Managing model versioning and deployment pipeline

## Dependencies
- TensorFlow Lite or ONNX Runtime (deployed to co-processor)
- NetworkTables for cross-device result sharing
- Limelight or USB camera as frame source
