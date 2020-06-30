#ifndef CARD_GUARD
#define CARD_GUARD

#include <iostream>

class Card {
    private:
        char suit;
        char rank;
        char color;

        int isuit;
        int irank;

    public:
        // =============== Constructors ===============
        // Default
        Card();

        // Takes suit, num
        Card(char rank, char suit);

        // Take two nums
        Card(int rank, int suit);
        // 1 is spade, 2 is hearts, 3 is club, 4 is diamonds
        // 1 is ace, so on

        // =============== Getters ===============
        char get_suit();
        char get_rank();
        char get_color();


        // =============== Setters ===============
        void set_suit(char suit);
        void set_rank(char rank);


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