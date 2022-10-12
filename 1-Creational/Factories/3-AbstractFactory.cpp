//Factory ee ke several type dare --> yani hierarchy dare! --> factory family instead of concrete types family

#include<iostream>
#include<memory>
#include<map>
#include"3-HotDrink.h"
#include"3-DrinkFactory.h"


//Solution 1 ---> not so good ---> tedad ziad beshe sakht mishe!
/*
std::unique_ptr<HotDrink> make_drink(std::string type)
{
    std::unique_ptr<HotDrink> drink;
    if(type=="tea")
    {
        drink = std::make_unique<Tea>();
        drink->prepare(200);
    }else
    {
        drink = std::make_unique<Coffee>();
        drink->prepare(50);
    }
    return drink;
}

int main()
{
    auto d = make_drink("tea");
}


*/

//solution 2 ---> tea va coffe har kodom factory khodeshono dashte bashan --> coffeefactory.h ro ezafe kun
int main()
{
    DrinkFactory df;
    df.make_drink("coffee");

//solution 3 ----> existence of hierarchy of factories are irrelevant and we are gonna do it with a bunch of lambdas!
    DrinkWithVolumeFactory dvf;
    dvf.make_drink("tea");
}