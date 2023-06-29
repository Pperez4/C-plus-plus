/*--------------------------------------------------------
Write a program that asks the user for an angle, entered 
in radians. The program should then display the sine,cosine,
and tangent of the angle. (Use the sin, cos, and tan library 
functions to determine these values.) 
The output should be displayed in fixed-point notation, 
rounded to four decimal places of precision.
---------------------------------------------------------*/
//------------------------
// Include Directives
//------------------------
#include <iostream>
#include <iomanip>
#include <cmath>
//------------------------
// namespace statement
//------------------------
using namespace std;

//------------------------
// main function 
//------------------------
int main()
{
    //Variable to prompt user
    double angleAsRadiant;

    //For calculation
    double y;

    cout << "Enter an Angle expressed as a radiant: ";
    cin >> angleAsRadiant;

cout << fixed << showpoint << setprecision(4);
    //Calculating and displaying sine
    
    cout << "---------------------" << endl;
    y = sin(angleAsRadiant);
    cout << "Sine: " << y << endl;

    //Calculating and displaying cosine
    y = cos(angleAsRadiant);
    cout << "Cosine: " << y << endl;

    //Calculating and displaying tangent 
    y = tan(angleAsRadiant);
    cout << "Tangent: " << y << endl;
    cout << "---------------------" << endl;
}