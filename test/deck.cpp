#include <iostream>

#include "../include/resources/Constants.h"
#include "../include/objects/Card.hpp"
#include "../include/objects/Deck.hpp"
#include "../include/objects/Player.hpp"
#include "../include/objects/Dealer.hpp"
#include "../include/resources/Tool.hpp"
#include "../include/objects/Game.hpp"

using namespace std;

int main() {

    Deck deck;
    for (int i = 0; i < deck.get_size(); i++) {
        deck.deck[i].print_card();
    }

    return 0;
}