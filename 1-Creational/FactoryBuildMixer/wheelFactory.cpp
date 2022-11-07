#include "wheelFactory.h"


WheelFactory::WheelFactory()
{

}


CarPart* WheelFactory::make()
{
    return new Wheel();
}