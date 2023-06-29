/*----------------------------------------------------------------
Change for a Dollar Game
Create a change-counting game that gets the user to enter the number 
of coins required to make exactly one dollar. The program should ask 
the user to enter the number of pennies, nickels, dimes, and quarters. 
If the total value of the coins entered is equal to one dollar, the 
program should congratulate the user for winning the game. Otherwise, 
the program should display a message indicating whether the amount 
entered was more than or less than one dollar.
-------------------------------------------------------------------*/

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
//Constants for the value in cents of each coin 
    const double CENTS_VALUE_PENNIE = 0.01;
    const double CENTS_VALUE_NICKEL = 0.05;
    const double CENTS_VALUE_DIME = 0.10;
    const double CENTS_VALUE_QUARTER = 0.25;
    //Variables to prompt user 
   int numberOfPennies;
   int numberOfNickels;
   int numberOfDimes;
   int numberOfQuarters;
  //For calculation
  double dollarAmount;

   //Propting User
   cout << "How many pennies: ";
   cin >> numberOfPennies;
   cout << "How many nickels: ";
   cin >> numberOfNickels;
   cout << "How many dimes: ";
   cin >> numberOfDimes;
   cout << "Number of quarters: ";
   cin >> numberOfQuarters;

//---------------------------------------------
//Calculation 
// DollarAmount will contain the total amount 
// which the computer gets by multipling 
// each number of coins by their constant value
// then this amount is used to determine
// wheter the quantity is a dollar or less or
// more. 
//---------------------------------------------
dollarAmount = (numberOfPennies * CENTS_VALUE_PENNIE) + (numberOfNickels * CENTS_VALUE_NICKEL) +
   (numberOfDimes * CENTS_VALUE_DIME) + (numberOfQuarters * CENTS_VALUE_QUARTER);

//Determing in dollarAmount quantity is a dollar 
    if (dollarAmount == 1.00)
        cout << "Congrat's that is equivalent to $1 dollar." << endl;
    else if(dollarAmount < 1.00)
        cout << "That is less than  $1 dollar." << endl;
    else if ( dollarAmount > 1.00)
        cout << "That is more than $1 dollar." << endl;
   
}