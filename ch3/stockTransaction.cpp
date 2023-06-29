/*-----------------------------------------------------------------------------
Last month Joe purchased some stock in Acme Software, 
Inc. 

The number of shares that Joe purchased was 1,000.
• When Joe purchased the stock, he paid $45.50 per share.
• Joe paid his stockbroker a commission that amounted to 2% of the amount 
he paid for the stocks

Two weeks later Joe sold the stock. Here are the details of the sale:
• The number of shares that Joe sold was 1,000.
• He sold the stock for $56.90 per share.
• He paid his stockbroker another commission that amounted to 2% of the 
amount the received for the stock.

Write a program that displays the following information:
• The amount of money Joe paid for the stock.
• The amount of commission Joe paid his broker when he bought the stock.
• The amount that Joe sold the stock for.
• The amount of commission Joe paid his broker when he sold the stock.
• Display the amount of profit that Joe made after selling his stock and 
paying the two commissions to his broker. 
(If the amount of profit that your program displays is a negative number, 
then Joe lost money on the transaction.)
---------------------------------------------------------------------------------*/

//------------------------
// Include Directives
//------------------------
#include <iostream>
#include <iomanip>
#include <cmath>
//------------------------
// namespace statement
//------------------------
using namespace std;

//------------------------
// main function 
//------------------------
int main()
{
//------------------------------
// Variables for provided info
//------------------------------
    //purchased and sold 1000 shares 
    const int NUMBER_OF_SHARES = 1000;
    //stockbroker Commission
    const double PERCENTAGE_PAID = 0.02;

    //Price per share
    double purchasingPrice = 45.50;
    double sellingPrice = 56.90;
//------------------------------
// Variables for Calculations
//------------------------------
    
    double amountPaid;
    double amountReceived;
    double commissionPurchase;
    double commissionSale;
    double profit;

//Calculations 
amountPaid = purchasingPrice * NUMBER_OF_SHARES;
commissionPurchase = amountPaid * PERCENTAGE_PAID;
amountReceived = sellingPrice * NUMBER_OF_SHARES;
commissionSale = amountReceived * PERCENTAGE_PAID;
profit = amountReceived + commissionSale - amountPaid + commissionPurchase;

cout << fixed << showpoint << setprecision(2);
cout << "---------------------------------------" << endl;
cout << "When Joe Purchased the Shares." << endl;
cout << "Amount Paid: $" << amountPaid << endl;
cout << "Commission Paid: $" << commissionPurchase << endl;
cout << "---------------------------------------" << endl;
cout << "When Joe Sold the Shares." << endl;
cout << "Amount Received: $" << amountReceived << endl;
cout << "Commission Paid: $" << commissionSale << endl;
cout << "Profit: $" << profit << endl;
cout << "---------------------------------------" << endl;


}
