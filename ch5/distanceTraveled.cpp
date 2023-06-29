/*-------------------------------------------------------------------------
Distance Traveled
The distance a vehicle travels can be calculated as follows:
distance = speed * time

For example, if a train travels 40 miles per hour for 3 hours,the distance 
traveled is 120 miles.

Write a program that asks the user for the speed of a vehicle (in miles per hour)
and how many hours it has traveled. The program should then use a loop to display 
the distance the vehicle has traveled for each hour of that time period.

Here is an example of the output:
What is the speed of the vehicle in mph? 40 
How many hours has it traveled? 3
Hour  Distance Traveled 
------------------------
1            40
2            80 
3           120
Input Validation: Do not accept a negative number for speed and do not accept any 
value less than 1 for time traveled.
-------------------------------------------------------------------------------*/

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
    //for the speed of a vehicle (in miles per hour)
    int speedMPH;
    //hours it has traveled
    int hours;

    //Prompting user
    cout << "-------------------------------------------\n";
    cout << "What is the speed of the vehicle in mph?: ";
    cin >> speedMPH;
    cout << "How many hours has it traveled?: ";
    cin >> hours;
    cout << "-------------------------------------------\n";

    while (speedMPH < 1)
    {
        cout << "Invalid Value for speed of the vehicle in mph.\n"
             << "Enter a valid value: ";
        cin >> speedMPH;
    }
    while (hours <= 0)
    {
        cout << "Invalid Value for hours traveled.\n"
             << "Enter a valid value: ";
        cin >> hours;
    }
    
        cout << "Hour " << "\t" << "Distance Traveled \n";
        cout << "-------------------------------------------\n";

        //The loop iterates once for each hour and then the MPH is multiplied by the hour
        // considering the formula -> distance = speed * time
        for (int i = 1; i <= hours; i++)
        {
            cout << i << "\t" << i * speedMPH << endl;
        }
}