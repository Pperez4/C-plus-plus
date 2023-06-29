/*----------------------------------------------------------------------------------
When sound travels through a gas, its speed depends primarily on the density 
of the medium. The less dense the medium, the faster the speed will be. 
The following table shows the approximate speed of sound at 0 degrees centigrade, 
measured in meters per second, when traveling through -> 
Medium                  Speed (Meters per Second)
Carbon Dioxide          258.0
Air                     331.5
Helium                  972.0
Hydrogen                1,270.0


Write a program that displays a menu allowing the user to select one of these four
gases. After a selection has been made, the user should enter the number of seconds 
it took for the sound to travel in this medium from its source to the location at 
which it was detected. The program should then report how far away (in meters) 
the source of the sound was from the detection location.

Input Validation: Check that the user has selected one of the available menu choices. 
Do not accept times less than 0 seconds or more than 30 seconds.
----------------------------------------------------------------------------------*/

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
// Main Function
//------------------------------
int main()
{
    //string for user medium selection 
    int userSelection;
    //number of seconds it took for the sound to travel in this medium 
    double timeInseconds;
    //for calculations 
    double distanceTraveled;

    const int CARBON_DIOXIDE = 1,
              AIR = 2,
              HELIUM = 3,
              HYDROGEN = 4;
    

    //Prompting user for her/his selection
    cout <<"\t\tMedium Menu.\n"
         << "1. Carbon Dioxide\n"
         << "2. Air\n"
         << "3. Helium\n"
         << "4. Hydrogen\n\n"
         << "Enter your choice: ";
         cin >> userSelection;

    cout << "-------------------------------------------------------------------------------------" << endl;
    cout << "Now, enter the number of seconds it took for the sound to travel in this medium.\n";
    cout << "The program does not accept times less than 0 seconds or more than 30 seconds.\n";
    cout << "Seconds: ";
    cin >> timeInseconds;

cout << fixed << showpoint << setprecision(2);

cout  << "-------------------------------------------------------------------------------------" << endl;
    if (userSelection == 1 || userSelection == 2 || userSelection == 3 || userSelection == 4 && timeInseconds > 0 && timeInseconds <= 30)
    {
        switch (userSelection)
        {
        case CARBON_DIOXIDE: 
                cout << "Your medium selection: Carbon Dioxide" << endl;
                distanceTraveled = timeInseconds * 258.0;
                cout << "Distance traveled in " << timeInseconds << " seconds: " << distanceTraveled << " meters.\n";
            break;
        case AIR:
                cout << "Your medium selection: Air" << endl;
                distanceTraveled = timeInseconds * 331.5;
                cout << "Distance traveled in " << timeInseconds << " seconds: " << distanceTraveled << " meters.\n";
            break;
        case HELIUM:
                cout << "Your medium selection: Helium" << endl;
                distanceTraveled = timeInseconds * 972.0;
                cout << "Distance traveled in " << timeInseconds << " seconds: " << distanceTraveled << " meters.\n";
            break;
        case HYDROGEN:
                cout << "Your medium selection: Hydrogen" << endl;
                distanceTraveled = timeInseconds * 1270.0;
                cout << "Distance traveled in " << timeInseconds << " seconds: " << distanceTraveled << " meters.\n";
            break;
        default:
            break;
        }
    }
    else 
        cout << "Invalid Values either for medium or time in seconds.\n";
    
    cout << "-------------------------------------------------------------------------------------" << endl;
}
