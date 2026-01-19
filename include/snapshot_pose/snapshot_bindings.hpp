#pragma once
#include "snapshot_pose/snapshot_pose.hpp"

namespace snapshot_pose {

// Simple one-call API for auton.
// If ok==false, pose is not modified.
// If ok==true, pose is applied via chassis.odom_set(...).
SnapshotResult snapshot_correct_pose();

} // namespace snapshot_pose
