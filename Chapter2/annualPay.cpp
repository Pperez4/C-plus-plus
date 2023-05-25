/*---------------------------------------
Employee get paid every two weeks and he
earns $2,200 each pay period. In a year, the
employee get's paid 26 times. The program
shoudl define the folowing:
(1) payAmount This variable will hold the 
amount the employee get's paid every period
$2,200.
(2) payPeriods This variable will hold the
number of paid periods in a year 26.
(3) annualPay This varaible will hold the
annual pay. 
Display Annual Pay to the screen
-----------------------------------------*/
//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
//------------------------------
// namespace statement
//------------------------------
using namespace std;

//------------------------------
// Main Function
//------------------------------
int main()
{
    int payAmount = 2200;
    int payPeriods = 26;
    int annualPay;

    //Caluclating Annual Pay 
    annualPay = payAmount * payPeriods;
    //Displaying Result 
    cout << "Employee Annual Pay: $" << annualPay << endl;
}