// CISC 2000  Fordham University  Spring 2020
// Instructor: Vincent Mierlak
//
// HW 9: The Game of Pig.
// File: player.cpp
//       Implementation of Player, a base class for a player 
//       in the game of Pig.


#include "player.h"
#include <iostream>


// constructor with name given
Player::Player(std::string n)
{
    name = n;
    dice_instance = new Dice;
}

//destructor destroying dice instance
Player::~Player()
{
    delete dice_instance;
}

//get player name
std::string Player:: get_name() const
{
    return name;
}

//get total player points
int Player:: get_points() const
{
    return total_points;
}

//add roll to total points
void Player:: add_points(int x)
{
    total_points += x;
}

//set points to 0
void Player:: zero_points()
{
    total_points = 0;
}

//overloaded output operator

std::ostream& operator <<(std::ostream &out, const Player &p)
{
    out << p.name;
    return out;
}



