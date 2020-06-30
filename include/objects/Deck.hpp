#ifndef DECK_GUARD
#define DECK_GUARD

#include <vector>

#include "Card.hpp"

using namespace std;

class Deck {
    private:


    public:
        vector<Card> deck;


        // ============= Constructors =============
        // Default, makes full ordered deck
        Deck();

        // Debug, makes blank deck
        Deck(bool b);

        // ============= Getters =============
        int get_size();

        // ============= Setters =============


        // ============= Methods =============
        // Adds given card
        void add_card(Card c);
        
        // Builds default deck
        void build_deck();

        // ============= Debug =============




};

#endif