/*----------------------------------------------------------
Falling Distance
When an object is falling because of gravity, the following 
formula can be used to determine the distance the object falls 
in a specific time period:
d = 1/2 gt^2
The variables in the formula are as follows:
d is the distance in meters
g is 9.8
t is the amount in seconds that the object has been falling.
Write a function named fallingDistance that accepts an object’s 
falling time (in seconds) as an argument. 
The function should return the distance, in meters, that the 
object has fallen during that time interval.
 Write a program that demonstrates the function by calling it 
 in a loop that passes the values 1 through 10 as arguments
and displays the return value.
------------------------------------------------------------*/
//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
#include <iomanip>
#include <cmath>
//------------------------------
// namespace statement
//------------------------------
using namespace std;

//------------------------------
// Function prototypes 
//------------------------------
const double g = 9.8;

double fallingDistance(int);

int main()
{
    double distanceInMeters;

    cout << fixed << showpoint << setprecision(2);
    cout << endl;
    cout << "---------------------------------------------\n";
    for (int i = 1; i <= 10; i++)
    {
        distanceInMeters = fallingDistance(i);
        cout << "Distance fallen: "
             << distanceInMeters << endl;
    }
    cout << "---------------------------------------------\n";
    cout << endl;

}

//--------------------------------------------
// fallingDistance() definition
// accepts an object’s falling time (in seconds) 
// as an argument. 
// The function should return the distance, 
// in meters, that the object has fallen during 
// that time interval.
//--------------------------------------------
double fallingDistance(int t)
{

    double d;
    //d = 1/2 gt^2
    d = (0.50) * g * pow(t,2);

    return d;
}