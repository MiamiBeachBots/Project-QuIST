#pragma once

#include <units/time.h>
#include <units/length.h>
#include <units/velocity.h>
#include <units/angle.h>
#include <units/angular_velocity.h>
#include <frc/geometry/Translation2d.h>

namespace Constants {

constexpr int kFlDriveId = 1;
constexpr int kFlTurnId = 2;
constexpr int kFlEncoderId = 3;

constexpr int kFrDriveId = 4;
constexpr int kFrTurnId = 5;
constexpr int kFrEncoderId = 6;

constexpr int kBlDriveId = 7;
constexpr int kBlTurnId = 8;
constexpr int kBlEncoderId = 9;

constexpr int kBrDriveId = 10;
constexpr int kBrTurnId = 11;
constexpr int kBrEncoderId = 12;

constexpr double kDriveP = 0.05;
constexpr double kDriveI = 0.0;
constexpr double kDriveD = 0.0;

constexpr double kTurnP = 0.3;
constexpr double kTurnI = 0.0;
constexpr double kTurnD = 0.0;

constexpr auto kWheelbase = 0.5_m;
constexpr auto kTrackWidth = 0.5_m;

constexpr auto kMaxSpeed = 4.0_mps;
constexpr auto kMaxAngularSpeed = 3.0_rad_per_s;

} // namespace Constants
