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
        cout << fixed << showpoint << setprecision(2);
        cout << "Charge: $" << CURRENT_CHARGE << endl;
        CURRENT_CHARGE += CURRENT_CHARGE * INCREASE_RATE;
        cout << endl;
    }
    




    

}
    

 

   
   
    
    
    

    
    

