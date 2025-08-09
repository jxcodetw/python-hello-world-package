#pragma once

namespace hello_world {

class Calculator {
public:
    Calculator();
    ~Calculator() = default;

    const float add(const float value);
    const float sub(const float value);
    const float mul(const float value);
    const float div(const float value);
    void reset();
    const float getValue() const;

private:
    float total;
};
    
} // namespace hello_world
