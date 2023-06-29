/*---------------------------------------------------
The program can be used as a math tutor for students 
the program should display two random numbers to be 
added such as 247 + 129 

The program shoudl then pause while the student works
on the problem. 

When the student is ready and press [ENTER]  the
program displays the right answer. 
-----------------------------------------------------*/


//------------------------
// Include Directives
//------------------------
#include <iostream>
#include <iomanip>
#include <string.h>
#include <cstdlib> //Library for random numbers 
//------------------------
// namespace statement
//------------------------
using namespace std;

//------------------------
// main function 
//------------------------
int main()
{
    //Constant variables to set the range of the random numbers
    const int MIN_VALUE = 100;
    const int MAX_VALUE = 1000;
    
    //Getting the systems time
    int seed = time(0);
    
    //Seed the random number generator
    srand(seed);

    int x = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    int y = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    
    int sum;

    cout << "Solve the following operation: " << endl;
    cout << "---------------------" << endl;
    cout << x << " + " << y << " = " <<endl;
    cout << "---------------------" << endl;
    cout << endl;
    cout << "Pless [ENTER] when you are ready to see the answer." << endl;
    cin.get();

    sum = x + y;
    cout << "Result of: " << x << " + " << y << " = " << sum << endl;

}