/*-----------------------------------------------------------------
Write a program that asks the user for a positive integer value. 
The program should use a loop to get the sum of all the integers
from 1 up to the number entered. For example, if the user enters 50, 
the loop will find the sum of 1, 2, 3, 4, ... 50.
Input Validation: Do not accept a negative starting number.
-------------------------------------------------------------------*/
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
    //Variable for positive integer value
    int userValue;
    //To calculate the sum
    int sum = 0;
    //To prompt user if he or she wants to repeat the program 
    char again; //Y or N


//while the user value is less than 0 or equal  to 0 
//display an error message and ask the user for 
//valid value. 
    while (userValue <= 0)
    {
        cout << "Error, Invalid Value.\n";
        cout << "Please enter a positive integer value.\n";
        cout << "Value: ";
        cin >> userValue;
    }
//do while loop
    do
    {
     //Prompt user
        cout << "----------------------------------------\n";
        cout << "Please enter a positive integer value.\n";
        cout << "Value: ";
        cin >> userValue;
        cout << "----------------------------------------\n";
        

            cout << "Number entered: " << userValue << endl;
            cout << "----------------------------------------\n";
            //for loop
            //i is a counter that is incremented until it is
            //less than or equal to the value entered by the user. 
            //The loop interates from 1 up to the number entered
            for (int i = 1; i <= userValue; i++)
            {
                cout << i << " " << endl; 
                //Sum adds up in each iteration
                sum += i;
            }
            cout << "----------------------------------------\n";
            cout << "Sum of all the integers from 1 up to the number entered = " << sum << endl;
            //Asking user if they want to repeat the program. 
            cout << "Do you want to enter another value (Y/N): ";
            cin >> again;
    } while (again == 'Y' || again == 'y');
    
}

