#ifndef _ABC_PINCREATER_CREATER_OUTPUTPIN_H_
#define _ABC_PINCREATER_CREATER_OUTPUTPIN_H_

#include "./Pin.hpp";

namespace ABC_PinCreator {
    class OutputPin : public Pin {
    protected:
        void setup() override;
    }
}

#endif