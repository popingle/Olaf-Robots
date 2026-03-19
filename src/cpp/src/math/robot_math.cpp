#include "math/robot_math.hpp"
#include <algorithm>

namespace Olaf_Robots {
namespace math {

double clamp(double value, double min, double max) {
    return std::max(min, std::min(max, value));
}

double lerp(double a, double b, double t) {
    return a + t * (b - a);
}

Vector3 cross_product(const Vector3& a, const Vector3& b) {
    return {
        a.y * b.z - a.z * b.y,
        a.z * b.x - a.x * b.z,
        a.x * b.y - a.y * b.x
    };
}

double dot_product(const Vector3& a, const Vector3& b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

Matrix3x3 rotation_matrix_x(double angle_rad) {
    double c = std::cos(angle_rad);
    double s = std::sin(angle_rad);
    return {{{
        {1.0, 0.0, 0.0},
        {0.0, c, -s},
        {0.0, s, c}
    }}};
}

Matrix3x3 rotation_matrix_y(double angle_rad) {
    double c = std::cos(angle_rad);
    double s = std::sin(angle_rad);
    return {{{
        {c, 0.0, s},
        {0.0, 1.0, 0.0},
        {-s, 0.0, c}
    }}};
}

Matrix3x3 rotation_matrix_z(double angle_rad) {
    double c = std::cos(angle_rad);
    double s = std::sin(angle_rad);
    return {{{
        {c, -s, 0.0},
        {s, c, 0.0},
        {0.0, 0.0, 1.0}
    }}};
}

} // namespace math
} // namespace Olaf_Robots
