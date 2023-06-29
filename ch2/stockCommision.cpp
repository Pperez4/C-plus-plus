/*--------------------------------
Someone bought 750 shares of stock
at a price of $35.00 per share.
She must pay her stockholder a 2
percent commison for the transaction.
The program calculates the following
- The amount paid for the stock alone
- The amount of the commision
- The total amount paid
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
    //Variables holding the information already given
    int numberOfStocks = 750;
    double pricePerStock = 35.00;
    double brokerCommision = 0.2;

    //Variables for the calculation
    double amountPaidAlone;
    double commisionAmount;
    double totalPaid;


    //Calculating the amount paid for the stocks alones
    amountPaidAlone = numberOfStocks * pricePerStock;
    //Calculating the commision paid to broker 
    commisionAmount = amountPaidAlone * brokerCommision;
    //Caluclating total amount paid
    totalPaid = commisionAmount + amountPaidAlone;

    //Displaying results 
    cout << "The amount paid for the stock's: $" << amountPaidAlone << endl;
    cout << "The amount paid in commision: $" << commisionAmount << endl;
    cout << "The total amount paid: $" << totalPaid << endl;

}