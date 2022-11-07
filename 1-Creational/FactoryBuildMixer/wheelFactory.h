#ifndef WHEEL_FACTORY_H
#define WHEEL_FACTORY_H

#include "abstractCarPartFactory.h"
#include "wheel.h"

class CarPartFactory;
class WheelFactory: public AbstractCarPartFactory
{
    public:
        CarPart* make() override;
    private:
        WheelFactory();
        friend class CarPartFactory;
};


#endif