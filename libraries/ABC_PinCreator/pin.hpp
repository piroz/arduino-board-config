#ifndef __ABC_PINCREATER_PIN_H_
#define __ABC_PINCREATER_PIN_H_

#include "Arduino.h";

namespace ABC_PinCreator {

    class Pin {
    public:
        void setup();
        uint8_t pinNo;
        uint8_t mode;
    };
}

#endif