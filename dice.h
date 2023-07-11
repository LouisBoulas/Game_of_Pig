// The Game of Pig
// Header file dice.h.
// 
// An n-sided die.

#ifndef DICE_H
#define DICE_H

#include <cstdlib>
#include <ctime>

class Dice
{
    public:
        Dice();
        Dice(unsigned int nsides); 

        unsigned int roll();

        unsigned int get_sides() const { return sides; }
        void set_sides(unsigned int new_sides);

    private:
        unsigned int sides = 6;
};

#endif //DICE_H
