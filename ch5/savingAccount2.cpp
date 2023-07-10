/*---------------------------------------------------------------
Using Files—Savings Account Balance Modification
Modify the Savings Account Balance so that it writes the final 
report to a file.
---------------------------------------------------------------*/
//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
#include <fstream>
//------------------------------
// namespace statement
//------------------------------
using namespace std;

//------------------------------
// Main Function
//------------------------------
int main()
{
    //Creating an ofstream object
    ofstream outputFile;

    outputFile.open("AccountReport.txt");

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
        outputFile << "-----------------------------------------------------\n";
        outputFile << "\t\tSavings Account Report.\n";
        outputFile<< "-----------------------------------------------------\n";
        outputFile << fixed << showpoint << setprecision(2);
        outputFile << "Starting Balance: \t$" << startingBalance << endl;
        outputFile << "Ending Balance: \t$" << totalBalance << endl;
        outputFile << "Interest Earned: \t$" << totalInterestEarned << endl;
        outputFile << "Total Deposits: " << d << " \tAmount: $" << totalDeposited << endl;
        outputFile << "Total Withdrawns: " << w << "\tAmount: $" << totalWithdrawn << endl;
        outputFile << "-----------------------------------------------------\n";
    }


}


