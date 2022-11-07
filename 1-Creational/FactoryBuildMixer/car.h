/*
             ----Car -----------                                 ------CarBuilder-----------            CarFactory----->----AbstractCarFactory-----
            /       \           \                               /           \               \                          /            \               \
        has-a       has-a       has-a                       EngineBuilder   WheelBuilder    BodyBuilder             EngineFactory   WheelFactory     BodyFactory
        /               \           \
    Engine              Wheel        Body 


No object creation by the entities --> factory creates objects ---> like in main we say I want a car and a car has to have Engine - wheel and body to operate 
remember the creation happens at carFactory  ---> for example we can create a car with Engine V6 adn wheel of steel and etc ---> so we should extend the Engine and wheel and Body class but for now we skip this complexity
and in factories --> we build objects piece by piece by using the builder pattern

Why do we need Engine Builder ? --> because engine is complex and wheels is complex and body is complex. so we are dealing with complex objects
but what if wheel is not that complex? do we need to use build design pattern? but for now we go with the current flow!
*/

#ifndef CAR_H
#define CAR_H

#include<vector>

#include "carPart.h"
class Car{
    public:




    private:
        std::vector<CarPart*> carParts;
        friend class AbstractCarPartFactory;
        friend class EngineFactory;
        friend class WheelFactory;

};


#endif