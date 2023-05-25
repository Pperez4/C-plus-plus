/*------------------------------------
The average July temperature is 
85 F degrees in New York, 88 F in
Denver, and 106 F in Phoenix.
The program calculates and reports
what is the new average in July
for each of this cities if temperature
increases 2 percent.
--------------------------------------*/

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
    //Given Information
    double tempJulyNY = 88;
    double tempJulyDenver = 85;
    double tempJulyPhoenix = 106;
    // Increase Percentage
    double increasePercentage = 0.02;

    //For calculations
    double newAverageNY;
    double newAverageDenver;
    double newAveragePhoenix;

    newAverageNY = tempJulyNY * increasePercentage + tempJulyNY;
    newAveragePhoenix = tempJulyPhoenix * increasePercentage + tempJulyPhoenix;
    newAverageDenver = tempJulyDenver * increasePercentage + tempJulyDenver;

    //Displaying Information
    cout << "\tNew Temperature Average" << endl;
    cout << "New York: " << newAverageNY << " F degree's" << endl;
    cout << "Denver: " << newAverageDenver << " F degree's" << endl;
    cout << "Phoenix: " << newAveragePhoenix << " F degree's" << endl;




}