#pragma once

#include <frc2/command/SubsystemBase.h>
#include <frc/kinematics/SwerveDriveKinematics.h>
#include <frc/kinematics/SwerveDriveOdometry.h>
#include <AHRS.h>
#include "subsystems/SwerveModule.h"

class DriveSubsystem : public frc2::SubsystemBase {
 public:
  /**
   * Constructs the DriveSubsystem.
   */
  DriveSubsystem();

  /**
   * Periodic logic for the subsystem, updates odometry.
   */
  void Periodic() override;

  /**
   * Drives the robot at given x, y, and rotational velocities.
   * @param xSpeed Speed of the robot in the x direction (forward).
   * @param ySpeed Speed of the robot in the y direction (sideways).
   * @param rot Angular rate of the robot.
   * @param fieldRelative Whether the provided x and y speeds are relative to the field.
   */
  void drive(units::meters_per_second_t xSpeed,
             units::meters_per_second_t ySpeed,
             units::radians_per_second_t rot,
             bool fieldRelative);

  /**
   * Resets the odometry to the specified pose.
   * @param pose The pose to which to set the odometry.
   */
  void resetOdometry(frc::Pose2d pose);

 private:
  SwerveModule flModule;
  SwerveModule frModule;
  SwerveModule blModule;
  SwerveModule brModule;

  AHRS gyro;

  frc::SwerveDriveKinematics<4> kinematics;
  frc::SwerveDriveOdometry<4> odometry;
};
