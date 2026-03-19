#ifndef Olaf_Robots_TRAJECTORY_GENERATOR_HPP
#define Olaf_Robots_TRAJECTORY_GENERATOR_HPP

#include <vector>
#include <string>
#include "math/robot_math.hpp"

namespace Olaf_Robots {

struct Waypoint {
    double time;
    math::Vector3 position;
    math::Vector3 velocity;
};

class TrajectoryGenerator {
public:
    TrajectoryGenerator() = default;
    ~TrajectoryGenerator() = default;

    void add_waypoint(const Waypoint& wp);
    math::Vector3 get_position(double time);
    void clear();

private:
    std::vector<Waypoint> waypoints;
};

} // namespace Olaf_Robots

#endif // Olaf_Robots_TRAJECTORY_GENERATOR_HPP
