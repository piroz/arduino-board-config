
#include "./builder.hpp"

namespace ABC_PinCreator {

    class SimpleBuilder : public Builder {
    public:
        void pinNo(uint8_t no) override;
        void mode(uint8_t mode) override;
        Pin& getResult() override;
    private:
        Pin pin;
    };

}