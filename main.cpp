// The Game of Pig
//
// HW 9: The Game of Pig.
// File: main.cpp
//       Main program to play one game of Pig.

#include <iostream>
#include "humanplayer.h"
#include "computerplayer.h"
#include "piggame.h"

using namespace std;

int main()
{
   
    string name;
    cout << "Welcome to the game of Pig!\n";
    cout << "What's your name? Enter here --> ";
    cin >> name;
  //  cout << name << endl; //ADDED

    HumanPlayer *human = new HumanPlayer(name);
 //   human->take_turn(); //ADDED

    ComputerPlayer *computer = new ComputerPlayer("Hal");
  //  computer->take_turn(); // ADDED
    PigGame g(human, computer);

    Player *winner = g.play();

    cout << "\n***** WE HAVE A WINNER! *****\n";
    cout << "   The winner is: " << *winner << "!" << endl;
    if (winner->get_name() == name)
        cout << "   Well done!";
    else
        cout << "   Better luck next time.";
    cout << endl;

    return 0;
}
