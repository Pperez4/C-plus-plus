/*-----------------------------------------------------------------------------
Square Display
Write a program that asks the user for a positive integer no greater 
than 15. The pro- gram should then display a square on the screen using 
the character ‘X’. 
The number entered by the user will be the length of each side of the square. 
For example, if the user enters 5, the program should display the following:
   XXXXX
   XXXXX
   XXXXX
   XXXXX
   XXXXX
If the user enters 8, the program should display the following:
   XXXXXXXX
   XXXXXXXX
   XXXXXXXX
   XXXXXXXX
   XXXXXXXX
   XXXXXXXX
   XXXXXXXX
   XXXXXXXX
-----------------------------------------------------------------------------*/

//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream> 
//------------------------------
// namespace statement
//------------------------------
using namespace std;

//------------------------------
// Main Function
//------------------------------
int main()
{

    //variable for user integer 1-15 range.
    int userNumber;

    cout << endl;

    
    cout << "Enter a number in 1-15 range: ";
    while (!(cin >> userNumber) || userNumber < 1 || userNumber > 15)
    {
       cout << "ERROR\n";
       cout << "It must be a numeric value in the 1-15 range.\n";
       cin.clear();
       cin.ignore(1000, '\n');
    }

    cout << "-----------------------------------------------------------\n";
    cout << "\t\tSquare Display\n";
    cout << "-----------------------------------------------------------\n";
    for (int i = 1; i <= userNumber; i++)
    {
        for (int j = 1; j <= userNumber; j++)
        {
            cout << 'X';
        }
        
        cout << "\n";
    }
    cout << "-----------------------------------------------------------\n";
    
}