/*-------------------------------------------
The East Cost Division of a Company generates,
58 percent of total sales. Based on the given
percetage, the program predicts how much the
East Cost Division will generate if the company
has $8.6 millions in sales this year.
--------------------------------------------*/

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

    //Given Percentage
    double percetageSales = 0.58;
    //Given Revenue from Sales
    int revenue = 8600000;
    // Actual Amount 
    double actualRevenue;

    //Calculating how much East Cost Division will generate 
    actualRevenue = revenue * percetageSales;

    //Diplaying Result 
    cout << "The East Cost Division will generate: $" << actualRevenue << " this year." << endl; 

}