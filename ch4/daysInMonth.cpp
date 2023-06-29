/*-------------------------------------------------------------
Days in a Month
Write a program that asks the user to enter the month 
(letting the user enter an integer in the range of 1-12) 
and the year. The program should then display the number 
of days in that month. Use the following criteria to identify
leap years:
1. Determine whether the year is divisible by 100. If it is, 
then it is a leap year if and only if it is divisible by 400. 
For example, 2000 is a leap year but 2100 is not.
2. If the year is not divisible by 100, then it is a leap year
if and if only it is divisible by 4. For example, 2008 is a leap
year but 2009 is not.

-----------------------------------------------------------------*/

//------------------------------
#include <iostream>
#include <cmath>
//------------------------------
// namespace statement
//------------------------------
using namespace std;

//------------------------------
// Main Function
//------------------------------
int main()
{

    //Variable for year
    int year;
    //Variable for month in the range 1-12
    int month;
    //For calculation
    int remainder;

    cout << endl;
    cout << "Enter a month in the range 1-12\n"
         << "for example, if you wish to enter\n"
         << "August simple type 8 and press [ENTER].\n"
         << "Enter month: ";
    cin >> month;
    cout << "Enter a year: ";
    cin >> year;

cout << endl;
cout << "Year: " << year << "\n";
cout << "Month: " << month << "\n";

if (year > 0 && month > 0 && month <= 12)
{
            switch (month)
        {
        case 1:
                cout << "----------\n";
                cout << "31 days\n";
                cout << "----------\n";
            break;
        case 2:
                remainder = year % 4;
                if (remainder == 0)
                {
                    cout << "----------\n";
                    cout << "29 days\n";
                    cout << "----------\n";
                }
                else if (remainder > 0)
                {
                    cout << "----------\n";
                    cout << "28 days\n";
                    cout << "----------\n";
                }
            break;
        case 3: 
                cout << "----------\n";
                cout << "31 days\n";
                cout << "----------\n";
        case 4:
                cout << "----------\n";
                cout << "30 days\n";
                cout << "----------\n";

            break;
        case 5:
                cout << "----------\n";
                cout << "31 days\n";
                cout << "----------\n";
            break;
        case 6: 
                cout << "----------\n";
                cout << "30 days\n";
                cout << "----------\n";
            break;
        case 7:
                cout << "----------\n";
                cout << "31 days\n";
                cout << "----------\n";
            break;
        case 8:
                cout << "----------\n";
                cout << "31 days\n";
                cout << "----------\n";
            break;
        case 9:
                cout << "----------\n";
                cout << "30 days\n";
                cout << "----------\n";
            break;
        case 10:
                cout << "----------\n";
                cout << "31 days\n";
                cout << "----------\n";
            break;
        case 11:
                cout << "----------\n";
                cout << "30 days\n";
                cout << "----------\n";
            break;
        case 12:
                cout << "----------\n";
                cout << "31 days\n";
                cout << "----------\n";
            break;
        default:
            break;
}

}
else
    cout << "Either the value for year or month is not valid.\n";



}