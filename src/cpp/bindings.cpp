#include "calculator.h"
#include "greetings.h"

#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_MODULE(_core, m) { // module name _core must match the CMake target
    m.doc() = "pybind11 bindings for the hello_world equivalent C++ implementation";
    m.def("say_hello", &hello_world::say_hello, "A function which says hello");
    py::class_<hello_world::Calculator>(m, "Calculator")
        .def(py::init<>())
        .def("add", &hello_world::Calculator::add)
        .def("sub", &hello_world::Calculator::sub)
        .def("mul", &hello_world::Calculator::mul)
        .def("div", &hello_world::Calculator::div)
        .def("reset", &hello_world::Calculator::reset)
        .def("getValue", &hello_world::Calculator::getValue);
}
