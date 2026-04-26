#include "subsystems/DriveSubsystem.h"
#include "Constants.h"

DriveSubsystem::DriveSubsystem()
    : flModule(Constants::kFlDriveId, Constants::kFlTurnId, Constants::kFlEncoderId),
      frModule(Constants::kFrDriveId, Constants::kFrTurnId, Constants::kFrEncoderId),
      blModule(Constants::kBlDriveId, Constants::kBlTurnId, Constants::kBlEncoderId),
      brModule(Constants::kBrDriveId, Constants::kBrTurnId, Constants::kBrEncoderId),
      gyro(frc::SPI::Port::kMXP),
      kinematics{
          frc::Translation2d{Constants::kWheelbase / 2, Constants::kTrackWidth / 2},
          frc::Translation2d{Constants::kWheelbase / 2, -Constants::kTrackWidth / 2},
          frc::Translation2d{-Constants::kWheelbase / 2, Constants::kTrackWidth / 2},
          frc::Translation2d{-Constants::kWheelbase / 2, -Constants::kTrackWidth / 2}},
      odometry{kinematics,
               gyro.GetRotation2d(),
               {flModule.getPosition(), frModule.getPosition(), blModule.getPosition(), brModule.getPosition()},
               frc::Pose2d{}} {
}

void DriveSubsystem::Periodic() {
  odometry.Update(
      gyro.GetRotation2d(),
      {flModule.getPosition(), frModule.getPosition(), blModule.getPosition(), brModule.getPosition()});
}

void DriveSubsystem::drive(units::meters_per_second_t xSpeed,
                           units::meters_per_second_t ySpeed,
                           units::radians_per_second_t rot,
                           bool fieldRelative) {
  auto requestedSpeeds = fieldRelative
                             ? frc::ChassisSpeeds::FromFieldRelativeSpeeds(xSpeed, ySpeed, rot, gyro.GetRotation2d())
                             : frc::ChassisSpeeds{xSpeed, ySpeed, rot};

  auto moduleStates = kinematics.ToSwerveModuleStates(requestedSpeeds);
  kinematics.DesaturateWheelSpeeds(&moduleStates, Constants::kMaxSpeed);

  flModule.setDesiredState(moduleStates[0]);
  frModule.setDesiredState(moduleStates[1]);
  blModule.setDesiredState(moduleStates[2]);
  brModule.setDesiredState(moduleStates[3]);
}

void DriveSubsystem::resetOdometry(frc::Pose2d pose) {
  odometry.ResetPosition(
      gyro.GetRotation2d(),
      {flModule.getPosition(), frModule.getPosition(), blModule.getPosition(), brModule.getPosition()},
      pose);
}
