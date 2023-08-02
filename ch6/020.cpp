/*--------------------------------------------------------------------
The profit from the sale of a stock can be calculated as follows:
Profit = ((NS * SP) - SC) - ((NS * PP) + PC)

NS is the number of shares
SP is the sale price per share, 
SC is the sale commission paid
PP is the purchase price per share, 
PC is the purchase commission paid.
If the calculation yields a positive value, then the sale of the 
stock resulted in a profit. If the calculation yields a negative 
number, then the sale resulted in a loss.

Write a function that accepts as arguments the number of shares, the
purchase price per share, the purchase commission paid, the sale
price per share, and the sale commission paid. The function should 
return the profit (or loss) from the sale of stock.
----------------------------------------------------------------------*/

#include <iostream>
#include <iomanip>
using namespace std;



void getInformation();
double calculateProfitOrLoss(int , double, double, double, double);
void displayProfitOrLoss(double);

int main()
{
    getInformation();
}

void getInformation()
{
    int numberOfShares;
    double salePricePerShare;
    double saleCommission;
    double purchasePricePerShare;
    double purchaseComission;

    double profitOrloss;

    cout << endl;
    cout << "Please provide the following information." << endl;
    cout << endl;
    cout << "Number of shares: ";
        while (!(cin >> numberOfShares) || numberOfShares <= 0)
        {
            cout << "Error\n"
                 << "It must be a numeric value\n"
                 << "greater than 0.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Number of shares: ";
        }
    cout << endl;
    cout << "Sale Price per Share: ";
        while (!(cin >> salePricePerShare) || salePricePerShare <= 0)
        {
            cout << "Error\n"
                 << "It must be a numeric value\n"
                 << "greater than 0.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Sale Price per Share: ";
        }
    cout << endl;
    cout << "Commission Sale Paid: ";
        while (!(cin >> saleCommission) || saleCommission <= 0)
        {
            cout << "Error\n"
                 << "It must be a numeric value\n"
                 << "greater than 0.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Commission Sale Paid: ";
        }
    cout << endl;
    cout << "Purchase Price Per Share: ";
        while (!(cin >> purchasePricePerShare) || purchasePricePerShare <= 0)
        {
            cout << "Error\n"
                 << "It must be a numeric value\n"
                 << "greater than 0.\n";
            cin.clear();
            cin.ignore(1000, '\n');
             cout << "Purchase Price Per Share: ";
        }

    cout << endl;
    cout << "Commission Purchase Paid: ";
        while (!(cin >> purchaseComission) || purchaseComission <= 0)
        {
            cout << "Error\n"
                 << "It must be a numeric value\n"
                 << "greater than 0.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Commission Purchase Paid: ";
        }

    profitOrloss = calculateProfitOrLoss(numberOfShares, salePricePerShare, saleCommission, purchasePricePerShare, purchaseComission);
    displayProfitOrLoss(profitOrloss);
}


/*-------------------------------------------------------------
    calculateProfitOrLoss () Definition 
This function calculates the profit of loss 
Profit = ((NS * SP) - SC) - ((NS * PP) + PC)
    NS is the number of shares
    SP is the sale price per share, 
    SC is the sale commission paid
    PP is the purchase price per share, 
    PC is the purchase commission paid.
--------------------------------------------------------------*/
double calculateProfitOrLoss(int NS , double SP, double SC, double PP, double PC)
{

    double profit;
    profit = ((NS * SP) - SC) - ((NS * PP) + PC);
    return profit;

}

//---------------------------------
// This function displays the 
// either the loss or Profit.
//---------------------------------

void displayProfitOrLoss(double p)
{
    cout << fixed << showpoint << setprecision(2);
    cout << "-----------------------------\n";
    if (p <= 0)
        cout << "Loss: $" << p << endl;
    else if (p > 0)
        cout << "Profit: $" << p << endl;
    cout << "-----------------------------\n";
    
}