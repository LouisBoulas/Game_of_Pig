// CISC 2000   Fordham University
// Instructor: Vincent Mierlak
// 
// Header file computerplayer.h.
// 
// A derived class for a computer player in the game of Pig.

#ifndef COMPUTERPLAYER_H
#define COMPUTERPLAYER_H

#include "player.h"


class ComputerPlayer : public Player
{
    public:
        ComputerPlayer(std::string n) : Player(n) {}

        //functions

        void take_turn();





};

#endif // COMPUTERPLAYER_H
