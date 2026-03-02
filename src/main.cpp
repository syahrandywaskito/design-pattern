#include "modifiers/ModifierFactory.h"
#include "decks/Deck.h"
#include "RunSession.h"
#include "ScoringSystem.h"
#include "ShopSystem.h"
#include <iostream>
#include <memory>
#include <vector>

int main(int argc, char const *argv[])
{
    RunSession *session = new RunSession(); 

    session->Update();

    session->End();

    return 0;
}