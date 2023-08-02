/*-------------------------------------------------------------------------
Transient Population
Modify Programming Challenge 16 to also consider the effect on population
caused by people moving into or out of a geographic area. Given as input
a starting population size, the annual birth rate, the annual death rate,
the number of individuals who typically move into the area each year, 
and the number of individuals who typically leave the area each year, 
the program should project what the population will be numYears from now. 
You can either prompt the user to input a value for numYears, or you can 
set it within the program.
Input Validation: Do not accept numbers less than 2 for the starting size. 
Do not accept negative numbers for birth rate, death rate, arrivals, 
or departures.
--------------------------------------------------------------------------*/

#include <iostream>
using namespace std;


int getNumberOfYears();
void calculatePopulation(int);

int main()
{
    int years;

    years = getNumberOfYears();
    calculatePopulation(years);
    
}

//---------------------------------------------
// getNumberOfYears() Definition 
// Asks the user for number of years to display
// return the number of years. 
//---------------------------------------------
int getNumberOfYears()
{
    int numberOfYears;
    cout << "Number of years to display:  ";
        while (!(cin >> numberOfYears) || numberOfYears <= 0)
        {
            cout << "Error.\n";
            cout << "It must be a numeric value\n"
                 << "greater than 0.\n";
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Number of years to display:  ";
        }
    return numberOfYears;
}

//----------------------------------------------------------
// calculatePopulation() Definition
// This function receives the number of years as argument 
// using the formula N = P + BP − DP
// the function calculates and the displays the population 
// for each year.
//----------------------------------------------------------

void calculatePopulation(int y)
{
    int P;  // Starting size
    double B; // Birth Rate
    double D; // Death Rate
    int arrivals;
    int departures;

    //For calculation
    int N;

    for (int i = 1; i <= y; i++)
    {
        cout << "Population Starting Size year " << i << ": ";
        while (!(cin >> P) || P <= 1)
        {
            cout << "Error.\n";
            cout << "It must be a numeric value\n"
                 << "greater than 1.\n";
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Population Starting Size year " << i << ": ";
        }

        cout << "Birth Rate year " << i <<  ": ";
        while (!(cin >> B) || B <= 0)
        {
            cout << "Error.\n";
            cout << "It must be a numeric value\n"
                 << "greater than 0.\n";
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Birth Rate year " << i <<  ": ";
        }
      
        cout << "Death Rate " << i <<  ": ";
        while (!(cin >> D) || D <= 0)
        {
            cout << "Error.\n";
            cout << "It must be a numeric value\n"
                 << "greater than 0.\n";
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Death Rate " << i <<  ": ";
        }

        cout << "Individuals who moved into the area year " << i << ": ";
            while (!(cin >> arrivals ) || arrivals <= 0)
            {
                cout << "Error.\n";
                cout << "It must be a numeric value\n"
                    << "greater than 0.\n";
                cin.clear();
                cin.ignore(1000,'\n');
                cout << "Individuals who moved into the area year " << i << ": ";
            }

        cout << "Individuals who moved out of the area year " << i << ": ";
             while (!(cin >> departures ) || departures <= 0)
            {
                cout << "Error.\n";
                cout << "It must be a numeric value\n"
                    << "greater than 0.\n";
                cin.clear();
                cin.ignore(1000,'\n');
                cout << "Individuals who moved out of the area year " << i << ": ";
            }

        B *= .01;
        D *= .01;
        //N = P + BP − DP
        N =  P + (B * P) - (D * P) + arrivals - departures;
        cout << endl;
        cout << "------------------------------------------\n";
        cout << "Pupulation year " << i << ": " << N << endl;
        cout << "------------------------------------------\n";

    }
    
    
}



