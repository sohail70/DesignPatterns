#ifndef ENGINE_FACTORY_H
#define ENGINE_FACTORY_H

#include "abstractCarPartFactory.h"
#include "engine.h"
class CarPartFactory;
class EngineFactory: public AbstractCarPartFactory
{
    public:
        CarPart* make() override;
    private:
        EngineFactory();

        friend class CarPartFactory;
};


#endif