/*--------------------------------------------------
Assuming there are no deposits other than the 
original investment, the balance in a savings
account after one year may be calculated as

Amount = Principal * (1 + Rate / T) ^ T
- Principal is the balance in the savings account
-   Rate is the interest rate
- T is the number of times the rate is compunded 
during the year. 
The program should ask for this and display a report
---------------------------------------------------*/

//------------------------
// Include Directives
//------------------------
#include <iostream>
#include <iomanip>
#include <string.h>
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
    //To promt user
    double interestRate;
    int timesCompunded;
    double principal;

    //For calculations
    double interest;
    double amountInSavings;

    //Prompting user
    cout << "Provide the following information." << endl;
    cout << "Interest Rate: ";
    cin >> interestRate;
    cout << "Times Compunded: ";
    cin >> timesCompunded;
    cout << "Pricipal Amount: $";
    cin >> principal;

    //Calculations 
    interestRate = interestRate / 100;
    interest = principal * pow(1 + interestRate/timesCompunded, timesCompunded);
    amountInSavings = interest;

    //Displaying Result
    cout << fixed << showpoint << setprecision(2);
    cout << "\tReport" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Interest Rate: " << interestRate * 100  << "%" << endl;
    cout << "Times Compunded: " << timesCompunded << endl;
    cout << "Pricipal Amount: $" << principal << endl;
    cout << "Interest: $" << interest - principal << endl;
    cout << "Amount in Savings: $" << amountInSavings << endl;
    cout << "-----------------------------------------" << endl;


}