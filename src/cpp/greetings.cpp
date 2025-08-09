#include <iostream>

namespace hello_world {

void say_hello(const std::string& message) {
    std::cout << "Hello from pybind11: " << message << std::endl;
}

} // namespace hello_world
