
/*-----------------------------------------------------------------------
The following table lists the freezing and boiling points of several 
substances. Write a program that asks the user to enter a temperature 
and then shows all the substances that will freeze at that temperature 
and all that will boil at that temperature. For example, if the user 
enters −20 the program should report that water will freeze and oxygen 
will boil at that temperature.


Substance           Freezing Point (°F)     Boiling Point (°F)
Ethyl alcohol       -173                    172
Mercury             -38                     676
Oxygen              -362                   -306
Water                32                     212

--------------------------------------------------------------------------*/

//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
#include <cmath>
//------------------------------
// namespace statement
//------------------------------
using namespace std;

//------------------------------
// Main Function
//------------------------------
int main()
{
   // Variable to asks the user to enter a temperature 
   double temperature;
    //Propting user 
   cout << "Enter a temperature: ";
   cin >> temperature;

cout << "Reaction of the susbstances at " <<  temperature << " (°F)." << endl;



  //Determining substances that will frezze.
    cout << "-------------------------------\n"; 
    cout << "\tSubstances that will frezze.\n";
    if (temperature <= -173 )
      //Ethyl alcohol  -173 (°F)
        cout << "Ethyl Alcohol\n";
    else if (temperature <= -38)
      // Mercury -38 (°F)
        cout << "Mercury\n";
    else if (temperature <= 32)
    //Water 32 (°F)
        cout << "Water\n";
    else if (temperature  <=  -362 )
    //Oxygen -362 (°F)
        cout << "Oxygen\n";
    else
        cout << "None\n";
        
    cout << "-------------------------------\n";
    // Determining Subtances that will boil.
    cout << "-------------------------------\n";
    cout << "\tSubtances that will boil.\n";
    if (temperature >= 172)
    //Ethyl alcohol  172 (°F)
        cout << "Ethyl Alcohol\n";
    else if (temperature >= 676)
    //Mercury 676 (°F)
        cout << "Mercury\n";
    else if (temperature >= 212)
    //Water 212 (°F)
        cout << "Water\n";
    else if (temperature >= -306)
     //Oxygen  -306 (°F)
        cout << "Oxygen\n";
    else 
        cout << "None\n";
cout << "-------------------------------\n";
}


















