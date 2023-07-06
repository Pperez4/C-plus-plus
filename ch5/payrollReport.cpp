/*---------------------------------------------------------------------------
Payroll Report
Write a program that displays a weekly payroll report. A loop in the program 
should ask the user for the employee number, gross pay, state tax, federal tax, 
and FICA with holdings. The loop will terminate when 0 is entered for the 
employee number. After the data is entered, the program should display totals 
for gross pay, state tax, federal tax, FICA withholdings, and net pay.

Input Validation: Do not accept negative numbers for any of the items entered. 
Do not accept values for state, federal, or FICA withholdings that are greater 
than the gross pay. If the sum state tax + federal tax + FICA withholdings 
for any employee is greater than gross pay, print an error message and ask 
the user to reenter the data for that employee.


-------------------------------------------------------------------------*/

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
    //Variable for the user employee number
    int employeeNumber;
    //Variable for gross pay
    double grossPay;
    //Variable for state tax
    double stateTax;
    //Variable for federal tax
    double federalTax;
    //Variable for FICA holdings 
    double FICA;

//Variable for calculation 
double netPay;

//-------------------------------------------------
//The loop will terminate when 0 is entered for the 
// employee number
//------------------------------------------------

cout << endl;
cout << "\tPlease provide the following information.\n"
     << "\tTo see your report simply enter 0 when you are\n"
     << "\tprompted for employee number a second time.\n";
cout << endl;
//-----------------------------------
//prompting user for employee number
//-----------------------------------
    cout << "Enter employee number: ";
    while (!(cin >> employeeNumber))
            {
                cout << "ERROR - The employee number\n";
                cout << "should only contain numbers.\n";
                cin.clear();
                cin.ignore(1000, '\n');
            }
    

    while(employeeNumber != 0)
    {

        //-----------------------------------
        //prompting user for gross pay
        //-----------------------------------
            cout << endl;
            cout << "Enter gross pay: $";
        //-----------------------------------
        //loop for input validation
        //-----------------------------------
            while (!(cin >> grossPay) || grossPay < 1.0)
            {
                cout << "ERROR - Invalid amount for gross pay.\n";
                cout << "Try again entering a valid value.\n";
                cin.clear();
                cin.ignore(1000, '\n');
            }
        //-----------------------------------
        //prompting user for state tax
        //-----------------------------------
            cout << endl;
            cout << "State Tax: $";
        //-----------------------------------
        //loop for input validation
        //-----------------------------------
            while (!(cin >> stateTax) || stateTax < 1.0 || stateTax >= grossPay)
            {
                cout << "ERROR - Invalid amount for state tax.\n";
                cout << "Try again entering a valid value.\n";
                cin.clear();
                cin.ignore(1000, '\n');
            }
        //-----------------------------------
        // prompting for federal tax
        //-----------------------------------
            cout << endl;
            cout << "Federal Tax: $";
        //-----------------------------------
        //loop for input validation
        //-----------------------------------

            while (!(cin >> federalTax) || federalTax < 1.0 || federalTax >= grossPay)
            {
                cout << "ERROR - Invalid amount for federal tax.\n";
                cout << "Try again entering a valid value.\n";
                cin.clear();
                cin.ignore(1000, '\n');
            }

        //-----------------------------------
        // prompting for FICA holdings 
        //-----------------------------------
            cout << endl;
            cout << "FICA: $";

            while (!(cin >> FICA) || FICA < 1.0 || FICA >= grossPay)
            {
                cout << "ERROR - Invalid amount for FICA.\n";
                cout << "Try again entering a valid value.\n";
                cin.clear();
                cin.ignore(1000, '\n');
            }
        cout << endl;
        cout << "Enter employee number: ";
        cin >> employeeNumber;

    } 
    
    
    netPay = grossPay - (stateTax + federalTax + FICA);


cout << fixed << showpoint << setprecision(2);

cout << endl;
cout << "----------------------------------\n";
cout << "\t\tTotals\n";
cout << "----------------------------------\n";
cout << "Gross Pay: $" << grossPay << endl;
cout << "State Tax: $" << stateTax << endl;
cout << "Federal Tax: $" << federalTax << endl;
cout << "FICA: $" << FICA << endl;
cout << "----------------------------------\n";
cout << "Net Pay: $" << netPay << endl;
cout << "----------------------------------\n";




}