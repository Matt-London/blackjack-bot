#include "../../include/objects/Card.hpp"
// =============== Constructors ===============
// Default
Card::Card() {
    number = '0';
    suit = '0';
    color = '0';

}

// Takes suit, num
Card::Card(char number, char suit) {
    this->number = number;
    this->suit = suit;
    Card::calculate_color();

}

// =============== Getters ===============
char Card::get_suit() {
    return suit;
}
char Card::get_number() {
    return number;
}
char Card::get_color() {
    return color;
}


// =============== Setters ===============
void Card::set_suit(char suit) {
    this->suit = suit;
    Card::calculate_color();
}
void Card::set_number(char number) {
    this->number = number;
}


// =============== Methods ===============
// Copies from another card
void Card::copy_from(Card a) {
    this->suit = a.get_suit();
    this->number = a.get_number();
    Card::calculate_color();

}

// Calculates color from the provided suit
void Card::calculate_color() {
    if (suit == 'h' || suit == 'd') {
        color = 'r';
    }
    else if (suit == 'c' || suit == 's') {
        color = 'b';
    }
    else {
        color = '0';
    }
}

// =============== Debug ===============
// Print card
void Card::print_card() {
    std::cout << number << ' ' << suit << std::endl;
}