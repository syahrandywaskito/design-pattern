#include "ModifierFactory.h"
#include <memory>

ModifierFactory::ModifierFactory()
{
    registry["calcination"] = []() {return std::make_unique<Calcination>();};
}

std::unique_ptr<IModifier> ModifierFactory::CreateCatalyst(std::string name) 
{
    if (registry.find(name) != registry.end())
    {
        return registry[name]();
    }
    return nullptr;
    // return std::make_unique<IModifier>(); // error karena mereturn abstract class yang dimana 
}