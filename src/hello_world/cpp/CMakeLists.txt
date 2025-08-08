pybind11_add_module(greetings greetings.cpp)

# Install the shared object into the correct location in the wheel
install(TARGETS greetings DESTINATION hello_world/cpp)