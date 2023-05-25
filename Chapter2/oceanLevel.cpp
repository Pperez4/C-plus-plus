/*-------------------------------
Assume ocean level is rising at 
about 1.5 millimeters per year
Display The following 
(1) Ocean level in 5 years
(2) Ocean level in  7 years
(3) Ocean lecel in 10 years
---------------------------------*/
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
    double increasingLevel = 1.5;
    double year5 = 5.0, year7 = 7.0, year10 = 10.0;

    //Displaying Ocean Levels in the correspoding year
    cout << "\tOCEAN LEVEL'S" << endl;
cout << "Ocean Level in 5 years: " << increasingLevel * year5 << " Millimeter's" << endl;
cout << "Ocean Level in 7 years: " << increasingLevel * year7 << " Millimeter's" << endl;
cout << "Ocean Level in 10 years: " << increasingLevel * year10 << " Millimeter's" << endl;
}

