#pragma once

// modifier reference
#include "IModifier.h"
#include "Calcination.h"

#include <map>
#include <functional>
#include <string>
#include <memory>

class ModifierFactory
{
    private:
        std::map<std::string, std::function<std::unique_ptr<IModifier>()>> registry;

    public:
        ModifierFactory();
        std::unique_ptr<IModifier> CreateCatalyst(std::string name);
};