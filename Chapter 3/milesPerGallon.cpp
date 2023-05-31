//------------------------------------------
// Chapter 3 Programing challenge 1 
//------------------------------------------
// The program calulates a car's millage.
// The programs ask the user to enter the
// number of gallons of gas the car can hold,
// and the number of miles it can be driven 
// on a full tank. Then the number of miles
// per gallon is displayed. 
// HINT: MPG = Miles Driven / Gallons Used
//------------------------------------------

//------------------------
// Include Directives
//------------------------
#include <iostream>
//------------------------
// namespace statement
//------------------------
using namespace std;

//------------------------
// main function 
//------------------------
int main()
{
    //Variables to ask the user for input 
    double numberOfGallons;     
    double milesOnFullTank;
    //Variable for MPG Calculation 
    double MGP;

    //Prompting User 
    cout << "Hi user, please provide the following information." << endl;
    cout << "Enter the number of gallons of gas the car can hold: ";
    cin >> numberOfGallons;
    cout << endl;
    cout << "Enter the number of miles it can be driven on a full tank: ";
    cin >> milesOnFullTank;

    //MGP Calculation with input received from the user 
    MGP = (milesOnFullTank/numberOfGallons);

    //Displaying Result 
    cout << "--------------" << endl;
    cout << "Miles per gallon: " << MGP;
    cout << "--------------" << endl;
}