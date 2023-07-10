/*----------------------------------------------------------
Budget Analysis
Write a program that asks the user to enter the amount that 
he or she has budgeted for a month. A loop should then prompt 
the user to enter each of his or her expenses for the month 
and keep a running total. When the loop finishes, the program 
should display the amount that the user is over or under budget.
-----------------------------------------------------------*/

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
    const int SENTINEL = -1;

    //budgeted for a month
    double monthBudget;
    double expenses;
    double totalExpenses = 0;

    //for over or under budget
    double overBudget;
    double underBudget;

    //counter
    int i = 1;

    cout << endl;
    cout << "Enter the amount budgeted for the month: $";
    //Input Validation
        while (!(cin >> monthBudget) || monthBudget <= 0)
        {
            cout << "\t\tERROR\n";
            cout << "The budgeted amount must be a numeric value\n"
                << "and greater than 0.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Enter the amount budgeted for the month: ";
        }
    cout << endl;
    cout << "----------------------------------------------------\n";
    cout << "Now please enter all your expenses.\n";
    cout << "When you are done simply type -1 and press [ENTER].\n";
    cout << "----------------------------------------------------\n";
    

    while (expenses != SENTINEL)
    {
        totalExpenses += expenses;

        cout << "Enter expense " << i++ << " :$";
        cin >> expenses;
    }

        cout << "----------------------------------------------------\n";
        cout << "Budget: $" << monthBudget << endl;
        cout << "Expenses: $" << totalExpenses << endl;
        cout << "----------------------------------------------------\n";

    if (totalExpenses > monthBudget)
    {
        cout << endl;
        cout << "----------------------------------------------------\n";
        cout << "You are over the budgeted amount.\n";
        overBudget = monthBudget - totalExpenses;
        cout << fixed << showpoint << setprecision(2);
        cout << "Amount: $" << overBudget << endl;
        cout << "----------------------------------------------------\n";
        cout << endl;
    }
    else if (totalExpenses < monthBudget)
    {
        cout << endl;
        cout << "----------------------------------------------------\n";
        cout << "You are under the budgeted amount.\n";
        underBudget = monthBudget - totalExpenses;
        cout << fixed << showpoint << setprecision(2);
        cout << "Amount: $" << underBudget << endl;
        cout << "----------------------------------------------------\n";
        cout << endl;
    }
    else if (totalExpenses == monthBudget)
    {
        cout << endl;
        cout << "----------------------------------------------------\n";
        cout << "Your expenses are equal to your budget.\n";
        cout << "----------------------------------------------------\n";
        cout << endl;
    }
    
    
    return 0;

}