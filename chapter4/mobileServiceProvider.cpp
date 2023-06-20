/*-------------------------------------------------------------
A mobile provider has three different data plans for customers

A. For $39.99 per month, 4 gigabytes are provided. Additional 
data costs $10 per gigabyte 
B. For $59.99 per month, 8 gigabytes are provided. Additional
data costs $5 per gigabyte
C.For $69.99 per month, unlimited data is provided 

Write a program that calculates a customer bill. It should ask
the user for his/her plan and the amount of data used. Then 
it should display the amount due. 

INPUT VALIDATION: Make sure the user enters either A, B or C
for the plan.
---------------------------------------------------------------*/



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
    //Constant variables for monthly plan
    double PLAN_A = 39.99;
    double PLAN_B = 59.99; 
    double PLAN_C = 69.99; 

    //To prompt user for their plan
    char userSelection; 
    //To prompt user for the number of gigabytes used 
    int gigabytesUsed;

    
    cout << "Enter your monthly plan A, B or C using upper case letters: ";
    cin.get(userSelection);
    cout << "-------------------------------------------------\n";
    cout << "Enter the number of gigabytes of data used: ";
    cin >> gigabytesUsed;

cout << fixed << showpoint << setprecision(2);
//Determining if user selected a valid option.
    if (userSelection == 'A' || userSelection == 'B' || userSelection == 'C')
    {
        switch (userSelection)
        {
            //A. For $39.99 per month, 4 gigabytes are provided. Additional 
            // data costs $10 per gigabyte 
        case 'A':
            cout << "-------------------------------------------------\n";
            cout << "Your plan: " << userSelection << "\n";
            cout << "For $39.99 per month, 4 gigabytes are provided.\n" 
                 << "Additional data costs $10 per gigabyte.\n";
            cout << "-------------------------------------------------\n";
            if (gigabytesUsed <= 4)
            {
                cout << "This month you utilized: " << gigabytesUsed << " gygabytes of data.\n";
                cout << "Payment: $" << PLAN_A  << "\n"; 
            }
            else if (gigabytesUsed > 4)
            {
                cout << "This month you utilized: " << gigabytesUsed << " gygabytes of data.\n";
                cout << "Standard payment: $" << PLAN_A << "\n";
                //The total included the cost of using more than 4 gigabytes at $10 each + standard price;
                gigabytesUsed = gigabytesUsed - 4; //Subtracting the 4 gigabytes the user is allowed to use with plan
                cout << "Total Payment including additional costs: $" << gigabytesUsed * 10 + PLAN_A << "\n";  
            }
            
            break;
            //B. For $59.99 per month, 8 gigabytes are provided. Additional
            // data costs $5 per gigabyte.
           
            case 'B':
                    cout << "-------------------------------------------------\n";
                    cout << "Your plan: " << userSelection << "\n";
                    cout << "For $59.99 per month, 8 gigabytes are provided.\n";
                    cout << "Additional data costs $5 per gigabyte.\n";
                    cout << "-------------------------------------------------\n";
                    if (gigabytesUsed <= 8)
                    {
                        cout << "This month you utilized: " << gigabytesUsed << " gygabytes of data.\n";
                        cout << "Standard payment: $" << PLAN_B << "\n";
                    }
                    else if (gigabytesUsed > 8)
                    {
                        
                        cout << "This month you utilized: " << gigabytesUsed << " gygabytes of data.\n";
                        cout << "Standard payment: $" << PLAN_A << "\n";
                        //The total included the cost of using more than 4 gigabytes at $10 each + standard price;
                        gigabytesUsed = gigabytesUsed - 8;
                        cout << "Total Payment including additional costs: $" << gigabytesUsed * 5 + PLAN_B << "\n";  
                     }
            break;
            case 'C':
            //C.For $69.99 per month, unlimited data is provided 
                cout << "-------------------------------------------------\n";
                cout << "Your plan: " << userSelection << "\n";
                cout << "For $69.99 per month, unlimited data is provided.\n";
                cout << "This month you utilized: " << gigabytesUsed << " gygabytes of data.\n";
                cout << "Standard payment: $" << PLAN_C << "\n";
                cout << "-------------------------------------------------\n";
            break;
        default:
            break;
        }
    }
}