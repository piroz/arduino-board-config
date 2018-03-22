#include "Arduino.h"
#include "pin.hpp"

class Builder {
public:
    virtual ~Builder(){};
    virtual void pinNo(uint8_t no) = 0;
    virtual void mode(uint8_t mode) = 0;
    virtual Pin& getResult() = 0;
};