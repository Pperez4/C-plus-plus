/*-----------------------------------------------------------------------
Write a program that asks the user to enter a number of seconds.
• There are 60 seconds in a minute. If the number of seconds 
entered by the user is greater than or equal to 60, 
the program should display the number of minutes in that many seconds.
• There are 3,600 seconds in an hour. If the number of seconds entered 
by the user is greater than or equal to 3,600, the program should display 
the number of hours in that many seconds.
• There are 86,400 seconds in a day. If the number of seconds entered by 
the user is greater than or equal to 86,400, the program should display 
the number of days in that many seconds.
-------------------------------------------------------------------------*/
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
    //Variables for the if/else if statements 
    int numberOfMinutes;
    int numberOfHours;
    int numberOfDays;
    //Variable to promt user for seconds
    int userSeconds;
    //Prompting user 
    cout << "Enter the number of seconds: ";
    cin >> userSeconds;

    if (userSeconds >= 60 && userSeconds < 3600)
    {
        numberOfMinutes = userSeconds / 60;
        cout << "You entered: " << userSeconds << " seconds." << endl;
        cout << "Number of minutes: " << numberOfMinutes << endl;
    }
    else if (userSeconds >= 3600 && userSeconds < 86400)
    {
        numberOfHours = userSeconds / 3600;
        cout << "You entered: " << userSeconds << " seconds." << endl;
        cout << "Number of hours: " << numberOfHours << endl;
    }
    else if (userSeconds >= 86400)
    {
       numberOfDays = userSeconds / 86400;
       cout << "You entered: " << userSeconds << " seconds." << endl;
       cout << "Number of days: " << numberOfDays << endl;
    }
    else
        cout << "Invalid Value." << endl;
    
}

