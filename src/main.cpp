#include "modifiers/ModifierFactory.h"
#include "RunSession.h"
#include "ScoringSystem.h"
#include "ShopSystem.h"
#include <iostream>
#include <memory>
#include <vector>

int main(int argc, char const *argv[])
{
    ModifierFactory* factory = new ModifierFactory();
    std::unique_ptr<IModifier> newCatalyst = factory->CreateCatalyst("calcination");
    
    std::cout << "Catalyst name  : " << newCatalyst->GetName() << std::endl;

    return 0;
}