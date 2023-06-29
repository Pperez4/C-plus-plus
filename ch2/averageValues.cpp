/*---------------------------------------
The program storages the following values
in in five different varaibles: 28,32,37,
24,33. The program first should calculate 
the sum of this variables in a separate
variable called "Sum" and then divided by
5 in order to get the average.
Dsiplay the result is the screen.

TIP: Use the double data type for all
variables.
----------------------------------------*/

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
    //Variables to store values
    
    double valueOne = 28.0, 
    valueTwo = 32.0,
    valuethree = 37.0,
    valueFour = 24.0,
    valueFive = 33.0;

    //Variable to store the sum
    double sum;
    //Variable for average
    double average;

    //Calculating sum
    sum = valueOne + valueTwo + valuethree + valueFour + valueFive;

    // Calculating Average
    average = sum / 5.0;

    //Display Result 
    cout << "The average of the given quantities is: " << average << endl;
}