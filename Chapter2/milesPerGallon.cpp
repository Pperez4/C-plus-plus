/*----------------------------------
A car holds 15 gallons of gasoline and
can travel 375 miles before refueling.

HINT: MPG = Miles Driven / Gallons Used

Display the number of milles per gallon
-----------------------------------*/
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
    // Variable for number of gallons used
    int numberOfGallons = 15;
    // Variable for miles traveled
    int milesDriven = 375;
    //Miles per gallon
    int MPG = milesDriven / numberOfGallons;
    //Dsiplaying Miles per gallon
    cout << "MGP = " << MPG << endl;
}