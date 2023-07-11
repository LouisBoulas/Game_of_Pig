// CISC 2000  Fordham University  Spring 2020
// Instructor: Vincent Mierlak
//
// HW 9: The Game of Pig.
// File: humanplayer.cpp
//       Implementation of HumanPlayer, a dervied class for a human player 
//       in the game of Pig.

#include "humanplayer.h"
#include <iostream>
#include <vector>


void HumanPlayer:: take_turn()
{
    char choice;
    bool need_input = true;
    unsigned int num_rolled;
    int multiple;

    do
    {
            std::cout << "\n[R]oll, [H]old or [M]ultiple rolls? ";
            std::cin >> choice;
            
            switch (choice)
            {
                case 'R':
                case 'r':
                    num_rolled = dice_instance->roll();
                   
                    if (num_rolled == 1)
                    {
                        std::cout << "Oh no! You rolled a 1 :(" << std::endl;
                        zero_points();
                        need_input = false;
                    }
                    else
                    {
                        add_points(num_rolled);
                        std::cout << "You rolled a " << num_rolled << "!"
                                  << std::endl;
                        std::cout << "Total points: " << get_points() 
                                  << std::endl;
                        if(get_points() >= MAX_POINTS)
                            need_input = false;
                    }
                    break;
                case 'H':
                case 'h':
                    need_input = false;
                    break;
                case 'M':
                case 'm':
                    do
                    {
                        std::cout << "How many times do you want to roll? ";
                        std::cin >> multiple;
                    }while(multiple < 1);
                    std::cout << "\nYou rolled the following number(s):\n";
                    for (int x=0; x<multiple; ++x)
                    {
                        num_rolled = dice_instance->roll();
                        if (num_rolled == 1)
                        {
                            std::cout << "1";
                            zero_points();
                            need_input = false;
                            break;
                        }
                        else
                        {
                            add_points(num_rolled);
                            std::cout << num_rolled << "  ";
                            if (get_points() >= MAX_POINTS)
                            {
                                need_input = false;
                                break;
                            }
                        }
                    }
                    std::cout << "\nTotal points: " << get_points() 
                              << "\n\n";
                    break;
                default:
                    std::cout << "Invalid choice" << std::endl;
            }
        }while(need_input);
}


