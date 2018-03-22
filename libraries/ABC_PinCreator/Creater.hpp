#ifndef _ABC_PINCREATER_CREATER_H_
#define _ABC_PINCREATER_CREATER_H_

#include "../cpplang.hpp";
#include "./Pin.hpp";

namespace ABC_PinCreator {

    interface Creater {
        virtual ~Creater(){}
        virtual Pin* createPin(uint8_t pin) = 0;
    };
}

#endif