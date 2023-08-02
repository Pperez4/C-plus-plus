/*-------------------------------------------------------
 Coin Toss
Write a function named coinToss that simulates the 
tossing of a coin. When you call the function, 
it should generate a random number in the range
of 1 through 2.
If the random number is 1, the function should display 
“heads.” If the random number is 2, the function should 
display “tails.” Demonstrate the function in a program
that asks the user how many times the coin should be 
tossed and then simulates the tossing of the coin that
number of times.
------------------------------------------------------*/

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
// Function prototypes 
//------------------------------
void coinToss(int);

int main()
{
    int numberOfTimes;
    cout << endl;
    cout << "How many times the coin should be tossed: ";
    cin >> numberOfTimes;
    coinToss(numberOfTimes);


}

void coinToss(int times)
{
        
    
    for (int i = 1; i <= times; i++)
    {
        srand(time(0));
        int x;
        x = 1 + (rand() % (2 - 1 + 1)); //Random number between 1 - 2 

        cout << i << " ";
        if (x == 1)
            cout << "HEADS\n";
        else if (x == 2)
            cout << "TAILS\n";
    }

}