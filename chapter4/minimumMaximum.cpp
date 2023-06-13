/*--------------------------------------------------------
Write a program that asks the user to enter two numbers. 
The program should use the conditional operator to 
determine which is the smaller and which the larger value
---------------------------------------------------------*/

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
    //Variables to determine the largest and smallest value 
    double minimum; //Minimum
    double maximum; //Maximum

    //To store the values provided by the user
    double num1;
    double num2;

    //Propt the user for two numbers 
    cout << "Enter two numbers and I will tell you which is the largest of the two.\n";
    cout << "Enter the first value: ";
    cin >> num1;
    cout << "Enter the second value: ";
    cin >> num2;

//-------------------------------------------------------------
//If num2 is greather than num1 then num1 is the minimum
// else the minimum value is num2
//-------------------------------------------------------------
    num2 > num1 ? minimum = num1 : minimum = num2;
//-------------------------------------------------------------
//If num2 is less than num1 then num1 is the maximum
// else the maximum value is num2
//-------------------------------------------------------------
    num2 < num1 ? maximum = num1 : maximum = num2;
//---------------------
//Diplaying Result
//---------------------
    cout << "The values you provided. " << num1 << " " << num2 << endl;
    cout << "The maximum value: " << maximum << endl;
    cout << "The minimum value: " << minimum << endl;


}