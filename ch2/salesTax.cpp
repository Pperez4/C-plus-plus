/*--------------------------------
The program shoudl compute total 
sales tax os a $95 purchase. We
assume the state tax is 4 percent
and county tax is 2 percent.
---------------------------------*/
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
    //Variable to store the purchase total before taxes
    int purchase = 95;

    //Variable's to store the tax percetages 
    double stateTax = 0.04;
    double countyTax = 0.02;
    //To store the total amount of taxes and total
    double taxToPay;
    double total;

    //Calculating the amount to be paid in taxes 
    taxToPay = purchase * stateTax + purchase * countyTax;

    //Calulating the purchase total + taxes
    total = purchase + taxToPay;

    //Displaying Result 
    cout << "\tBill" << endl;
    cout << "Purchase Total: $" << purchase << endl;
    cout << "Tax Amount: $" << taxToPay << endl;
    cout << "Total: $" << total << endl;


}