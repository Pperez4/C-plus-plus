/*----------------------------------------------------------------------
Write a program that will predict the size of a population of organisms. 
The program should ask the user for the starting number of organisms, 
their average daily population increase (as a percentage), and the number 
of days they will multiply. 

A loop should display the size of the population for each day.

Input Validation: Do not accept a number less than 2 for the 
starting size of the population. Do not accept a negative number 
for average daily population increase. Do not accept a number less 
than 1 for the number of days they will multiply.
-----------------------------------------------------------------------*/

//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
//------------------------------
// namespace statement
//------------------------------
using namespace std;

//------------------------------
// Main Function
//------------------------------
int main() 
{
    //starting number of organisms
    int startingNumberOfOrganisms;
    //average daily population increase (as a percentage)
    double averagePopulationIncrease;
    //number of days they will multiply
    int numberOfDays;

    //size of the population
    int sizeOfPopulation;
    double increase = 0.0;

    cout << "Enter the starting number of organisms: ";
    cin >> startingNumberOfOrganisms;
    
//---------------------------------------------------------------------------
//Do not accept a number less than 2 for the starting size of the population.
//---------------------------------------------------------------------------

    while (startingNumberOfOrganisms < 2)
    {
            cout << "A number less than 2 for the starting size of the population\n"
            << "is not accepted.\n";
            cout << "Enter the starting number of organisms: ";
            cin >> startingNumberOfOrganisms;
    }
    
    cout << "Average daily population increase (as a percentage): ";
    cin >> averagePopulationIncrease;
//-----------------------------------------------------------------------
// Do not accept a negative number for average daily population increase.
//-----------------------------------------------------------------------
    while (averagePopulationIncrease < 0)
    {
        cout << "Negative values are not accepted.\n";
        cout << "Average daily population increase (as a percentage): ";
        cin >> averagePopulationIncrease;
    }
    cout << "Number of days they will multiply: ";
    cin >> numberOfDays;

//-----------------------------------------------------------------------------
//Do not accept a number less than 1 for the number of days they will multiply.
//-----------------------------------------------------------------------------
    while (numberOfDays < 1)
    {
        cout << "Number of days less than 1 are not accepted by the program.\n";
        cout << "Number of days they will multiply: ";
        cin >> numberOfDays;
    }

averagePopulationIncrease *= .01;
    cout << endl;
cout << "--------------------------------------------\n";
cout << "\tPopulation Report\n";
cout << "--------------------------------------------\n";
  for (int i = 1; i <= numberOfDays; i++)
{
    
    cout << "Day: " << i << endl;
    cout << "Size of population: " << startingNumberOfOrganisms << endl;

    startingNumberOfOrganisms += startingNumberOfOrganisms * averagePopulationIncrease;

}
cout << endl;
}