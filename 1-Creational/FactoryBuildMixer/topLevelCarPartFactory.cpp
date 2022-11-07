#include "topLevelCarPartFactory.h"
#include "engineFactory.h"
#include "wheelFactory.h"
CarPartFactory::CarPartFactory()
{
    car_part_factory["Engine"] = new EngineFactory();
    car_part_factory["Wheel"] = new WheelFactory();
}


CarPart* CarPartFactory::makeCarPart(std::string part_)
{
    return car_part_factory[part_]->make();
}
