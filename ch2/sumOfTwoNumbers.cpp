/*-------------------------------------
The program should store the integers
50 and 100 in two variables, and the sum
of the two should be stored in another
variable named total.
---------------------------------------*/

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
    //Variables to store the integers 50 and 100
    int numOne = 50;
    int numTwo = 100;
    int total;

    //Calculating the result 
    total = numOne + numTwo;

    //Displaying Result
    cout << "The result of the sum: " << total << endl;

}
