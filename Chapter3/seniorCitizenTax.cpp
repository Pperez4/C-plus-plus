/*----------------------------------------------------
Madison County provides a $5,000 homeowner exemption
for its senior citezens, and they are allowed to pay
their tax in four equal payments. The program ask's the
user for the actual value of the property and the current
tax rate for each $100 of assessed value. 

The program should then calculate and report how much 
annual property tax the senior homeoner will be charged 
and what are the quarterly payments. 
------------------------------------------------------*/
//------------------------
// Include Directives
//------------------------
#include <iostream>
#include <iomanip>
//------------------------
// namespace statement
//------------------------
using namespace std;

//------------------------
// main function 
//------------------------
int main()
{
    //Constants for the information given 
    const double percentageOfPropertyTaxes = 0.60;
    const double seniorExemption = 5000.0;
    const int allowedPeriods = 4;
    
    
    
    //To prompt user
    double propertyAssessmentPerEachHundred;
    double currectValue;

    //For calculations 
    double annualTax;
    double assessmentPerEachHundred;
    double quarterlyPayments;

    //Promting user
    cout << "Hi user, please provide the following information." << endl;
    cout << "Current value of property: ";
    cin >> currectValue;
    cout << "Current Tax rate for each $100 of assessed value: ";
    cin >> propertyAssessmentPerEachHundred;

    //Calculation 
    annualTax = (currectValue * percentageOfPropertyTaxes) - seniorExemption;
    assessmentPerEachHundred = annualTax / 100 * propertyAssessmentPerEachHundred;
    quarterlyPayments = assessmentPerEachHundred / allowedPeriods;

    cout << fixed << showpoint << setprecision(2);
    cout << "Annual property tax the senior homeoner will be charged: $" << assessmentPerEachHundred << endl;
    cout << "Quarterly payments: $" << quarterlyPayments << endl;

}
