/*-------------------------------------------------------------------
A software company sells a package that retails for $99. Quantity 
discounts are given according to the following.
Quantity Discount
10–19 20% 
20–49 30% 
50–99 40% 
100 or more 50%
Write a program that asks for the number of units sold and computes 
the total cost of the purchase.
Input Validation: Make sure the number of units is greater than 0.
------------------------------------------------------------------*/

//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
#include <cstdlib>
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

    //package that retails for $99
    const double COST_PER_PACKAGE = 99.0;
    //Variable for purchase total and variable for discount percentage
    double purchaseTotal;
    double discount;

    //Variable to prompt user for number of units purchases 
    int quantityPurchased;
    //Prompting user 
    cout << "Enter the quantity purchased: ";
    cin >> quantityPurchased;
    cout << endl;

cout << fixed << showpoint << setprecision(2);
    //Determing percentage 
    if (quantityPurchased <= 0)
    {
        cout << "Invalid Value" << endl;
    }
    else if (quantityPurchased >= 1 && quantityPurchased < 10)
    {
       purchaseTotal = (quantityPurchased * COST_PER_PACKAGE);
       cout << "You didnt receive a discount." << endl;
       cout << "Total: $" << purchaseTotal << endl;

    }
    
    else if (quantityPurchased >= 10 && quantityPurchased <= 19)
    {
        
        purchaseTotal = (quantityPurchased * COST_PER_PACKAGE);
        discount = purchaseTotal * 0.20;
        purchaseTotal = purchaseTotal - discount;
        cout << "You received a 20% discount." << endl;
        cout << "Total: $" << purchaseTotal << endl;
    }
    else if (quantityPurchased >= 20 && quantityPurchased <= 49)
    {
        purchaseTotal = (quantityPurchased * COST_PER_PACKAGE);
        discount = purchaseTotal * 0.30;
        purchaseTotal = purchaseTotal - discount;
        cout << "You received a 30% discount.\n";
        cout << "Total: $" << purchaseTotal << endl;
    }
    else if (quantityPurchased >= 50 && quantityPurchased <= 99)
    {
        purchaseTotal = (quantityPurchased * COST_PER_PACKAGE);
        discount = purchaseTotal * 0.40;
        purchaseTotal = purchaseTotal - discount;
        cout << "You received a 40% discount." << endl;
        cout << "Total: $" << purchaseTotal << endl;
    }
    else if (quantityPurchased >= 100)
    {
        purchaseTotal = (quantityPurchased * COST_PER_PACKAGE);
        discount = purchaseTotal * 0.50;
        purchaseTotal = purchaseTotal - discount;
        cout << "You received a 50% discount." << endl;
        cout << "Total: $" << purchaseTotal << endl;
    }
    return 0;
}