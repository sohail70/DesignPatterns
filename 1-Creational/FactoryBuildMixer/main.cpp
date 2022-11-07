#include<iostream>

#include "topLevelCarPartFactory.h"
#include "car.h"
int main()
{
    CarPartFactory cpf;
    auto E = cpf.makeCarPart("Engine");
    auto W = cpf.makeCarPart("Wheel");

    E->operate();
    W->operate();
}

// TODO ---> now how can I make a car out of this parts and how can I use builder pattern to make the Engine and wheel more sophisticated