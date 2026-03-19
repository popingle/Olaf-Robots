#include "ik_solver.hpp"

namespace Olaf_Robots {

IKSolver::IKSolver(double thigh_length, double shin_length) 
    : l1(thigh_length), l2(shin_length) {}

JointAngles IKSolver::solve(double target_x, double target_z) {
    // Simple 2D IK for a bipedal leg
    double d = std::sqrt(target_x * target_x + target_z * target_z);
    
    // Law of cosines for knee angle
    double cos_knee = (d * d - l1 * l1 - l2 * l2) / (2 * l1 * l2);
    double knee_angle = std::acos(std::max(-1.0, std::min(1.0, cos_knee)));

    // Hip angle
    double alpha = std::atan2(target_x, -target_z);
    double beta = std::acos((l1 * l1 + d * d - l2 * l2) / (2 * l1 * d));
    double hip_angle = alpha + beta;

    // Ankle angle to keep foot parallel to ground
    double ankle_angle = -(hip_angle + knee_angle);

    return {hip_angle, knee_angle, ankle_angle};
}

} // namespace Olaf_Robots
