// The Game of Pig
// File: piggame.cpp
//       Implementation of PigGame, a class to play a game of Pig.


#include "piggame.h"
#include <iostream>


PigGame::PigGame(Player* h, Player* c)
{
    human = h;
    computer = c;
}

/*PigGame::~PigGame()
{
    delete human;
    delete computer;
}*/

Player* PigGame:: play()
{
    char choice;
    int num;
    bool bad_input;

    Player* player1;
    Player* player2;


    std::cout<< "\nTo determine who goes first, choose [H]eads or [T]ails: ";

    do
    {
        std::cin>> choice;

        switch (choice)
        {
            case 'H':
            case 'h':
                num = 0;
                bad_input = false;
                break;
            case 'T':
            case 't':
                num = 1;
                bad_input = false;
                break;
            default:
                std::cout<< "Enter H or T --> ";
                bad_input = true;
        }
    }while(bad_input);

    srand(time(0));
    int result = rand()%2;

    if (result == num)
    {
        std::cout << "\nYou start!" << std::endl;
        player1 = human;
        player2 = computer;
    }
    else
    {
        std::cout<< "\n" << computer->get_name() << " starts!" << std::endl;
        player1 = computer;
        player2 = human;
    }

    while (human->get_points() < human->MAX_POINTS && computer->get_points() < 
            computer->MAX_POINTS)
    {
        player1->take_turn();

        if (player1->get_points() >= player1->MAX_POINTS)
            break;

        player2->take_turn();
    }

    if (human->get_points() >= human->MAX_POINTS)
        return human;
    else
        return computer;
}










