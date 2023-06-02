/*----------------------------------------------------
The program asks the user for the cost of the following
expenses. 
- loan payment
- insurance
- gas
- oil
- tires
- maintenance
The program then displays the total monthy cost of this
expenses, and the total annual of this expenses. 
-------------------------------------------------------*/
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

//Variables to prompt user 
    double loanPayment,
            insurance,
            gas,
            oil,
            tires,
            maintenance;
//Variables for monthly and annual expenses 
double monthlyExpenses, annualExpeses;

cout << "Please enter the amount for each expense." << endl;
cout << "Loan Payment: ";
cin >> loanPayment;
cout << "Insurance: ";
cin >> insurance;
cout << "Gas: ";
cin >> gas;
cout << "Oil: ";
cin >> oil;
cout << "Tires: ";
cin >> tires;
cout << "Maintenance: ";
cin >> maintenance;

monthlyExpenses = loanPayment + insurance + gas + oil + tires + maintenance;
annualExpeses = monthlyExpenses * 12;

cout << fixed << showpoint << setprecision(2);
cout << "------------------------------------------------------------" << endl;
cout << "Monthly Expeses: $" << monthlyExpenses << endl;
cout << "Annual Expeses: $" << annualExpeses << endl;
cout << "------------------------------------------------------------" << endl;



}