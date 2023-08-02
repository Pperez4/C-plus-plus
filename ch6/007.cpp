/*-----------------------------------------------------------------------------------------
Celsius Temperature Table
The formula for converting a temperature from Fahrenheit to Celsius is
C = 5/9(F - 32)

 F is the Fahrenheit temperature 
 C is the Celsius temperature. 
 Write a function named celsius that accepts a Fahrenheit temperature as an argument. 
 The function should return the temperature, converted to Celsius.
Demonstrate the function by calling it in a loop that displays a table of the Fahrenheit 
temperatures 0 through 20 and their Celsius equivalents.
-----------------------------------------------------------------------------------------*/


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
// Function prototypes 
//------------------------------
double celsius(int);

int main()
{


    cout << endl;
    cout << "----------------------------------------------------------------------\n";
    cout << " \t°F  0 through 20 and their °C equivalents\n.";
    cout << "----------------------------------------------------------------------\n";
   
    double tempCelsius;
    int fahrenheit = 0;

    cout << fixed << showpoint << setprecision(2);
    for (fahrenheit = 1; fahrenheit <= 20; fahrenheit++)
    {
        tempCelsius = celsius(fahrenheit);
        cout << fahrenheit << "°F = " << tempCelsius << "°C" << endl;
    }
    cout << endl;
    
}


//------------------------------------------------
// celsius () Definition
// accepts a Fahrenheit temperature as an argument. 
// returns the temperature, converted to Celsius.
//------------------------------------------------
double celsius(int F)
{
 double temperatureInC;

    temperatureInC =  (F-32) * .5556;

    return temperatureInC;
}