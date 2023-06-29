/*------------------------------------------------------------------------
Scientists measure an object’s mass in kilograms and its weight in newtons. 
If you know the amount of mass that an object has, you can calculate its 
weight, in newtons, with the following formula:
Weight = mass * 9.8

Write a program that asks the user to enter an object’s mass, and then 
calculates and displays its weight. If the object weighs more than 1,000
 newtons, display a message indicating that it is too heavy. If the object 
 weighs less than 10 newtons, display a message indicating that the object 
 is too light.
--------------------------------------------------------------------------*/

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
    //Variable to prompt user for object mass 
    double ObjectMass;
    //Variable to calculate weight using newtons formula 
    double objectWeight;

    //Prompting user for object mass in kilograms 
    cout << "Please provide the mass of the object (in kilograms): ";
    cin >> ObjectMass;

    //Calculating weight using newtons formula 
    objectWeight = ObjectMass * 9.8;

    //Diplaying the object weight in newtons 
    cout << "Object weight in Newtons: " << objectWeight << endl;


    //Determining wheter the object is lo light or to heavy
    if (objectWeight > 1000)
        cout << "The object is too heavy." << endl;
    else if (objectWeight < 10)
        cout << "The object is too light." << endl;
    
}