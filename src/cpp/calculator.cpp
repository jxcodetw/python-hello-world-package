#include "calculator.h"

#include <stdexcept>

namespace hello_world {

Calculator::Calculator() : total(0.0f) {}

const float Calculator::add(const float value) {
    total += value;
    return total;
}

const float Calculator::sub(const float value) {
    total -= value;
    return total;
}

const float Calculator::mul(const float value) {
    total *= value;
    return total;
}

const float Calculator::div(const float value) {
    if (value != 0.0f) {
        total /= value;
    } else {
        throw std::invalid_argument("Cannot divide by zero");
    }
    return total;
}

void Calculator::reset() {
    total = 0.0f;
}

const float Calculator::getValue() const {
    return total;
}

} // namespace hello_world
