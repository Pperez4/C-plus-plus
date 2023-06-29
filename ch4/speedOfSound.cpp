/*--------------------------------------------------------------------------------
The Speed of Sound
The following table shows the approximate speed of sound in air, water, and steel.
Medium      Speed
Air         1,100 feet per second 
Water       4,900 feet per second
Steel       16,400 feet per second

Write a program that displays a menu allowing the user to select air, water, or steel. 
After the user has made a selection, he or she should be asked to enter the distance 
a sound wave will travel in the selected medium. 
The program will then display the amount of time it will take. 
(Round the answer to four decimal places.)
Input Validation: Check that the user has selected one of the available choices
from the menu. Do not accept distances less than 0.
--------------------------------------------------------------------------------*/
//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
#include <iomanip>
#include <string.h>
//------------------------------
// namespace statement
//------------------------------
using namespace std;

//------------------------------
// Main Function
//------------------------------
int main()
{

    //Variable to prompt user for his/her choice medium
    string userSelection;
    //Variable to prompt user for the distance a sound wave will travel in the selected medium
    double distance;
    //For calculations
    double time;

//Prompting user and giving instructions 
cout << "Select a medium from the following list: [air, water or steel].\n";
cout << "If you decide to use 'air' as your medium simply type air and press [ENTER].\n";
cout << "Your selection must be in the list displayed above, and entered in lowecase letters.\n";
cout << "------------------------------------------------------------------------------------" << endl;
cout << "Selection: ";
getline(cin, userSelection);
cout << "------------------------------------------------------------------------------------" << endl;
cout << "Now please enter the distance a sound wave will travel in the selected medium.\n";
cout << "Distance: ";
cin >> distance;


//To display output in desired format
cout << fixed << showpoint << setprecision(2);
cout << "------------------------------------------------------------------------------------" << endl;

if (distance > 0) //Do not accept distances less than 0. 
{
    if (userSelection == "air")
    {
        //Air 1,100 feet per second 
        cout << "Using " << userSelection << " as your medium.\n";
        time = distance / 1100.0;
        cout << "It will take: " << time << " second(s).\n";
        cout << "Or " << time / 60 << " minute(s).\n";
    }
        else if (userSelection == "water")
    {
        //Water 4,900 feet per second
        cout << "Using " << userSelection << " as your medium.\n";
        time = distance / 4900.0;
        cout << "It will take: " << time << " second(s).\n";
        cout << "Or " << time / 60 << " minute(s).\n";

    }
    else if (userSelection == "steel")
    {
        //Steel 16,400 feet per second
        cout << "Using " << userSelection << " as your medium.\n";
        time = distance / 4900.0;
        cout << "It will take: " << time << " second(s).\n";
        cout << "Or " << time / 60 << " minute(s).\n";
    }
}
else
    cout << "Invalid quantity for distance." << endl; //If distance is less than 0
cout << "------------------------------------------------------------------------------------" << endl;
}