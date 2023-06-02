/*--------------------------------------------------
The program converts Celsius temperature to
Fahrenheit temperature. 
FORMULA: F = 9/5C + 32
----------------------------------------------------*/


//------------------------
// Include Directives
//------------------------
#include <iostream>
#include <iomanip>
#include <string.h>
//------------------------
// namespace statement
//------------------------
using namespace std;

//------------------------
// main function 
//------------------------
int main()
{
    //To prompt User
    double tempInCelsius;
    //To convert the C to F
    double tempInFahrenheit;

    cout << "Enter the temperature in Celcius: ";
    cin >> tempInCelsius;

    tempInFahrenheit = (tempInCelsius * 9/5) + 32;

    //Displaying Conversion 
    cout << "-----------------------------------------------------------------------------------" << endl;
    cout << tempInCelsius << " Celsius is equivalent to " << tempInFahrenheit << " Fahrenheit" << endl;
    cout << "-----------------------------------------------------------------------------------" << endl;
}
    