/*----------------------------------------------------------------------------
3. Winning Division
Write a program that determines which of a company’s four divisions 
(Northeast, Southeast, Northwest, and Southwest) had the greatest sales
for a quarter. It should include the following two functions, which are called 
by main.

• double getSales() is passed the name of a division. 
It asks the user for a division’s quarterly sales figure, validates the input, 
then returns it. It should be called once for each division.
• void findHighest() is passed the four sales totals. It determines which is the
 largest and prints the name of the high grossing division, along with its sales
figure.
Input Validation: Do not accept dollar amounts less than $0.00.
-----------------------------------------------------------------------------*/

//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
//------------------------------
// namespace statement
//------------------------------
using namespace std;

//------------------------------
//  Function prototypes
//------------------------------

//Global constants for divisions names 
const string d1 = "Northeast",
             d2 = "Southeast",
             d3 = "Northwest",
             d4 = "Southwest";

//Northeast, Southeast, Northwest, and Southwest
double getSales(string);
void findHighest(double, double, double, double);

int main()
{
  
    double salesD1,
           salesD2,
           salesD3,
           salesD4;

    salesD1 = getSales(d1);
    salesD2 = getSales(d2);
    salesD3 = getSales(d3);
    salesD4 = getSales(d4);
    findHighest(salesD1, salesD2, salesD3, salesD4);

}

double getSales(string division)
{
    double sales;
    cout << "Enter " << division << " quarterly sales: $";
    while (!(cin >> sales) || sales <= 0.00)
    {
        cout << endl;
        cout << "The sales must be a numeric value and greater than $0.00\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Enter division’s quarterly sales: $";
    }
    
    return sales;
}

void findHighest(double sales1, double sales2, double sales3, double sales4)
{
    string highest;
    if (sales1 > sales2 && sales1 > sales3 && sales1 > sales4)
    {
        
        cout << "-----------------------------------\n";
        cout << endl;
        highest = d1;
        cout << "The highest: " << d1 << endl;
        cout << "Sales amount: $" << sales1 << endl;
        cout << "-----------------------------------\n";
    }
    else if (sales2 > sales1 && sales2 > sales3 && sales2 > sales4)
    {
        
        cout << "-----------------------------------\n";
        cout << endl;
        highest = d2;
        cout << "The highest: " << d2 << endl;
        cout << "Sales amount: $" << sales2 << endl;
        cout << "-----------------------------------\n";
    }
    else if (sales3 > sales1 && sales3 > sales2 && sales3 > sales4)
    {
        
        cout << "-----------------------------------\n";
        cout << endl;
        highest = d3;
        cout << "The highest: " << d3 << endl;
        cout << "Sales amount: $" << sales4 << endl;
        cout << "-----------------------------------\n";    
    }
    else if (sales4 > sales1 && sales4 > sales2 && sales4 > sales3)
    {

        cout << "----------------------------------------\n";
        cout << endl;
        highest = d4;
        cout << "The highest: " << d4 << endl;
        cout << "Sales amount: $" << sales4 << endl;
        cout << "----------------------------------------\n";    
    }
    
}
