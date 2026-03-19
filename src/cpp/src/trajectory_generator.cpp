#include "trajectory_generator.hpp"
#include <algorithm>

namespace Olaf_Robots {

void TrajectoryGenerator::add_waypoint(const Waypoint& wp) {
    waypoints.push_back(wp);
    std::sort(waypoints.begin(), waypoints.end(), [](const Waypoint& a, const Waypoint& b) {
        return a.time < b.time;
    });
}

math::Vector3 TrajectoryGenerator::get_position(double time) {
    if (waypoints.empty()) return {0.0, 0.0, 0.0};
    if (time <= waypoints.front().time) return waypoints.front().position;
    if (time >= waypoints.back().time) return waypoints.back().position;

    for (size_t i = 0; i < waypoints.size() - 1; ++i) {
        if (time >= waypoints[i].time && time <= waypoints[i+1].time) {
            double t = (time - waypoints[i].time) / (waypoints[i+1].time - waypoints[i].time);
            return {
                math::lerp(waypoints[i].position.x, waypoints[i+1].position.x, t),
                math::lerp(waypoints[i].position.y, waypoints[i+1].position.y, t),
                math::lerp(waypoints[i].position.z, waypoints[i+1].position.z, t)
            };
        }
    }
    return waypoints.back().position;
}

void TrajectoryGenerator::clear() {
    waypoints.clear();
}

} // namespace Olaf_Robots
