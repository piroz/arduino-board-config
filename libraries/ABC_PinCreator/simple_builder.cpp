#include "./simple_builder.hpp"

namespace ABC_PinCreator {

    void SimpleBuilder::pinNo(uint8_t no) {
        pin.pinNo = no;
    }

    void SimpleBuilder::mode(uint8_t mode) {
        pin.mode = mode;
    }

    Pin& SimpleBuilder::getResult() {
        return pin;
    }

}