#ifndef Olaf_Robots_IK_SOLVER_HPP
#define Olaf_Robots_IK_SOLVER_HPP

#include <vector>
#include <cmath>
#include <iostream>

namespace Olaf_Robots {

struct JointAngles {
    double hip_pitch;
    double knee_pitch;
    double ankle_pitch;
};

class IKSolver {
public:
    IKSolver(double thigh_length, double shin_length);
    ~IKSolver() = default;

    JointAngles solve(double target_x, double target_z);

private:
    double l1; // Thigh length
    double l2; // Shin length
};

} // namespace Olaf_Robots

#endif // Olaf_Robots_IK_SOLVER_HPP
