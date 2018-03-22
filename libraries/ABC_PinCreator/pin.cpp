#include "Arduino.h"
#include "./pin.hpp"

namespace ABC_PinCreator {

    void Pin::setup() {
        pinMode(pinNo, mode);
    }
}