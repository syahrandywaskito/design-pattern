#pragma once

#include "Card.h"
#include <algorithm>
#include <vector>
#include <random>
#include <iostream>

class Deck
{
    private:
        std::vector<Card> deck;

    public:
        void Setup();
        void Suffle();
        Card Draw();
        void Seek();

};