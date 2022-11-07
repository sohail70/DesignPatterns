#ifndef ENGINE_H
#define ENGINE_H

#include "carPart.h"
class EngineFactory;
class Engine: public CarPart{
    public:
        void operate() override;

    private:
        Engine(); // We don't directly create engine ---> thats the job of the factory
        friend class EngineFactory;
};

#endif