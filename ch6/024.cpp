/*------------------------------------------------------------------------------------------
Rock, Paper, Scissors Game
Write a program that lets the user play the game of Rock, Paper, Scissors against the computer. 
The program should work as follows.
1. When the program begins, a random number in the range of 1 through 3 is generated. 
If the number is 1, then the computer has chosen rock. If the number is 2, then the computer 
has chosen paper. If the number is 3, then the computer has chosen scissors. 
(Don’t display the computer’s choice yet.)
2. The user enters his or her choice of “rock”, “paper”, or “scissors” at the keyboard. 
(You can use a menu if you prefer.)
3. The computer’s choice is displayed.
4. A winner is selected according to the following rules:
• If one player chooses rock and the other player chooses scissors, then rock wins. 
(The rock smashes the scissors.)
• If one player chooses scissors and the other player chooses paper, then scissors wins. 
(Scissors cuts paper.)
• If one player chooses paper and the other player chooses rock, then paper wins.
 (Paper wraps rock.)
• If both players make the same choice, the game must be played again to determine the winner.
----------------------------------------------------------------------------------------------*/

#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

//
int MAXIMUM = 3;
int MINIMUM = 1;

int generateRandom();
void findWinner(int, int);


int main()
{

    int user;
    int computer;
    string winner;

    do
    {
        computer = generateRandom();
        cout << "---------------------------------------------------------------\n";
        cout << "\tSelect an option by entering the corresponding number\n";
        cout << "---------------------------------------------------------------\n";
        cout << "1.rock\n";
        cout << "2.paper\n";
        cout << "3.Scissors\n";
        cout << "Enter your selection: ";
            while (!(cin >> user) || user <= 0 || user > 3)
            {
                cout << "Error\n";
                cout << "Your selection must be a numeric value and available in the displayed menu.\n";
                cin.clear();
                cin.ignore(1000,'\n');
                cout << "Enter your selection: ";

            }
        
        
        cout << "Computer Selection: " << computer << endl;
        cout << "User Slection: " << user << endl;
        if (user == 1 && computer == 3)
            winner = "User";
        else if (computer == 1 && user == 3)
            winner = "Computer";

        if (user == 3 && computer == 2)
            winner = "User";
        else if (computer == 3 && user == 2)
            winner = "Computer";

        if (user == 2 && computer == 1)
            winner = "User";
        else if (computer == 2 && user == 1)
            winner = "Computer";
        
        
        
        cout << endl;
        cout << "-----------------\n";
        cout << "Winner\n";
        cout << "-----------------\n";
        cout << winner << endl;
    } while (user == computer);
    
    

    
}

int generateRandom()
{
    srand(time(0));
    int num;

    /*-------------------------------------------------------------------
    To get random values that are within a specified range :
    num = minimum_value + (rand( ) % (maximum_value - minimum_value + 1));
    ---------------------------------------------------------------------*/

    num = MINIMUM + (rand() % (MAXIMUM - MINIMUM + 1));

    return num;
}


