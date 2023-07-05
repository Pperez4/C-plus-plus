/*------------------------------------------------------------
The Greatest and Least of These
Write a program with a loop that lets the user enter a series 
of integers. The user should enter −99 to signal the end of the 
series. After all the numbers have been entered, the program 
should display the largest and smallest numbers entered.
---------------------------------------------------------------*/

//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
#include <string>
#include <fstream>
//------------------------------
// namespace statement
//------------------------------
using namespace std;

//------------------------------
// Main Function
//------------------------------
int main()
{

//The maximum variable is initialized to zero
int maxValue = 0;
//The minimum variable is initialized to a fairly big number
int minValue = 1000000;
//Variable for user input 
int userNumber;

cout << endl;
cout << "The program will allow you to enter a series of numbers.\n"
     << "When you are done just type -99 and press [ENTER].\n"
     << "The maximum and minimum value  entered will be displayed.\n";
cout << endl;

//---------------------------------------------
// A sentinel is a special value that marks the 
// end of list of values. In this program -99
// is a sentinel and the program shoudl end when
// user enters the sentinel. 
//---------------------------------------------
cout << endl;
while (userNumber != -99)
{
   //User is prompted to enter a number as long as it is not the sentinel value
   cout << "Enter a number: ";
   cin >> userNumber;


  if (userNumber > maxValue)
      maxValue = userNumber;

  if (userNumber < minValue && userNumber != -99)
      minValue = userNumber;
  
  
 
}
cout << endl;
cout << "-------------------------------------\n";
cout << "Minimum value: " << minValue << endl;
cout << "Maximum value: " << maxValue << endl;
cout << "-------------------------------------\n";


    
}