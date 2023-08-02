/*------------------------------------------------------------------------
When it is complete, the program will ask the user to enter the width
 and length of a rectangle and then display the rectangle’s area. 
 The program calls the following functions, which have not been written:
• getLength – This function should ask the user to enter the rectangle’s 
length and then return that value as a double.
• getWidth – This function should ask the user to enter the rectangle’s 
width and then return that value as a double.
• getArea – This function should accept the rectangle’s length and width 
 as arguments and return the rectangle’s area. The area is calculated
 by multiplying the length by the width.
• displayData – This function should accept the rectangle’s length, width,
 and area as arguments and display them in an appropriate message on the 
 screen.
------------------------------------------------------------------------*/
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

double getLenght();
double getWidth();
double getArea(double, double);
void displayData(double, double, double);
//------------------------------
// Main Function
//------------------------------

int main()
{
    double l; //Variable for lenght
    double w; //Variable for width
    double area;

    //Calling function to get lenght
    l = getLenght();
    //Calling function to get width
    w = getWidth();

    area = getArea(l, w);
    displayData(l, w, area);
}

//------------------------------------------------
// getLenght definition
//------------------------------------------------
double getLenght()
{
    double lenght;
    cout << "Enter the lenght: ";
    while (!(cin >> lenght) || lenght <= 0)
    {
        cout << endl;
        cout << "Lenght must be a numeric value and greater than 0.00\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Enter the lenght: ";
    }
    
    return lenght;
}

//------------------------------------------------
// getWidth definition
//------------------------------------------------
double getWidth()
{
    double width;
    cout << "Enter Width: ";
    while (!(cin >> width) || width <= 0)
    {
        cout << endl;
        cout << "Width must be a numeric value and greater than 0.00\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Enter the Width: ";
    }
    
    return width;
}
//------------------------------------------------
// getArea definition
//------------------------------------------------


double getArea(double l, double w)
{
    return l * w;
}

//------------------------------------------------
// displayData definition
//------------------------------------------------

void displayData(double l, double w, double a)
{
    cout << "--------------------------------\n";
    cout << "\tRectangle Details\n";
    cout << "--------------------------------\n";
    cout << "Lenght: " << l << endl;
    cout << "Width: " << w << endl;
    cout << "Area: " << a << endl;
    cout << "--------------------------\n";


}