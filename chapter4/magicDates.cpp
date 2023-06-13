/*------------------------------------------------------
The date June 10, 1960 is special because when we write
it in the following format: 
6/10/60
The month times the day equals the year

Ask the user to enter a month (numeric form) , a day and
a two digit year. The program should determine wheter the
month times the year equal to the year. If so it shoudl
display a message saying the data is magic. Otherwise, 
it shoudl display a message saying the date is not magic 
--------------------------------------------------------*/



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
    //Variables to promt user for month, day and year.
    int month,
        day,
        year;

        cout << "Please enter a date in the requested format." << endl;
        cout << "Enter a month in muneric format, for example august would be\n"
             << "8 [ENTER]: ";
        cin >> month;
        cout << "Enter a day: ";
        cin >> day;
        cout << "Enter a year in two digit format, for example 1966 should be\n"
             << " 66 [Enter]: ";
        cin >> year;

if (month * day == year)
    cout << month << "/" << day << "/" << year << " is a Magic Date.";
else if (month * day != year)
    cout << month << "/" << day << "/" << year << " is not a Magic Date.";
    
}