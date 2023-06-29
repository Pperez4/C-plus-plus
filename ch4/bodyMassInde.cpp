/* ------------------------------------------------------------
Write a program that calculates and displays 
a person’s body mass index (BMI)

BMI = weight 703 / height ^ 2

where weight is measured in pounds and height is measured in 
inches. The program should display a message indicating whether 
the person has optimal weight, is underweight, or is overweight. 

Optimal BMI is between 18.5 and 25
BMI less than 18.5, considered to be underweight
BMI greater than 25, considered to be overweight
---------------------------------------------------------------*/


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
    //Variables to promt user for weight and height 
    double height;
    double weight;

    //Variables for calculation 
    double IBM;

    //Prompting user 
    cout << "Enter your height in inches: ";
    cin >> height;
    cout << "Enter your weight in pounds: ";
    cin >> weight;

    //Calculating IBM
    IBM = weight * 703 / pow(height,2);

if (weight > 0 && height > 0)
{
   //Determining the according to the IBM
    if (IBM >= 18.5 && IBM <= 25)
        cout << "Your IBM indicates you have a optimal weight." << endl;
    else if(IBM < 18.5)
        cout << "Your IBM idicates you are underweight." << endl;
    else if (IBM > 25)
           cout << "Your IBM idicates you are overweight." << endl; 
}
else
    cout << "You entered invalid values either for weight of height." << endl;

  
}