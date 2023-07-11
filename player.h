// CISC 2000   Fordham University
// Instructor: Vincent Mierlak
// 
// Header file player.h.
// 
// A base class for a player in the game of Pig.

#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "dice.h"

class Player
{
    public:
        //constructors
        Player(std::string n); 

        virtual ~Player();
        
        //functions
        virtual void take_turn() = 0;

        std::string get_name() const; 

        int get_points() const; 

        void add_points(int x);

        //sets total points to 0
        void zero_points();

        //const points to win game
        static const int MAX_POINTS=100;

        // operator overloading
        friend std::ostream& operator <<(std::ostream &out, const Player &p);

    //member variables
    private:      
        std::string name;   //player name
        int total_points=0; //number of points a player has

    protected:
        Dice* dice_instance;
        


};

#endif //PLAYER_H
