#include "Deck.h"

void Deck::Setup() 
{
    for (int s = 0; s < 4; ++s)
    {
        for(int r = 2; r <= 14; ++r)
        {
            deck.push_back(Card{static_cast<Rank>(r), static_cast<Suit>(s)});
        }
    }
}

void Deck::Suffle()
{
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(deck.begin(), deck.end(), g);
}

Card Deck::Draw()
{
    Card drawn = deck.back();
    deck.pop_back();
    return drawn;
}

void Deck::Seek()
{
    std::cout << "Total Card : " << deck.size() << std::endl;
    
    int counter = 1;
    for (const auto& card : deck)
    {
        std::cout << counter << ". Rank " << static_cast<int>(card.rank) << " | Suit " << static_cast<int>(card.suit) << std::endl;
        counter++;
    }   
}