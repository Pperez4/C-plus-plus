/*-------------------------------------------------
County collects property taxes on the assessment 
value of the property, which is 60% of the
property's current value. In an acre of land is 
valued at $10,000 it's assessment values is $6000.
The property tax is then 75c for each $100 of the
assessment value. The tax for the acre assessed at 
$6000 will be $45. Write a program that asks for the
value of a piece of property and then displays the
assessment value and property tax. 
-----------------------------------------------------*/
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
    //Constant variables for the information provided 
    const double percentageOfPropertyTaxes = 0.60;
    const double propertyTaxAssessment = 0.75;

    //To prompt user 
    double propertyValue;
    //For calculation 
    double assessmentValue;

    cout << "Enter the current value of your property: $ ";
    cin >> propertyValue;

    //Calculation 
    assessmentValue = propertyValue * percentageOfPropertyTaxes / 100 * propertyTaxAssessment;

    cout << fixed << showpoint << setprecision(2);
    cout << "------------------------------------" << endl;
    cout << "Assessment Value: $" << propertyValue * percentageOfPropertyTaxes << endl;
    cout << "Property Tax: $" << assessmentValue << endl;
    cout << "------------------------------------" << endl;


}