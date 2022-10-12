#ifndef TEA_FACTORY_H
#define TEA_FACTORY_H


#include"3-HotDrinkFactory.h"

struct TeaFactory:HotDrinkFactory
{
    std::unique_ptr<HotDrink> make() override{
        return std::make_unique<Tea>();
    }
};


#endif