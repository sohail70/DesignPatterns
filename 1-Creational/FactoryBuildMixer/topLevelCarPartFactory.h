



// This is the interface that client will use to create any car that he wants
class AbstractCarPartFactory;
class CarPart;
#include<map>
class CarPartFactory
{
    public:
        CarPartFactory();

        CarPart* makeCarPart(std::string );
    private:
        std::map<std::string , AbstractCarPartFactory*> car_part_factory;
};  