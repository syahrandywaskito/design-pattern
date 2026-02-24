#pragma once

#include <string>

class IModifier
{
    public:
        virtual ~IModifier() = default; // using default because its constructor
        virtual std::string GetName() = 0;
        virtual void Apply() = 0;
};