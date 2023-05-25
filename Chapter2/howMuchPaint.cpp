/*------------------------------------
A particular paint covers 340 
square feet per gallon. The program 
calculates how much gallon's of paint
are needed to paint two wooden fences
that are 6 feet high and 100 feet long
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
//Variables for given information 
double squareFeetPerGallon = 340.0;
double fenceFeetHigh = 6.0;
double fenceFeetLong = 100.0;

//For calculation 
double rectangleArea;
double totalGallonsNeeded;

rectangleArea = fenceFeetLong * fenceFeetHigh;
totalGallonsNeeded = (rectangleArea / squareFeetPerGallon) * 2.0;

cout << "Gallon's needed to paint the two fences: " << totalGallonsNeeded << endl;


}