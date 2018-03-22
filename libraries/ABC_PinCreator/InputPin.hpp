_ABC_PINCREATER_CREATER_INPUTPIN_H_#ifndef 
#define _ABC_PINCREATER_CREATER_INPUTPIN_H_

#include "./Pin.hpp";

namespace ABC_PinCreator {
    class InputPin : public Pin {
    protected:
        void setup() override;
    };
}

#endif