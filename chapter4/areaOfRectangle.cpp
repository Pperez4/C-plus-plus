/*----------------------------------------------------------
The area of a rectangle is its length times the width. Ask
the user to enter the lenght and width of two rectangles.
The program shoudl tell the user which as the greater area 
or if the areas are equivalent.
-----------------------------------------------------------*/


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

    //To calculate the area of the rectangles
    double areaRectangleOne;        //For rectangle One
    double areaRectangleTwo;        //For rectangle Two 

    //To promt user for dimensions
    double lengthRectangleOne;      //length for rectangle One
    double lengthRectangleTwo;      //length for rectangle Two
    double widthRectangleOne;       //Width for rectangle One
    double widthRectangleTwo;       //Width for rectangle Two


    //Prompting user for dimensions
    cout << "Provide the dimensions for rectangle 1." << endl;
    cout << "length: ";
    cin >> lengthRectangleOne;
    cout << "Width: ";
    cin >> widthRectangleOne;
    cout << "Provide the dimensions for rectangle 2." << endl;
    cout << "length: ";
    cin >> lengthRectangleTwo;
    cout << "Width: ";
    cin >> widthRectangleTwo;


    //Calculating the area
    areaRectangleOne = lengthRectangleOne * widthRectangleOne;
    areaRectangleTwo = lengthRectangleTwo * widthRectangleTwo;

//Displaying Area
cout << "Area rectangle 1: " << areaRectangleOne << endl;
cout << "Area rectangle 2: " << areaRectangleTwo << endl;

//Determing which area is greater 
if (areaRectangleOne > areaRectangleTwo)
    cout << "Rectangle 1 has a greater area than rectangle 2." << endl;
else if (areaRectangleTwo > areaRectangleOne)
     cout << "Rectangle 2 has a greater area than rectangle 1." << endl;
else if(areaRectangleOne == areaRectangleTwo)
    cout << "Both rectangles have the exact same area." << endl;

}