#include "../../include/objects/Card.hpp"
// =============== Constructors ===============
// Default
Card::Card() {
    rank = '0';
    suit = '0';
    color = '0';

    irank = 0;
    isuit = 0;

}

// Takes suit, num
Card::Card(char rank, char suit) {
    this->rank = rank;
    this->suit = suit;

    if (rank == 'a') {
        irank = 1;
    }
    else if (rank - '0' > 1 && rank - '0' < 10) {
        irank = rank - '0';
    }
    else if (rank == 't') {
        irank = 10;
    }
    else if (rank == 'j') {
        irank = 11;
    }
    else if (rank == 'q') {
        irank = 12;
    }
    else if (rank == 'k') {
        irank = 13;
    }
    else {
        irank = 0;
    }

    switch (suit) {
        case 's':
            isuit = 1;
            break;
        case 'h':
            isuit = 2;
            break;
        case 'c':
            isuit = 3;
            break;
        case 'd':
            isuit = 4;
            break;
        default:
            isuit = 0;
            break;
    }

    Card::calculate_color();

}

// Take two nums
Card::Card(int rank, int suit) {
    char n;
    char s;
    irank = rank;
    isuit = suit;

    // Assign rank
    if (rank == 1) {
        n = 'a';
    }
    else if (rank > 1 && rank < 10) {
        n = '0' + rank;
    }
    else if (rank == 10) {
        n = 't';
    }
    else if (rank == 11) {
        n = 'j';
    }
    else if (rank == 12) {
        n = 'q';
    }
    else if (rank == 13) {
        n = 'k';
    }
    else {
        n = '0';
    }
    
    this->rank = n;

    // Assign suit
    switch (suit) {
        case 1:
            s = 's';
            break;
        case 2:
            s = 'h';
            break;
        case 3:
            s = 'c';
            break;
        case 4:
            s = 'd';
            break;
        default:
            s = '0';
            break;
    }

    this->suit = s;
}

// =============== Getters ===============
char Card::get_suit() {
    return suit;
}
char Card::get_rank() {
    return rank;
}
char Card::get_color() {
    return color;
}


// =============== Setters ===============
void Card::set_suit(char suit) {
    this->suit = suit;
    Card::calculate_color();
}
void Card::set_rank(char rank) {
    this->rank = rank;
}


// =============== Methods ===============
// Copies from another card
void Card::copy_from(Card a) {
    this->suit = a.get_suit();
    this->rank = a.get_rank();
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
    std::cout << rank << ' ' << suit << std::endl;
}