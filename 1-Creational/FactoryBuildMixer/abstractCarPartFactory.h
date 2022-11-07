#ifndef ABSTRACT_CAR_FACTORY
#define ABSTRACT_CAR_FACTORY

// interface for creating a car
#include "car.h"
class CarPart;

class AbstractCarPartFactory{
    public:
        AbstractCarPartFactory(){}
        virtual ~AbstractCarPartFactory(){}
        virtual CarPart* make() = 0;
        
        virtual Car* make_car();
        
    protected:
        
        
};


#endif