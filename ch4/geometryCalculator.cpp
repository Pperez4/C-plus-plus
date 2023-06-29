/*-----------------------------------------------------------------------------------------------------------
Write a program that displays the following menu:
Geometry Calculator
1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle 
4. Quit

Enter your choice (1-4):
1.The program should ask for the radius of the circle and then display its area. 
Use the following formula: area = πr2
Use 3.14159 for π and the radius of the circle for r. 

2. The program should ask for the length and width of the rectangle and then display the rectangle’s area.
Use the following formula: area = length * width
3. the program should ask for the length of the triangle’s base and its height, and then display its area. 
Use the following formula: area = base * height * .5
4. the program should end.

Input Validation: Display an error message if the user enters a number outside the range of 1 through 4
 when selecting an item from the menu. Do not accept negative values for the circle’s radius, 
 the rectangle’s length or width, or the triangle’s base or height.
-----------------------------------------------------------------------------------------------------------*/

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
// Main Function
//------------------------------
int main()
{

//To calculate the circle area
const double PI = 3.14159;
double radius;
//Variable for area depending on the figure
 double area;
//Variables for area of rectangle 
double length;
double width;
//Variables for area of triangle
double base;
double height;

//Variables to create a menu
    const int AREA_CIRCLE = 1,
              AREA_RECTANGLE = 2,
              AREA_TRIANGLE = 3,
              QUIT = 4;
//Variable for user choice
int userChoice;

//Prompting user for a selction 
cout << "\t\tGeometry Calculator.\n";
cout << "Please make a selection.\n";
cout << "1. Calculate the Area of a Circle\n"
     << "2. Calculate the Area of a Rectangle\n"
     << "3. Calculate the Area of a Triangle\n"
     << "4. Quit\n";
     cin >> userChoice;


if (userChoice == 1 || userChoice == 2 || userChoice == 3 || userChoice == 4)
{
    cout << fixed << showpoint << setprecision(2);
   //Implementing a menu
switch (userChoice)
{
case 1:
        cout << "You selected the  Area of a Circle\n";
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        if (radius > 0)
        {
            area = PI * pow(radius,2);
            cout << "Circle Area: " << area << endl;
        }
        else 
            cout << "Invalid value for radius.\n";
        
    break;
case 2:
        cout << "You selected the Area of a Rectangle\n";
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the width: ";
        cin >> width;
        if (width > 0 && length > 0)
        {
            area = width * length;
            cout << "Area of Rectangle: " << area << endl;
        }
        else 
            cout << "Invalid value for heigth or width.\n";
        
    break;
case 3:
        cout << "You selected the Area of a Triangle\n";
        cout << "Enter the base: ";
        cin >> base;
        cout << "Enter the height: ";
        cin >> height;
        area = base * height * 0.5;
        cout << "Area of Triangle: " << area << endl;
    break;
case 4:
        cout << "Program terminating...\n";
    break;
default:
    break;
}
}
else  
    cout << "Invalid Selection\n";


   return 0; 
}