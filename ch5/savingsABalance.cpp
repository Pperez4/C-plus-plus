/*-----------------------------------------------------------------------------------
Savings Account Balance
Write a program that calculates the balance of a savings account at the end of a
period of time. It should ask the user for the annual interest rate, the starting
balance, and the number of months that have passed since the account was established.
A loop should then iterate once for every month, performing the following:

A) Ask the user for the amount deposited into the account during the month. 
(Do not accept negative numbers.) This amount should be added to the balance.
B) Ask the user for the amount withdrawn from the account during the month. 
(Do not accept negative numbers.) This amount should be subtracted from the balance.
C) Calculate the monthly interest. The monthly interest rate is the annual interest rate
divided by twelve. Multiply the monthly interest rate by the balance, and add the result 
to the balance.

After the last iteration, the program should display
Ending balance
Total amount of deposits
Total amount of withdrawals
Total interest earned

NOTE: If a negative balance is calculated at any point, a message should be displayed
indicating the account has been closed and the loop should terminate.
-------------------------------------------------------------------------------------*/
//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
#include <iomanip>
//------------------------------
// namespace statement
//------------------------------
using namespace std;

//------------------------------
// Main Function
//------------------------------
int main() 
{

    //Variable for annual interest rate
    double annualInterestRate;
    //Variable for starting balance
    double startingBalance;
    //Variable for number of months passed since the account was established
    double numberOfMonths;

    //Variable for amount deposited
    double amountDeposited;
    //Variable for amount withdrawn
    double amountWithdrawn;
    //Variable for balance
    double totalBalance;
    //Variable for monthly interest Rate 
    double monthlyInterest;
    //Variable for interest 
    double interest;
    //Variable(s) for totals
    double totalDeposited = 0;
    double totalWithdrawn = 0;
    double totalInterestEarned = 0;
    //Counter(s) for deposits and withdrawns
    int d = 0;
    int w = 0;



    cout << endl;
    cout << "\tPlease provide the following information about your savings account.\n";
    cout << endl;

    cout << "Starting Balance: $";
        while (!(cin >> startingBalance) || startingBalance <= 0)
        {
            cout << endl;
            cout << "\t\tERROR\n";
            cout << "The Starting Balance must be a numberic value and greater than $0.\n";
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Starting Balance: $";
        }
    cout << endl;
    cout << "Annual Interest Rate: ";
        while (!(cin >> annualInterestRate) || annualInterestRate <= 0)
        {
            cout << endl;
            cout << "\t\tERROR\n";
            cout << "The Annual Interest Rate must be a numeric value and greater than 0.\n";
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Annual Interest Rate: ";
        }
    cout << endl;
    cout << "Number of months passed since the account was established: ";
        while (!(cin >> numberOfMonths) || numberOfMonths < 1)
        {
            cout << endl;
            cout << "\t\tERROR\n";
            cout << "The number of months must be a numeric value and equal or greater than 1.\n";
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Number of months passed since the account was established: ";
        }
        cout << endl;

    totalBalance = startingBalance;
    //------------------------------------------------
    // The monthly interest rate is the annual interest rate
    // divided by twelve.
    //------------------------------------------------
    annualInterestRate *= 0.01;
    monthlyInterest = annualInterestRate / 12;


    //------------------------------------------------
    // A loop should then iterate once for every month
    //------------------------------------------------
    for (int i = 1; i <= numberOfMonths; i++)
    {
        
        cout << "Amount deposited month " << i << ": $";
            if (amountWithdrawn > 0)
                w++;
            while (!(cin >> amountDeposited) || amountDeposited < 0)
            {
                cout << endl;
                cout << "\t\tERROR\n";
                cout << "The amount deposited must be a positive numeric value.\n";
                cout << "Amount deposited month " << i << ": $";
            }
            if (amountDeposited > 0)
                d++; 
        totalDeposited += amountDeposited;
        totalBalance += amountDeposited;
        if (totalBalance < 0)
            break;
        cout << endl;

        cout << "Amount withdrawn month " << i << ": $";
            if (amountWithdrawn > 0)
                    w++;
            while (!(cin >> amountWithdrawn) ||amountWithdrawn < 0 )
            {
                cout << endl;
                cout << "\t\tERROR\n";
                cout << "The amount withdrawn must be a positive numeric value.\n";
                cout << "Amount withdrawn month " << i << ": $";
            }
        
        totalWithdrawn += amountWithdrawn;
        totalBalance -= amountWithdrawn;
        if (totalBalance < 0)
            break;

        
        interest = (monthlyInterest * totalBalance);
        totalBalance += interest;
        if (totalBalance < 0)
            break;

        totalInterestEarned += (interest);

        
        cout << endl;

        
               
    }
    
    if (totalBalance < 0)
    {
       cout << endl;
       cout << "Account has been closed for a negative balance.\n";
       cout << endl;
    }
    else
    {
        cout << "-----------------------------------------------------\n";
        cout << "\t\tSavings Account Report.\n";
        cout << "-----------------------------------------------------\n";
        cout << fixed << showpoint << setprecision(2);
        cout << "Starting Balance: \t$" << startingBalance << endl;
        cout << "Ending Balance: \t$" << totalBalance << endl;
        cout << "Interest Earned: \t$" << totalInterestEarned << endl;
        cout << "Total Deposits: " << d << " \tAmount: $" << totalDeposited << endl;
        cout << "Total Withdrawns: " << w << "\tAmount: $" << totalWithdrawn << endl;
        cout << "-----------------------------------------------------\n";
    }


}