/*------------------------------------------------------------------------------
1. Markup
Write a program that asks the user to enter an item’s wholesale cost and 
its markup percentage. It should then display the item’s retail price. 

For example:
• If an item’s wholesale cost is 5.00 and its markup percentage is 100%, 
then the item’s retail price is 10.00.
• If an item’s wholesale cost is 5.00 and its markup percentage is 50%, 
then the item’s retail price is 7.50.
The program should have a function named calculateRetail that receives the 
wholesale cost and the markup percentage as arguments and returns the retail 
price of the item.

Input Validation: Do not accept negative values for either the wholesale 
cost of the item or the markup percentage.
------------------------------------------------------------------------------*/
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
// Function prototypes 
//------------------------------
double calculateRetail(double, double);
int main() 
{
    //To prompt user
    double wholesaleCost;
    double markupPercentage;

    cout << endl;
    cout << "This program  calculate the retail price of the item.\n";
    cout << "Enter wholesale cost: $";
    while (!(cin >> wholesaleCost) || wholesaleCost <= 0.00)
    {
        cout << "The wholesale cost must be a positive value and greater than 0.00 \n";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Enter wholesale cost: $";
    }
    cout << "Enter the markup percentage: ";
    while (!(cin >> markupPercentage) || markupPercentage <= 0.00)
    {
        cout << "The markup percentage must be a positive value and greater than 0 \n";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Enter the markup percentage: ";
    }
    markupPercentage *= 0.01;

    double retailPrice;
    retailPrice = calculateRetail(wholesaleCost, markupPercentage);

    cout << fixed << showpoint << setprecision(2);

    cout << endl;
    cout << "--------------------------------------\n";
    cout << "Retail Price: $" << retailPrice << endl;
    cout << "--------------------------------------\n";
    
}

//---------------------------------------------------
// Definition of calculateRetail
// It takes two doubles as argument, the wholesale
// cost and the markup percentage and returns a
// double for the retailPrice.
//---------------------------------------------------
double calculateRetail(double wsPrice, double markup)
{
    double retail;
    retail = wsPrice + (wsPrice * markup);

    return retail;
}