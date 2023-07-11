// CISC 2000   Fordham University
// Instructor: Vincent Mierlak
// 
// Header file humanplayer.h.
// 
// A derived class for a human player in the game of Pig.

#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H

#include "player.h"

class HumanPlayer : public Player
{         

    public:
        HumanPlayer(std::string n) : Player(n) {}

        //functions
        void take_turn();



};

#endif //HUMANPLAYER_H
