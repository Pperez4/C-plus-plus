/*------------------------------------------------------------------
Random Number Guessing Game Enhancement
Enhance the program so it keeps a count of the number of guesses 
that the user makes. 
When the user correctly guesses the random number, the program should 
display the number of guesses.
------------------------------------------------------------------*/

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

    //Enhancement
    //Counter for guesses
    int guesses = 0;

    

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
        //Enhancement
        guesses++;
        
        if (userNumber > x)
            cout << "TO HIGH.\n";
        else if(userNumber < x)
            cout << "TO LOW.\n";
        
        else if (userNumber == x)
        {
            cout << "YOU GUESSED.\n";
            
            //Enhancement
            cout << "Number of guesses: " << guesses << endl;
            cout << "-------------------------------------------------------\n";
        }
        
        
        
    } while (userNumber != x);
    
}