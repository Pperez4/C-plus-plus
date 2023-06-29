/*--------------------------------------------------------------------------
A long-distance carrier charges the following rates for telephone calls:
Starting Time of Call       Rate per Minute
00:00–06:59                 0.05
07:00–19:00                 0.45
19:01–23:59                 0.20



Write a program that asks for the starting time and the number of minutes 
of the call, and displays the charges. The program should ask for the time
to be entered as a floating- point number in the form HH.MM. 
For example, 07:00 hours will be entered as 07.00, and 16:28 hours will be entered
 as 16.28.
Input Validation: The program should not accept times that are greater than 23:59. 
Also, no number whose last two digits are greater than 59 should be accepted. 
Hint: Assuming num is a floating-point variable, the following expression will 
give you its fractional part:
num − static_cast<int>(num)
---------------------------------------------------------------------------*/

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
    
    //To promt user
    double callStartingTime;
    int minutesCallDuration;

    //For calculation
    double ratePerMinute; 
    double total;

// The program should ask for the timeto be entered as a floating point 
//number in the form HH.MM. 

cout << "---------------------------------------------------------------------------\n";
cout << "\t\tInstructions\n";
cout << "Enter the starting time of the call in HH.MM format.\n"
     << "for example if the call started at 07:00 hours simply\n"
     << "enter 07.00\n";
cout << "NOTE The program does not accept times that are greater than 23:59\n" 
     << "Also, no number whose last two digits are greater than 59 are accepted.\n";
cout << "Starting Time: ";
cin >> callStartingTime;
cout << "Enter the duraration of the call in minutes: ";;
cin >> minutesCallDuration;
    

if (callStartingTime  -  static_cast<int>(callStartingTime) <= .59 && callStartingTime < 23.59)
{
    cout << "Starting Time: " << callStartingTime << endl;
    cout << "Minutes: " << minutesCallDuration << endl;
    cout << fixed << showpoint << setprecision(2);
    // Starting time 00:00–06:59  rate per minute 0.05
    if (callStartingTime > 00.00 && callStartingTime <= 06.59)
    {
        ratePerMinute = 0.05;
        total = ratePerMinute * minutesCallDuration;
        cout << "-----------------------------------\n";
        cout << "Total charges: $" << total << endl;
        cout << "-----------------------------------\n";
    }
    else if (callStartingTime >= 07.00 && callStartingTime <= 19.00)
    {
         // Starting time 07:00–19:00  rate per minute 0.45
         ratePerMinute = 0.45;
         total = ratePerMinute * minutesCallDuration;
         cout << "-----------------------------------\n";
         cout << "Total charges: $" << total << endl;
         cout << "-----------------------------------\n";
    }
    else if (callStartingTime >= 19.01 && callStartingTime <= 23.59)
    {
         // Starting time 19:01 - 23.59  rate per minute 0.20
         ratePerMinute = 0.20;
         total = ratePerMinute * minutesCallDuration;
         cout << "-----------------------------------\n";
         cout << "Total charges: $" << total << endl;
         cout << "-----------------------------------\n";
    }
}
else if (callStartingTime  -  static_cast<int>(callStartingTime) > .59 || callStartingTime > 23.59)
    cout << "Invalid value for starting time.\n";

}
