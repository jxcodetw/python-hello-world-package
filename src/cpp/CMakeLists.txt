pybind11_add_module(_core 
    bindings.cpp 
    calculator.cpp
    greetings.cpp
)

# Install the shared object into the correct location in the wheel
install(TARGETS _core DESTINATION hello_world)