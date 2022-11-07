#include "engineFactory.h"
#include "engine.h"

EngineFactory::EngineFactory()
{

}


CarPart* EngineFactory::make() {
    
   return new Engine();
    
}