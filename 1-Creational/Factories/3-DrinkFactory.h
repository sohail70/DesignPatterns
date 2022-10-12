//vase initialization hame ---> map kardan 
#ifndef DRINK_FACTORY_H
#define DRINK_FACTORY_H

#include<string>
#include<map>
#include"3-HotDrinkFactory.h"
#include"3-CoffeeFactory.h"
#include"3-TeaFactory.h"
#include<functional>

struct HotDrink;

class DrinkFactory{
    std::map<std::string , std::unique_ptr<HotDrinkFactory>> factories;

    public:
        DrinkFactory(){
            factories["coffee"] = std::make_unique<CoffeeFactory>();
            factories["tea"] = std::make_unique<TeaFactory>();
        }

    std::unique_ptr<HotDrink> make_drink(const std::string& name)
    {
        auto drink = factories[name] -> make();
        drink -> prepare(200); //oops! -->// ! in hardcode khoob nist --> class DrinkWithVolume ro ijad kun ke behtar az ine
        return drink;
    }
};



class DrinkWithVolumeFactory{
    std::map<std::string , std::function<std::unique_ptr<HotDrink>()>> factories; //function returns a unique ptr<hot drink> and doenst get any parameter

    public:
        DrinkWithVolumeFactory() //constructor
        {
            factories["tea"] = []{  //lambda
                auto tea = std::make_unique<Tea>();
                tea->prepare(100);
                return tea;
            };
        }

        std::unique_ptr<HotDrink> make_drink(const std::string& name)
        {
            return factories[name]();
        }
};


#endif