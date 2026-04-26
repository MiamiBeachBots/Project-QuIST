// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "RobotContainer.h"

#include <frc2/command/Commands.h>
#include <frc2/command/RunCommand.h>

RobotContainer::RobotContainer() {
  driveSubsystem.SetDefaultCommand(frc2::RunCommand(
      [this] {
        driveSubsystem.drive(0.0_mps, 0.0_mps, 0.0_rad_per_s, true);
      },
      {&driveSubsystem}));
  ConfigureBindings();
}

void RobotContainer::ConfigureBindings() {}


frc2::CommandPtr RobotContainer::GetAutonomousCommand() {
  return frc2::cmd::Print("No autonomous command configured");
}
