/*----------------------------------------------------------
Write a program that uses nested loops to collect data and 
calculate the average rainfall over a period of years. The 
program should first ask for the number of years. The outer 
loop will iterate once for each year. The inner loop will 
iterate twelve times, once for each month. Each iteration 
of the inner loop will ask the user for the inches of rainfall
for that month.

After all iterations, the program should display the number 
of months, the total inches of rainfall, and the average rainfall
per month for the entire period.

Input Validation: Do not accept a number less than 1 for the 
number of years. Do not accept negative numbers for the monthly
rainfall.
===========================================================*/

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
    //Constant for the number of months
    const int months = 12;
    //number of years
    int numberOfYears;
    //inches of rainfall for that month
    double inchesOfRainfall;
    //for total months
    int totalMonths;
    //for total inches of rainfall
    double totalInches;
    //for the average
    double averageRainfall;


cout << "Number of years: ";
cin >> numberOfYears;
//-----------------------------------------------------------
// Do not accept a number less than 1 for the number of years
//-----------------------------------------------------------
while (numberOfYears < 1)
{
    cout << "The program does not accept numbers that are less than 1 for the\n"
         << "number of years.\n";
    cout << "Number of years: ";
    cin >> numberOfYears;
}


//The outer loop will iterate once for each year.
    for (int i = 1; i <= numberOfYears; i++)
    {
        cout << "For year " << i << endl;
        
        for (int j = 1; j <= months; j++)
        {
            cout << "Enter inches of rainfall for month " << j << ": ";
            cin >> inchesOfRainfall;
//------------------------------------------------------
//Do not accept negative numbers for the monthly rainfall.
//------------------------------------------------------

            while (inchesOfRainfall < 0.0)
            {
                cout << "The program does not accept negative numbers\n" 
                     << "for the monthly rainfall.\n";
                cout << "Enter inches of rainfall for month " << j << ": ";
                cin >> inchesOfRainfall;
            }
            
            totalMonths = 12 * numberOfYears;
            totalInches += inchesOfRainfall;
        }
        
    }
    averageRainfall = totalInches / totalMonths;
    cout << fixed << showpoint << setprecision(2);
    cout << "------------------------------------------------------\n";
    cout << "\t\tRainfall Report\n";
    cout << "------------------------------------------------------\n";
    cout << "Total Months: " << totalMonths << endl;
    cout << "Amount of rainfall in inches: " << totalInches << " inches." << endl;
    cout << "Rainfall average per month: " << averageRainfall <<" inches." <<endl;
    cout << endl;
}