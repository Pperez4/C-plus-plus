/*-----------------------------
The program determines how many
bytes the following data types 
use: char, int, float, double.

You can't look this information
up.
------------------------------*/

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
    //Since we are not allowed to look up this information, 
    // we can use the sizeof operator, chapter provided
    // an example on how to utilize it. 
    cout << "\tData Type Size." << endl;
    cout << "char = " << sizeof(char) << " byte" << endl;
    cout << "int = " << sizeof(int) << " byte's" << endl;
    cout << "float = " << sizeof(float) << " byte's" << endl;
    cout << "double = " << sizeof(double) << " byte's" << endl;
}
