/*-------------------------------------------------
Membership Fees Increase
A country club, which currently charges $2,500 
per year for membership, has announced it will 
increase its membership fee by 4% each year for 
the next six years. Write a program that uses a 
loop to display the projected rates for the next 
six years.
---------------------------------------------------*/
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

//--------------------
//Constants 
//--------------------
    //currently charges $2,500 per year
    double CURRENT_CHARGE = 2500.0;
    //increase its membership fee by 4% each year
    double INCREASE_RATE = 0.04;
    //number of years 
    const int YEARS = 6;
    //For calculations
    double increase;

    for (int i = 1; i <= YEARS; i++)
    {
        cout << "----------------------------\n";
        // i will iterate 6 times one for each year
        cout << "Year: " << i << endl;
        increase = 0.0; //Initialize acumulator 
        cout << fixed << showpoint << setprecision(2);

        for (int j = 1; j <= YEARS; j++)
        {
            //The increase  equal 2500.00 (Current price) * 0.04 (annual increase rate)
            increase = CURRENT_CHARGE * INCREASE_RATE;
            //We add the increase to the current price
            CURRENT_CHARGE = CURRENT_CHARGE + increase;
            //j is = CURRENT_CHARGE so it can iterate 6 times 
            j = CURRENT_CHARGE;
            cout << "New Charge: $" << CURRENT_CHARGE << endl;
            cout << "----------------------------\n";
        }
    }
    




    

}
    

 

   
   
    
    
    

    
    

