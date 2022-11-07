#ifndef WHEEL_H
#define WHEEL_H

#include "carPart.h"
class WheelFactory;
class Wheel: public CarPart{
    public:
        void operate() override;

    private:
        Wheel(); // We don't directly create wheel ---> thats the job of the factory
        friend class WheelFactory;
};


#endif