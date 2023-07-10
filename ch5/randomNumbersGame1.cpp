/*-------------------------------------------------------------
Random Number Guessing Game
Write a program that generates a random number and asks the user 
to guess what the number is. If the user’s guess is higher than 
the random number, the program should display “Too high, try again.” 
If the user’s guess is lower than the random number, the program 
should display “Too low, try again.” The program should use a loop 
that repeats until the user correctly guesses the random number.
---------------------------------------------------------------*/

//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
#include <cstdlib> 
#include <ctime> 
//------------------------------
// namespace statement
//------------------------------
using namespace std;

//------------------------------
// Main Function
//------------------------------
int main()
{

    //Range for random number 
    const int MAX_VALUE = 50;
    const int MIN_VALUE = 1;


    int seed = time(0);
    srand(seed);

    //Random number
    int x;
    x = (rand( ) % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

    //User number
    int userNumber;


    

    do
    {
        cout << endl;
        cout << "-------------------------------------------------------\n";
        cout << "Enter a number in the range of 1-50\n";
        cout << "and I will tell you if is equal to my random number.\n";
        cout << "-------------------------------------------------------\n";
            while (!(cin >> userNumber))
            {
                cout << "It must be an integer value.\n";
                cout << "Try again\n";
                cin.clear();
                cin.ignore(1000, '\n');
            }
        
        
        if (userNumber > x)
            cout << "TO HIGH.\n";
        else if(userNumber < x)
            cout << "TO LOW.\n";
        else if (userNumber == x)
            cout << "YOU GUESSED.\n";
        
        
        
    } while (userNumber != x);
    
}