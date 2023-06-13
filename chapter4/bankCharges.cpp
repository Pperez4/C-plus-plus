/*---------------------------------------------------------------------
Bank Charges
A bank charges $10 per month plus the following check fees 
for a commercial checking account:
$.10 each for fewer than 20 checks
$.08 each for 20–39 checks
$.06 each for 40–59 checks
$.04 each for 60 or more checks
The bank also charges an extra $15 if the balance of the account 
falls below $400 (before any check fees are applied). Write a program 
that asks for the beginning balance and the number of checks written.
 Compute and display the bank’s service fees for the month.
Input Validation: Do not accept a negative value for the number of 
checks written. If a negative value is given for the beginning balance,
 display an urgent message indicating the account is overdrawn.
------------------------------------------------------------------------*/

//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
#include <iomanip>
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
    //bank charges $10 per month
    const double MONTH_CHARGE = 10.0;
    const double BALANCE_CHARGE = 15.0;
    //Charge for checks
    double chargeChecks;
    //Total charge variable
    double totalCharge;
    //Variables to prompt user for input 
    double beginningBalance;    //Variable for beginning balance
    double checksWritten;       //Variable for number of checks 

    //Prompting user 
    cout << "Enter your account beginning balance: $";
    cin >> beginningBalance;
    cout << "\nEnter the number of checks written: ";
    cin >> checksWritten;





cout << fixed << showpoint << setprecision(2);
cout << "---------------------------------------------------------------------" << endl;
    if  (checksWritten < 0)
    {
        cout << "Invalid Value for checks written." << endl;
    }
    else if (beginningBalance < 0)
    {
        cout << "Account is overdrawn." << endl;
    }
    
    else if (checksWritten >= 1 && checksWritten < 20)
    {
        //$.10 each for fewer than 20 checks
        chargeChecks = 0.10;
        if (beginningBalance >= 400)
        {
            totalCharge = (checksWritten * chargeChecks) + MONTH_CHARGE;
            cout << "Total Charge for this month: $" << totalCharge << endl;
        }
        //The bank also charges an extra $15 if the balance of the account 
        //falls below $400
        else if (beginningBalance < 400)
        {
           totalCharge = (checksWritten * chargeChecks) + MONTH_CHARGE + BALANCE_CHARGE;
           cout << "Total Charge for this month: $" << totalCharge << endl;
        }
    }
    else if(checksWritten >= 20 && checksWritten <= 39)
    {
        //$.08 each for 20–39 checks
        chargeChecks = 0.08;
        if (beginningBalance >= 400)
        {
            totalCharge = (checksWritten * chargeChecks) + MONTH_CHARGE;
            cout << "Total Charge for this month: $" << totalCharge << endl;
        }
        //The bank also charges an extra $15 if the balance of the account 
        //falls below $400
        else if (beginningBalance < 400)
        {
           totalCharge = (checksWritten * chargeChecks) + MONTH_CHARGE + BALANCE_CHARGE;
           cout << "Total Charge for this month: $" << totalCharge << endl;
        }

    }
    else if (checksWritten >= 40 && checksWritten <= 59 )
    {
        //$.06 each for 40–59 checks
        chargeChecks = 0.06;
        if (beginningBalance >= 400)
        {
            totalCharge = (checksWritten * chargeChecks) + MONTH_CHARGE;
            cout << "Total Charge for this month: $" << totalCharge << endl;
        }
        //The bank also charges an extra $15 if the balance of the account 
        //falls below $400
        else if (beginningBalance < 400)
        {
           totalCharge = (checksWritten * chargeChecks) + MONTH_CHARGE + BALANCE_CHARGE;
           cout << "Total Charge for this month: $" << totalCharge << endl;
        }
    }
    else if (checksWritten >= 60)
    {
        //$.04 each for 60 or more checks
        chargeChecks = 0.04;
        if (beginningBalance >= 400)
        {
            totalCharge = (checksWritten * chargeChecks) + MONTH_CHARGE;
            cout << "Total Charge for this month: $" << totalCharge << endl;
        }
        //The bank also charges an extra $15 if the balance of the account 
        //falls below $400
        else if (beginningBalance < 400)
        {
           totalCharge = (checksWritten * chargeChecks) + MONTH_CHARGE + BALANCE_CHARGE;
           cout << "Total Charge for this month: $" << totalCharge << endl;
        }
    }
    
    
cout << "---------------------------------------------------------------------" << endl;


}