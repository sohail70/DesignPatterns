#ifndef HOT_DRINK_FACTORY_H
#define HOT_DRINK_FACTORY_H

#include"3-HotDrink.h"

struct HotDrinkFactory
{
    virtual std::unique_ptr<HotDrink> make() = 0;
};


#endif