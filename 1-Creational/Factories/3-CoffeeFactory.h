#ifndef COFFEE_FACTORY_H
#define COFFEE_FACTORY_H

#include"3-HotDrink.h"
#include"3-HotDrinkFactory.h"

struct HotDrink;

struct CoffeeFactory: HotDrinkFactory
{
    std::unique_ptr<HotDrink> make() override{
        return std::make_unique<Coffee>();
    }
};


#endif