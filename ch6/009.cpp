/*--------------------------------------------------------------------------------
Present Value
Suppose you want to deposit a certain amount of money into a savings account and then
leave it alone to draw interest for the next 10 years. At the end of 10 years you would
like to have $10,000 in the account. How much do you need to deposit today to
make that happen? You can use the following formula, which is known as the present
value formula, to find out:

P = F / (1+r)^n

• P is the present value, or the amount that you need to deposit today.
• F is the future value that you want in the account. (In this case, F is $10,000.)
• r is the annual interest rate.
• n is the number of years that you plan to let the money sit in the account.

Write a program that has a function named presentValue that performs this calculation. 
The function should accept the future value, annual interest rate, and number of years
 as arguments. It should return the present value, which is the amount that you need 
 to deposit today. Demonstrate the function in a program that lets the user experiment 
 with different values for the formula’s terms.
-----------------------------------------------------------------------------------*/

//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
#include <cmath>
#include <iomanip>


//------------------------------
// namespace statement
//------------------------------
using namespace std;

//------------------------------
// Function prototypes 
//------------------------------
double presentValue(double,double,double);
void displayData(double, double,double,double);


int main()
{
    double pValue;
    double futureValue;
    double interestRate;
    double numberOfYears;

    

    cout << endl;
    cout << "------------------------------------------------\n";
    cout << "\tProvide the following information.\n";
    cout << "------------------------------------------------\n";
    cout << "Future Value: $";
        while (!(cin >> futureValue) || futureValue <= 0.00)
        {
        cout << endl;
        cout << "The future value must be a numeric value and greater than 0.\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Future Value: $";
        }
    cout << "Interest Rate: ";
        while (!(cin >> interestRate) || interestRate <= 0.00)
        {
        cout << endl;
        cout << "The interest rate must be a numeric value and greater than 0.\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Interest Rate: ";
        }
    cout << "Number of years: ";
        while (!(cin >> numberOfYears) || numberOfYears <= 0)
        {
        cout << endl;
        cout << "The number of years must be a numeric value and greater than 0.\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Number of years: ";
        }

    pValue = presentValue(futureValue, interestRate, numberOfYears);
    displayData(futureValue, interestRate, numberOfYears, pValue);

    


}


//--------------------------------------------------------
//Definition of presentValue()
//The function accepts the future value, annual interest 
//rate, and number of years as arguments. It returns the
//present value.
// P is the present value
// F is the future value
// r is the annual interest rate
//  n is the number of years
//--------------------------------------------------------

double presentValue(double f, double r, double n)
{
    double p;
    r *= .01;
    //P = F / (1+r)^n
    p = f / pow((1+r),n);
    return p;
}


//---------------------------------------
// displayData() Definition
// This function displays  the present
// value report, it takes four arguments.
//---------------------------------------

void displayData(double FV,double i,double n, double PV)
{
    cout << endl;
    cout << "------------------------------------------------\n";
    cout << "\t\tPresent Value\n";
    cout << "------------------------------------------------\n";
    cout << "Future Value: $" << FV << endl;
    cout << "Interest Rate: $" << i << endl;
    cout << "Number of Years: " << n << endl;
    cout << "Present Value: $" << PV << endl;
    cout << "------------------------------------------------\n";
    cout << endl;
}