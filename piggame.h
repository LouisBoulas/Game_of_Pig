// CISC 2000   Fordham University
// Instructor: Vincent Mierlak
// 
// Header file piggame.h.
// 
// A class to play the game of Pig.

#ifndef PIGGAME_H
#define PIGGAME_H

#include "player.h"
#include "humanplayer.h"
#include "computerplayer.h"

class PigGame
{
    public:
        PigGame(){}
        PigGame(Player* h, Player* c);

        ~PigGame()
        {
            delete human;
            delete computer;
        }

        //member functions
        Player* play();




    private:
        Player* human;
        Player* computer;






};

#endif // PIGGAME_H
