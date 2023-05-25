/*------------------------------
A customer is purchasing five 
products.
Price item 1 = $15.95
Price item 2 = $24.95
Price item 3 = $6.95
Price item 4 = $12.95
Price item 5 = $3.95
Assume sales taht is 7 percent
Display Items price
Display Subtotal
Tax Amount
Total 
-------------------------------*/
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

//Variables to hold the item's price
double item1 = 15.95,
item2 = 24.95,
item3 = 6.95,
item4 = 12.95,
item5 = 3.95;
//Variable for tax percetage
double tax = 0.07;
//Variable for subtotal and total
double subtotal;
double total;

//Calculating subtotal
subtotal = item1 + item2 + item3 + item4 + item5;
//Calculating Tax Amount
tax = tax * subtotal;
//Calculating Total
total = tax + subtotal;

cout << "\tStore Receip" << endl;
cout << "Price item 1: $" << item1 << endl;
cout << "Price item 2: $" << item2 << endl;
cout << "Price item 3: $" << item3 << endl;
cout << "Price item 4: $" << item4 << endl;
cout << "Price item 5: $" << item5 << endl;
cout << "--------------------------------" << endl;
cout << "Subtotal: $" << subtotal << endl;
cout << "Tax Amount: $" << tax << endl;
cout << "Total:$" << total << endl;

    
}