/*--------------------------------------------------------
Pizza Palace needs a program to calculate the number of 
slices a pizza of any size can be divided into.

The program does the following 
A) Ask the user for the diameter of the pizza in inches.
B) Calculate the number of slices that may be taken 
from a pizza of that size.
C) Display a message telling the number of slices.

Each slice should have an area of 14.125 inches.
• To calculate the number of slices, simply divide the 
area of the pizza by 14.125.
• The area of the pizza is calculated with this formula:

Area = πr^2

N O T E : π is the Greek letter pi. 3.14159 can be used 
as its value. The variable r is the radius of the pizza. 
Divide the diameter by 2 to get the radius.

---------------------------------------------------------*/




//------------------------
// Include Directives
//------------------------
#include <iostream>
#include <iomanip>
#include <cmath>
//------------------------
// namespace statement
//------------------------
using namespace std;

//------------------------
// main function 
//------------------------
int main()
{
    //Each slice should have an area of 14.125 inches
    const double eachSliceArea = 14.125;
    //Decimal Constant for PI
    const double  PI = 3.14159;

    //Variable(s) to promt user for input 
    double pizzaDiameter;

    //For calculation
    double pizzaRatio;
    double pizzaArea;
    double slicePerPizza;
    //Prompting user
    cout << "Provide the following information." << endl;
    cout << "Pizza Diameter:";
    cin >> pizzaDiameter;
    //Calculating Ratio
    pizzaRatio = pizzaDiameter / 2;
    //Calculating pizza area 
    pizzaArea = PI * pow(pizzaRatio, 2);
    //Slice per pizza
    slicePerPizza = pizzaArea / eachSliceArea;
    //Displaying Result
    cout << fixed << showpoint << setprecision(1);
    cout << "--------------------------------" << endl;
    cout << "Number of slice's: " << slicePerPizza << endl;
    cout << "--------------------------------" << endl;


}