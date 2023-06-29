/*------------------------------------------------------------------
Calories Burned
Running on a particular treadmill you burn 3.6 calories per minute.
Write a program that uses a loop to display the number of calories
burned after 5, 10, 15, 20, 25, and 30 minutes.
--------------------------------------------------------------------*/
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
// Main Function
//------------------------------
int main() 
{
    
    //burn 3.6 calories per minute
    const double CALORIES_PER_MINUTE = 3.6;
    //we will display the calories in increments of 5 minutes
    const int INCREMENT_MINUTES = 5;
    //minutes variable 
    int minutes = 0;
    //calories variable 
    double calories;

    do
    {
        //To increment minutes by 5 in each iteration 
        minutes = minutes + INCREMENT_MINUTES;
        //Calories is equal to the minutes times the constant of calories per minute
        calories = minutes * CALORIES_PER_MINUTE;
        //Displaying calories with its corresponding minutes 
        cout << "-------------------------------------\n";
        cout << "Minutes: " << minutes << "\n";
        cout << "Calories burned: " << calories << "\n";
        cout << "-------------------------------------\n";
    } while (minutes < 30); //The loop terminates when minutes equal to 30
  
}