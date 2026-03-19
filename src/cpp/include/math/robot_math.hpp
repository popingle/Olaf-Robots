#ifndef Olaf_Robots_ROBOT_MATH_HPP
#define Olaf_Robots_ROBOT_MATH_HPP

#include <cmath>
#include <vector>
#include <array>

namespace Olaf_Robots {
namespace math {

struct Vector3 {
    double x, y, z;
};

struct Matrix3x3 {
    std::array<std::array<double, 3>, 3> data;
};

double clamp(double value, double min, double max);
double lerp(double a, double b, double t);
Vector3 cross_product(const Vector3& a, const Vector3& b);
double dot_product(const Vector3& a, const Vector3& b);
Matrix3x3 rotation_matrix_x(double angle_rad);
Matrix3x3 rotation_matrix_y(double angle_rad);
Matrix3x3 rotation_matrix_z(double angle_rad);

} // namespace math
} // namespace Olaf_Robots

#endif // Olaf_Robots_ROBOT_MATH_HPP
