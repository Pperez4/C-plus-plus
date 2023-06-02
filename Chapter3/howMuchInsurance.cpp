/*------------------------------------------
Many financial experts advise that property
owners should insurance their homes at leats
80 percent of the amount it would cost to
replace the structure. The program asks the
user for a replacement cost of a building and 
displays the minimum amount of insurance he
or she should buy for the property 
-------------------------------------------*/
//------------------------
// Include Directives
//------------------------
#include <iostream>
#include <iomanip>
#include <string.h>
//------------------------
// namespace statement
//------------------------
using namespace std;

//------------------------
// main function 
//------------------------
int main()
{
    //Variable for the amount financial experts advise
    const double insurancePercetageAdvice = 0.80;
    //Variable for user input
    double structureCost;
    //Variable for minimum amount of insurance 
    double minimumInsurance;

    cout << "Please provide the following information: " << endl;
    cout << "Cost to replace the structure: ";
    cin >> structureCost;

    //Calculation 
     minimumInsurance = insurancePercetageAdvice * structureCost;

    //Displaying Minimum Amout 
    cout << fixed << showpoint << setprecision(2);
    cout << "------------------------------------" << endl;
    cout << "Minimum Insurance Amount: $" << minimumInsurance << endl;
    cout << "------------------------------------" << endl;
}