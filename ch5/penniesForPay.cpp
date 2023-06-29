/*------------------------------------------------------------------
Pennies for Pay
Write a program that calculates how much a person would earn over a 
period of time if his or her salary is one penny the first day and 
two pennies the second day, and continues to double each day. 
The program should ask the user for the number of days. Display a t
able showing how much the salary was for each day, and then show the
total pay at the end of the period. 

The output should be displayed in a dollar amount, not the number of
pennies.
Input Validation: Do not accept a number less than 1 for the number 
of days worked.
-------------------------------------------------------------------*/

//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
#include <iomanip>
//------------------------------
// namespace statement
//------------------------------
using namespace std;

//------------------------------
// Main Function
//------------------------------
int main()
{
    //salary is one penny the first day
    double startingSalary = 0.01;
    //number of days 
    int numberOfDays;
    //For calculation 
    double total = 0.0;
// Prompting user
    cout << "Enter the number of days: ";
    cin >> numberOfDays;

//To validate user input for number of days 
    while (numberOfDays == 0 || numberOfDays < 0)
    {
        cout << "Invalid Value for the number of days\n"
             << "please enter a valid value.\n";
        cout << "Enter the number of days: ";
        cin >> numberOfDays; 
    }
    

    cout << fixed << showpoint << setprecision(2);
    cout << "--------------------\n";
    cout << "Day \tSalary \n";
    cout << "--------------------\n";

    //The loop iterates one time for each day
    for (int i = 1; i <= numberOfDays; i++)
    {
        //The 0.01 salary increments 0.01 each iteration
        cout << i << "\t$" << startingSalary * i << endl;
        //Running total 
        total += startingSalary * i;
    }
    cout << "Total Earned: $" << total << endl;

}