/*---------------------------------------------------------------------------------
Future Value
Suppose you have a certain amount of money in a savings account that earns compound 
monthly interest, and you want to calculate the amount that you will have after a
specific number of months. 
The formula, which is known as the future value formula, is:
F = P * (1+i) ^ t
The terms in the formula are as follows:
• F is the future value of the account after the specified time period.
• P is the present value of the account.
• i is the monthly interest rate.
• t is the number of months.
Write a program that prompts the user to enter the account’s present value, monthly 
interest rate, and the number of months that the money will be left in the account. 
The program should pass these values to a function named futureValue that returns the 
future value of the account, after the specified number of months.The program should 
display the account’s future value.
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
double futureValue(double,double,double);
void displayData(double, double, double, double);
int main()
{
    double fValue,
           presentValue,
           interestRate,
           months;

    cout << "---------------------------------------------------\n";
    cout << "\tProvide the following information\n";
    cout << "---------------------------------------------------\n";
    cout << "Present Value: $";
        while (!(cin >> presentValue) || presentValue <= 0.00)
        {
        cout << endl; 
        cout << "Present value must be a numeric value and greater than 0.00\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Present Value: $";
        }
    cout << "Interest Rate: ";
        while (!(cin >> interestRate) || interestRate <= 0.00)
        {
            cout << endl; 
            cout << "Interest Rate must be a numeric value and greater than 0.00\n";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Interest Rate: $";
        }
    cout << "Number of months: ";
        while (!(cin >> months) || months <= 0)
        {
            cout << endl; 
            cout << "Number of months must be a numeric value and greater than 0.00\n";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Number of months: $";
        }
    fValue = futureValue(presentValue, interestRate, months);
    displayData(presentValue, interestRate, months, fValue);

}

//------------------------------------------------------------
//  futureValue() definition 
//------------------------------------------------------------
double futureValue(double PV, double i, double t)
{
    double FV;
    i *= .01;
    //F = P * (1+i) ^ t
    FV = PV * pow((1 + i) , t);

    return FV;
}
//------------------------------------------------------------
//  displayData() definition
//------------------------------------------------------------
void displayData(double PV, double i, double t, double FV)
{
    cout << "-----------------------------------------\n";
    cout << "\tFuture Value Report\n";
    cout << "-----------------------------------------\n";
    cout << "Interest Rate: " << i << endl;
    cout << "Number of Months: " << t << endl;
      cout << fixed << showpoint << setprecision(2);
    cout << "Present Value: $" << PV << endl;
    cout << "Future Value: $" << FV << endl;

}
