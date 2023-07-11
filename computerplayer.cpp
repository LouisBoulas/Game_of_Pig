// The Game of Pig
// File: computerplayer.cpp
//       Implementation of ComputerPlayer, a dervied class for the 
//       computer to play the game of Pig.


#include "computerplayer.h"
#include <iostream>


void ComputerPlayer:: take_turn()
{
    unsigned int num_rolled;

    std::cout << std::endl;
    std::cout << get_name() << " rolled the following number(s):\n"; 

    for (unsigned int x=0; x<3; ++x)
    {
        num_rolled = dice_instance->roll();

        if (num_rolled == 1)
        {
            std::cout << "1";
            zero_points();
            break;
        }
        else
        {
            std::cout << num_rolled << "  ";
            add_points(num_rolled);
            if (get_points() >= MAX_POINTS)
            {
                std::cout << std::endl;
                break;
            }
        }
    }
       std::cout << std::endl << get_name() << " total points = " 
                 << get_points() << std::endl;
}




