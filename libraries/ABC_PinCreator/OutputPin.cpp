#include "Arduino.h";
#include "./OutputPin.hpp";

namespace ABC_PinCreator {

    OutputPin::setup() {
        pinMode(pinNo, INPUT);
    }
}