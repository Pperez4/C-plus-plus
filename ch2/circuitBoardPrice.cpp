/*-------------------------------
A Company sell's circuit boards at
a 35 percent profit. The program
calculates the selling price of a
circuit costs $14.95.
Display the result 
--------------------------------*/

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

    //Cost os electric circuit
    double circuitCost = 14.95;
    //Profit Percentage 
    double profitPercentage = 0.35;
    //Varible for selling price
    double sellingPrice;
    //Calculating selling price
    sellingPrice = circuitCost + (circuitCost * profitPercentage);

    cout << "Selling Price of Circuit: $" << sellingPrice << endl;


}