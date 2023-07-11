// CISC 2000  Fordham University  Spring 2020
// Instructor: Vincent Mierlak
//
// HW 9: The Game of Pig.
// File: dice.cpp
//       Implementation of Dice, a class that represents an n-sided die.

#include "dice.h"

Dice::Dice()
{
    srand(time(0) * time(0));
}

Dice::Dice(unsigned int nsides)
{
    Dice();
    sides = nsides;
}

void Dice::set_sides(unsigned int new_sides)
{
    sides = new_sides;
}

unsigned int Dice::roll()
{
    return (rand() % sides) + 1;
}

