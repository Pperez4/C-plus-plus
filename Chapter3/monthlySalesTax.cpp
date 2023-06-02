/*-------------------------------------------------------------
A retail company must file a monthly sales tax report listing 
the sales for the month and the amount of sales tax collected.
The program asks for the month, the year the total amount 
collected at the cash register (that is, sales plus sales tax). 
Assume the state sales tax is 4 percent and the county sales 
tax is 2 percent.

If the total amount collected is known and the total sales tax 
is 6 percent, the amount of product sales may be calculated as:
S = T / 1.06

S is the product sales and T is the total income
 (product sales plus sales tax).
---------------------------------------------------------------*/


//------------------------
// Include Directives
//------------------------
#include <iostream>
#include <iomanip>
#include <string.h>
//------------------------
// namespace statement
//------------------------
using namespace std;

//------------------------
// main function 
//------------------------
int main()
{
   //Constant for the tax percentages 
    const double countyTax = 0.02;
    const double stateTax = 0.04; 
 
 //For user input
    string month;
    double totalCashCollected;

//For calculations 
   double sales;
   double totalStateTax;
   double totalCountyTax;
   double totalSalesTax;

   cout << "Enter the month and year of sales: ";
   getline(cin, month);
   cout << "Enter the total cash collected: $";
   cin >> totalCashCollected;

   //Calculation 
   totalStateTax = totalCashCollected * stateTax;
   totalCountyTax = totalCashCollected * countyTax;
   totalSalesTax = totalStateTax + totalCountyTax;
   sales = totalCashCollected - totalSalesTax;

   //Displaying Report 
   cout << fixed << showpoint << setprecision(2);

   cout << "Date: " << month << endl;
   cout << "--------------------------" << endl;
   cout << "Total Collected: $" << left << totalCashCollected << endl;
   cout << "Sales: $" << left << sales << endl;
   cout << "County Sales Tax: $" << left << totalCountyTax << endl;
   cout << "State Sales Tax: $" << left << totalStateTax << endl;
   cout << "Total Sales Tax: $" << left << totalSalesTax << endl;

}