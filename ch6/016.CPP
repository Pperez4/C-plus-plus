/*------------------------------------------------------------
Population
In a population, the birth rate is the percentage increase of 
the population due to births, and the death rate is the percentage 
decrease of the population due to deaths. 
Write a program that displays the size of a population for any 
number of years. 
The program should ask for the following data:
• The starting size of a population
• The annual birth rate
• The annual death rate
• The number of years to display
Write a function that calculates the size of the population for a year. 
The formula is
N = P + BP − DP
N is the new population size
P is the previous population size, 
B is the birth rate
D is the death rate 

Input Validation: Do not accept numbers less than 2 for the starting size. Do not accept negative numbers for birth rate or death rate. Do not accept numbers less than 1 for the number of years.

---------------------------------------------------------------*/
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

    //For calculation
    int N;

    for (int i = 1; i <= y; i++)
    {
        cout << "Population Starting Size year " << i << ": ";
        while (!(cin >> P) || P <= 0)
        {
            cout << "Error.\n";
            cout << "It must be a numeric value\n"
                 << "greater than 0.\n";
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
      
      B *= .01;
      D *= .01;
      //N = P + BP − DP
      N =  P + (B * P) - (D * P);
      cout << endl;
      cout << "------------------------------------------\n";
      cout << "Pupulation year " << i << ": " << N << endl;
      cout << "------------------------------------------\n";

    }
    
    
}



