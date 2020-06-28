#ifndef CARD_GUARD
#define CARD_GUARD

#include <iostream>

class Card {
    private:
        char suit;
        char number;
        char color;

    public:
        // =============== Constructors ===============
        // Default
        Card();

        // Takes suit, num
        Card(char number, char suit);

        // =============== Getters ===============
        char get_suit();
        char get_number();
        char get_color();


        // =============== Setters ===============
        void set_suit(char suit);
        void set_number(char number);


        // =============== Methods ===============
        // Copies from another card
        void copy_from(Card a);
        
        // Calculates color from the provided suit
        void calculate_color();

        // =============== Debug ===============
        // Print card
        void print_card();


};

#endif