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

    Card test('k', 's');
    test.print_card();

    return 0;
}