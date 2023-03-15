#include <string>
#include "Analog.h"

Analog::Analog(int pin) {
    this->pin = pin;
}

int Analog::getValue() const {
    return value;
}

std::string Analog::toString() {
    return std::to_string(value);
}

int Analog::getPin() const {
    return pin;
}

void Analog::setPin(int p) {
    Analog::pin = p;
}

void Analog::read() {
    // Here read analog value from pin
    value = 0;
}