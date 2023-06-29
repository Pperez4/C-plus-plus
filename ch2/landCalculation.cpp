/*-------------------------------
One acre of land is is equivalent
to 43560 square feet.
The program shoudl calculate the
number of acres in a land of
391,876 square feet.
--------------------------------*/

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
    //One acre is equivalent to 43560 square feet
    double acreInSquareFeet = 43560.0;
    //Number of square feet in the land
    double landSquareFeet = 391876.0;
    //Variable for number of acre's in the land
    double totalAcres;

    //Calculating 
    totalAcres = landSquareFeet / acreInSquareFeet;

    //Displaying Results 
    cout << "Number of Acres in the land: " << totalAcres << endl;

}