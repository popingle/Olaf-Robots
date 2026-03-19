#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "ik_solver.hpp"

namespace py = pybind11;

PYBIND11_MODULE(Olaf_Robots_core, m) {
    m.doc() = "Olaf Robotics Core C++ Library";

    py::class_<Olaf_Robots::JointAngles>(m, "JointAngles")
        .def_readwrite("hip_pitch", &Olaf_Robots::JointAngles::hip_pitch)
        .def_readwrite("knee_pitch", &Olaf_Robots::JointAngles::knee_pitch)
        .def_readwrite("ankle_pitch", &Olaf_Robots::JointAngles::ankle_pitch);

    py::class_<Olaf_Robots::IKSolver>(m, "IKSolver")
        .def(py::init<double, double>())
        .def("solve", &Olaf_Robots::IKSolver::solve, "Solve Inverse Kinematics for a leg");
}
