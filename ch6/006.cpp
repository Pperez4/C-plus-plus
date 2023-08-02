/*-------------------------------------------------------------------
Kinetic Energy
In physics, an object that is in motion is said to have kinetic 
energy. The following formula can be used to determine a moving 
object’s kinetic energy:
KE = 1/2 mv^2   
The variables in the formula are as follows: 
KE is the kinetic energy,
m is the object’smass in kilograms
v is the object’s velocity in meters per second.
Write a function named kineticEnergy that accepts an object’s mass 
(in kilograms) and velocity (in meters per second) as arguments. 
The function should return the amount of kinetic energy that the 
object has. Demonstrate the function by calling it in a program 
that asks the user to enter values for mass and velocity.
---------------------------------------------------------------------*/

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
double kineticEnergy(double, double);

int main()
{
    //Variables to prompt user
    double mass;
    double velocity;
    double kineticE;

    cout << "Enter the mass of the object (in kilograms): ";
    while (!(cin >> mass) || mass <= 0.00)
    {
        cout << endl;
        cout << "The mass of the object must be a numeric value and\n"
        << "greater than 0.\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Enter the mass of the object (in kilograms): ";
    }
    cout << endl;
    cout << "Enter the velocity of the object (in meters per second): ";
    while (!(cin >> velocity) || velocity <= 0.00)
    {
        cout << endl;
        cout << "The velocity of the object must be a numeric value and\n"
        << "greater than 0.\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Enter the velocity of the object (in meters per second): ";
    }

    kineticE = kineticEnergy(mass, velocity);

    cout << "----------------------------------\n";
    cout << "\tKinetic Energy Report\n";
    cout << "----------------------------------\n";
    cout << "Object Mass: " << mass << endl;
    cout << "Object Velocity: " << velocity << endl;
    cout << "Kinetic Energy: " << kineticE << " J" << endl;
    cout << "----------------------------------\n";


       
}

//----------------------------------------------------
// kineticEnergy() definition 
// that accepts an object’s mass 
// (in kilograms) and velocity (in meters per second)
// as arguments. The function should return the amount 
// of kinetic energy that the object has.
//-----------------------------------------------------
double kineticEnergy(double m, double v)
{
    //KE = 1/2 mv^2 
    double KE;
    KE = 0.5 * m * pow(v, 2);

    return KE;
}