#ifndef HOT_DRINK_H
#define HOT_DRINK_H

#include<iostream>
#include<memory>
#include<map>
#include<string>

//base class
struct HotDrink{
    virtual void prepare(int volume) = 0;
};

//derived
struct Tea: HotDrink
{
    void prepare(int volume) override
    {
        std::cout<<"Take tea bag, boil water, pour " <<volume<<"ml"<<std::endl;
    }
};

struct Coffee: HotDrink
{
    void prepare(int volume) override
    {
        std::cout<<"Grind some beans, boil water, pour "<<volume<<"ml"<<"\n";
    }
};

#endif