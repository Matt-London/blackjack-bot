#include "../../include/objects/Deck.hpp"

// ============= Constructors =============
// Default, makes full ordered deck
Deck::Deck() {
    Deck::build_deck();
}

// Debug, makes blank deck
Deck::Deck(bool b) {

}

// ============= Getters =============
int Deck::get_size() {
    return deck.size();
}

// ============= Setters =============


// ============= Methods =============
// Adds given card
void Deck::add_card(Card c) {
    deck.push_back(c);
}

// Builds default deck
void Deck::build_deck() {
    deck.clear();
    deck.reserve(52);

    // Loop through suits
    for (int i = 1; i < 5; i++) {
        // Loop through ranks
        for (int j = 1; j < 14; j++) {
            // Add cards to deck
            deck.emplace_back(j, i);
        }
    }

    deck.shrink_to_fit();

}

// ============= Debug =============