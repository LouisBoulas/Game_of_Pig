# Game_of_Pig
I ran into one main block when writing up this program that left me stumped for
a while. The only way I was able to call the roll() function from the dice
class was by making my humanplayer class and computerplayer class be also
derived from Dice (double inheritance). It took me a while to figure out how to
go about implementing it differently. And I realized i could make a pointer in
Player class call an instance of Dice. I made this pointer variable protected
within Player so that my derived classes could also use the pointer in order
to call roll(). Which meant in my virtual destructor I also had to make sure i
deleted the dice instance inside Player and create the dice instance within
the player constructor. I did believe it was necessary to use a default
constructor because the program asks for a user to give a name before it
creates an object of the Player class.

I also added 1 feature, which is to allow a player to not only roll or hold on 
their turn but to have the game roll multiple times for them without being prompted
each time for their next move. For example, if they choose the multiple rolls, 
they then have to enter a positive number, such as 5, and the program will roll 5
times for them as long as a 1 isn't rolled and tally it up to their total score.
