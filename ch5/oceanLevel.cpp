/*------------------------------------------------------------------------
Assuming the ocean’s level is currently rising at about 1.5 millimeters 
per year, write a program that displays a table showing the number of 
millimeters that the ocean will have risen each year for the next 25 years.
-----------------------------------------------------------------------*/

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
    //for the next 25 years.
    const int NUMBER_OF_YEARS = 25;
    //currently rising at about 1.5 millimeters 
    const double RISING_MILLIMETERS = 1.5;


    cout << "Year " << "\t" << " Millimeters\n";
    cout << "-----------------------------------\n";
    for (int i = 1; i <= NUMBER_OF_YEARS; i++)
    {
        cout << i << "\t " << i * RISING_MILLIMETERS << endl;
    }
    
}