/*-----------------------------------------------
Modify that program so it uses a loop to display a 
table of the Celsius temperatures 0–20, and their 
Fahrenheit equivalents.

FORMULA: F = 9/5C + 32
-------------------------------------------------*/

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
    cout << "-----------------------------------------------------------\n";
    cout << "Temperature in Celsius\t" <<"| Temperature in Fahrenheit\n";
    cout << "-----------------------------------------------------------\n";
    for (int i = 0; i <= 20; i++)
    {
        cout << i << "\t\t\t\t" << (i * 9/5) + 32 << endl;
    }
    
}