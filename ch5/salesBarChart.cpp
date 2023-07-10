/*------------------------------------------------------------------------
Write a program that asks the user to enter today’s sales for five stores. 
The program should then display a bar graph comparing each store’s sales. 
Create each bar in the bar graph by displaying a row of asterisks. 
Each asterisk should represent $100 of sales.

Here is an example of the program’s output.

Enter today's sales for store 1: 1000 [Enter] 
Enter today's sales for store 2: 1200 [Enter]
Enter today's sales  for store 3: 1800 [Enter]
Enter today's sales  for store 4: 800 [Enter]
Enter today's sales for store 5: 1900 [Enter]

SALES BAR CHART
Store 1: **********
Store 2: ************
Store 3: ****************** 
Store 4: ********
Store 5: *******************

---------------------------------------------------------------------------*/


//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
#include <iomanip>
#include <cmath>
//------------------------------
// namespace statement
//------------------------------
using namespace std;

//------------------------------
// Main Function
//------------------------------
int main()
{
    
    const int NUMBER_OF_STORES = 5;
    int sales;
    int stars;



    cout << endl;


    for (int i = 1; i <= NUMBER_OF_STORES; i++)
    {
       cout << "Enter today's sales for store " << i << " :$";
       cin >> sales; 
       
       stars = sales / 100;
        
        
        cout << "Store " << i << ": ";
        for (int j = 1; j <= stars ; j++)
        {
            cout << '*';
        }
        cout << "\n";
    }
    
}