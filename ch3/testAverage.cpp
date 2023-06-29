//----------------------------------------
// Write a program that ask's for five 
// test scores. The program shoul calculate
// the average test score and diplay it.
// The number displayed shoul be formated
// in fixed point notation with a decimal
// point of precision. 
//----------------------------------------

//------------------------
// Include Directives
//------------------------
#include <iostream>
#include <iomanip>
//------------------------
// namespace statement
//------------------------
using namespace std;

//------------------------
// main function 
//------------------------
int main()
{
    //Constant variable for the number of test's 
    const double numberOfTests = 5.0;
    //Variables to promt user
    double test1,
           test2,
           test3,
           test4,
           test5;

    //Variable for calculation 
    double average;
    //Prompting user for input 
    cout << "Please enter the score you earned for each test." << endl;
    cout << "Test 1:";
    cin >> test1;
    cout << "Test 2:";
    cin >> test2;
    cout << "Test 3:";
    cin >> test3;
    cout << "Test 4:";
    cin >> test4;
    cout << "Test 5:";
    cin >> test5;

//Calculation 
average = (test1 + test2 + test3 + test4 + test5) / numberOfTests;

//Displaying result 
cout << fixed << setprecision(2);
cout << "----------------------------" << endl;
cout << "Average: " << average << endl;
cout << "----------------------------" << endl;
}
