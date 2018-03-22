#include "Arduino.h";
#include "./InputPin.hpp";

namespace ABC_PinCreator {

    InputPin::setup() {
        pinMode(pinNo, INPUT);
    }
}