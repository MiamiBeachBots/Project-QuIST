#pragma once

#include <rev/CANSparkMax.h>
#include <rev/CANSparkLowLevel.h>
#include <ctre/phoenix6/CANcoder.hpp>
#include <frc/kinematics/SwerveModulePosition.h>
#include <frc/kinematics/SwerveModuleState.h>
#include <frc/controller/PIDController.h>
#include <frc/controller/ProfiledPIDController.h>

class SwerveModule {
 public:
  /**
   * Constructs a SwerveModule.
   * @param driveId CAN ID for the drive motor.
   * @param turnId CAN ID for the turn motor.
   * @param encoderId CAN ID for the absolute encoder.
   */
  SwerveModule(int driveId, int turnId, int encoderId);

  /**
   * Gets the current state of the module.
   * @return The current state (velocity and angle).
   */
  frc::SwerveModuleState getState() const;

  /**
   * Gets the current position of the module.
   * @return The current position (distance and angle).
   */
  frc::SwerveModulePosition getPosition() const;

  /**
   * Sets the desired state for the module.
   * @param desiredState Desired state with speed and angle.
   */
  void setDesiredState(const frc::SwerveModuleState& desiredState);

 private:
  rev::CANSparkMax driveMotor;
  rev::CANSparkMax turnMotor;
  rev::SparkRelativeEncoder driveEncoder;
  ctre::phoenix6::hardware::CANcoder turnEncoder;

  frc::PIDController drivePIDController;
  frc::ProfiledPIDController<units::radians> turnPIDController;
};
