#include "subsystems/SwerveModule.h"
#include "Constants.h"
#include <numbers>

SwerveModule::SwerveModule(int driveId, int turnId, int encoderId)
    : driveMotor(driveId, rev::CANSparkLowLevel::MotorType::kBrushless),
      turnMotor(turnId, rev::CANSparkLowLevel::MotorType::kBrushless),
      driveEncoder(driveMotor.GetEncoder(rev::SparkRelativeEncoder::Type::kHallSensor, 42)),
      turnEncoder(encoderId),
      drivePIDController(Constants::kDriveP, Constants::kDriveI, Constants::kDriveD),
      turnPIDController(Constants::kTurnP, Constants::kTurnI, Constants::kTurnD,
                        {Constants::kMaxAngularSpeed, 6.0_rad_per_s_sq}) {
  driveMotor.RestoreFactoryDefaults();
  turnMotor.RestoreFactoryDefaults();

  driveEncoder.SetPositionConversionFactor(0.05);
  driveEncoder.SetVelocityConversionFactor(0.05 / 60.0);

  turnPIDController.EnableContinuousInput(-units::radian_t{std::numbers::pi},
                                          units::radian_t{std::numbers::pi});

  driveMotor.BurnFlash();
  turnMotor.BurnFlash();
}

frc::SwerveModuleState SwerveModule::getState() const {
  double currentAngle = turnEncoder.GetAbsolutePosition().GetValueAsDouble() * 2.0 * std::numbers::pi;
  return {units::meters_per_second_t{driveEncoder.GetVelocity()},
          frc::Rotation2d{units::radian_t{currentAngle}}};
}

frc::SwerveModulePosition SwerveModule::getPosition() const {
  double currentAngle = turnEncoder.GetAbsolutePosition().GetValueAsDouble() * 2.0 * std::numbers::pi;
  return {units::meter_t{driveEncoder.GetPosition()},
          frc::Rotation2d{units::radian_t{currentAngle}}};
}

void SwerveModule::setDesiredState(const frc::SwerveModuleState& desiredState) {
  double currentAngleValue = turnEncoder.GetAbsolutePosition().GetValueAsDouble() * 2.0 * std::numbers::pi;
  frc::Rotation2d currentAngle{units::radian_t{currentAngleValue}};

  auto optimizedState = frc::SwerveModuleState::Optimize(desiredState, currentAngle);

  double driveOutput = drivePIDController.Calculate(driveEncoder.GetVelocity(),
                                                    optimizedState.speed.value());
  double turnOutput = turnPIDController.Calculate(units::radian_t{currentAngleValue},
                                                  optimizedState.angle.Radians());

  driveMotor.Set(driveOutput);
  turnMotor.Set(turnOutput);
}
