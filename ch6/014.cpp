/*-------------------------------------------------------------------------------------
Order Status
The Middletown Wholesale Copper Wire Company sells spools of copper wiring for $100 each. 

Write a program that displays the status of an order. The program should have a function
that asks for the following data:
• The number of spools ordered.
• The number of spools in stock.
• Whether there are special shipping and handling charges.
(Shipping and handling is normally $10 per spool.) If there are special charges, 
the program should ask for the special charges per spool.

The gathered data should be passed as arguments to another function that displays
• The number of spools ready to ship from current stock.
• The number of spools on backorder (if the number ordered is greater than what is
in stock).
• Subtotal of the portion ready to ship (the number of spools ready to ship times
$100).
• Total shipping and handling charges on the portion ready to ship.
• Total of the order ready to ship.
The shipping and handling parameter in the second function should have the default argument 10.00.
Input Validation: Do not accept numbers less than 1 for spools ordered. Do not accept a number 
less than 0 for spools in stock or shipping and handling charges.
---------------------------------------------------------------------------------------*/
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
void getDetails();
void calculateAndDisplay(int, int, double);


int main()
{
  getDetails();
}


/*--------------------------------------------------------------
void getDetails() definition
The function asks for the following:
• Spools ordered
• Spools in stock
• Special for shipping and handling 
(Shipping and handling is normally $10 per spool.) 
If there are special charges, the program should ask for the special 
charges per spool.
----------------------------------------------------------------*/
void getDetails()
{
    int spoolOrdered;
    int spoolStock;
    char response;
    double special;


    cout << endl;
    cout << "Spools in stock: ";
        while(!(cin >> spoolStock ) || spoolStock <= 0)
        {
            cout << endl;
            cout << "Error\n"
                 << "It must be a numeric value greater than 0.\n";
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Spools in stock: ";
        }
    
    cout << "Spools Ordered: ";
        while(!(cin >> spoolOrdered ) || spoolOrdered <= 0)
        {
            cout << endl;
            cout << "Error\n"
                 << "It must be a numeric value greater than 0.\n";
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Spools in Ordered: ";
        }

    cout << "Is there an special price for shipping and handling (Y/N): ";
    cin >> response;
    if (response == 'Y' || response == 'y')
    {
       cout << "Enter the special price: $";
       while (!(cin >> special) || special <= 0)
       {
            cout << endl;
            cout << "Error\n"
                 << "It must be a numeric value greater than 0.\n";
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Enter the special price: $";
       }
       
    }
    
    calculateAndDisplay(spoolStock, spoolOrdered, special);
}


/*---------------------------------------------------------------------
calculateAndDisplay() Definition
• It takes three arguments 
The function shoudl display 
• The number of spools ready to ship from current stock.
• The number of spools on backorder 
• Subtotal of the portion ready to ship 
• Total shipping and handling charges on the portion ready to ship.
• Total of the order ready to ship.
---------------------------------------------------------------------*/
void calculateAndDisplay(int stock, int ordered, double special)
{

    const double unitPrice = 100.0;
    const double shippingHandlingUnit = 10.00;

    int readyToship;
    int backOrder;
    double subtotal;
    double shippingHandlingTotal;
    double total;


    if (ordered > stock)
    {
        backOrder = ordered - stock;
        readyToship = ordered - backOrder;
    }
    else
        readyToship = ordered;

    subtotal = readyToship * unitPrice;

    if (special > 0)
        shippingHandlingTotal = readyToship * special;
    else
        shippingHandlingTotal = readyToship * shippingHandlingUnit;

    total = subtotal + shippingHandlingTotal;

    cout << endl;
    cout << "--------------------------------------------\n";
    cout << "\t\tOrder Status.\n";
    cout << "--------------------------------------------\n";
    cout << "Stock: " << stock << endl;
    cout << "Ordered: " << ordered << endl;
    cout << "Back Order: " << backOrder << endl;
    cout << "Ready to ship: " << readyToship << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Shipping and Handling total: $" << shippingHandlingTotal << endl;
    cout << "Total: $" << total << endl;
    cout << "--------------------------------------------\n";
    
    

}
