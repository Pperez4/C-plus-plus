/*---------------------------------------------------------------------------
Color Mixer
The colors red, blue, and yellow are known as the primary colors because 
they cannot be made by mixing other colors. When you mix two primary colors, 
you get a secondary color, as shown here:
When you mix red and blue, you get purple.
When you mix red and yellow, you get orange. 
When you mix blue and yellow, you get green.

Write a program that prompts the user to enter the names of two primary colors 
to mix. If the user enters anything other than “red,” “blue,” or “yellow,”
 the program should display an error message. 
 Otherwise, the program should display the name of the secondary color that 
 results by mixing two primary colors.
----------------------------------------------------------------------------*/

//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
#include <string>
//------------------------------
// namespace statement
//------------------------------
using namespace std;

//------------------------------
// Main Function
//------------------------------
int main()
{
    //To prompt user for the primary colors 
    string primaryColor1;
    string primaryColor2;
    //variable for resulting color
    string resultingColor;
    //Propting user
    cout << "Remember the primary colors are red, blue, and yellow." << endl;
    cout << "Please, enter only the colors that are in the list." << endl;
    cout << "Format example, the program accepts only lowercase letters\n"
         << "if you wish to enter RED just do red [ENTER]\n";
    cout << "Enter primary color 1: ";
    getline(cin, primaryColor1);
    cout << "Enter primary color 2: ";
    getline(cin, primaryColor2);
    //Determing the color depeding the mix
    if (primaryColor1 == "red" && primaryColor2 == "blue" || primaryColor1 == "blue" && primaryColor2 == "red")
    {
        cout << "Your primary colors.\n" 
             << "Color 1: " << primaryColor1 << endl
             << "Color 2: " << primaryColor2 << endl;
        resultingColor = "Purple";
        cout << "Secondary Color: " << resultingColor << endl;
    }
    else if (primaryColor1 == "red" && primaryColor2 == "yellow" || primaryColor1 == "yellow" && primaryColor2 == "red")
    {
       cout << "Your primary colors.\n" 
             << "Color 1: " << primaryColor1 << endl
             << "Color 2: " << primaryColor2 << endl;
        resultingColor = "Orange";
        cout << "Secondary Color: " << resultingColor << endl;
    }
    else if (primaryColor1 == "blue" && primaryColor2 == "yellow" || primaryColor1 == "yellow" && primaryColor2 == "blue")
    {
        cout << "Your primary colors.\n" 
             << "Color 1: " << primaryColor1 << endl
             << "Color 2: " << primaryColor2 << endl;
        resultingColor = "Green";
        cout << "Secondary Color: " << resultingColor << endl;
    }
    else
    {
       cout << "Invalid Colors" << endl;
       cout << "Make sure the colors you are entering are in the list\n"
            << "[red, blue, or yellow]\n"
            << "Also, remember to enter your color using lowercase letters\n";
    }
    
    }
    
    



