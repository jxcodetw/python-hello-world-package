#include <iostream>

#include <pybind11/pybind11.h>

namespace py = pybind11;

void say_hello() {
    std::cout << "Hello, pybind11!" << std::endl;
}

PYBIND11_MODULE(greeting, m) {
    m.def("say_hello", &say_hello, "A function which says hello");
}