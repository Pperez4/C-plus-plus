/*----------------------------------------------------------------
The program converts US Dollars to Japanese yen and Euros, storing
conversion factors in constants 
- YEN_PER_DOLLAR
- EUROS_PER_DOLLAR
You can search in the internet the currency exchange rate 

According to OANDA 
1 Dollar = 0.93292 Euro
1 Dollar = 139.216 Japanese Yen
-----------------------------------------------------------------*/


//------------------------
// Include Directives
//------------------------
#include <iostream>
#include <iomanip>
#include <string.h>
//------------------------
// namespace statement
//------------------------
using namespace std;

//------------------------
// main function 
//------------------------
int main()
{
    //Constants for currency exchange rate
   const double YEN_PER_DOLLAR = 139.216;
   const double  EUROS_PER_DOLLAR = 0.93292;

    //To promt user
    double amountInDollars;

    //For calculations 
    double amountInYen;
    double amountInEuro;

    cout << "Enter your amount in dollars: $";
    cin >> amountInDollars;

    //Caluclation 
    amountInYen = amountInDollars * YEN_PER_DOLLAR;
    amountInEuro = amountInDollars * EUROS_PER_DOLLAR;

    cout << fixed << showpoint << setprecision(2);
    cout << "---------------------------------------------" << endl;
    cout << "Is equivalent to: $" << amountInYen << " Japanese Yen." << endl;
    cout << "Is equivalent to: $" << amountInEuro << " Euros." << endl;
    cout << "---------------------------------------------" << endl;
}
