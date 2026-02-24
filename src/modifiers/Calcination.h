#pragma once
#include "IModifier.h"

class Calcination : public IModifier
{
    public:
        Calcination() = default;
        void Apply() override;
        std::string GetName() override;
      
};