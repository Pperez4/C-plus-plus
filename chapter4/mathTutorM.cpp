/*---------------------------------------------------------
Math Tutor
This is a modification of Programming Challenge 17 from 
Chapter 3. 
Write a program that can be used as a math tutor for a young
student. The program should display two random numbers that 
are to be added, such as:
247  + 129
The program should wait for the student to enter the answer. 
If the answer is correct, a message of congratulations should 
be printed. If the answer is incorrect, a message should be printed 
showing the correct answer.
----------------------------------------------------------*/
//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
#include <cstdlib>
//------------------------------
// namespace statement
//------------------------------
using namespace std;

//------------------------------
// Main Function
//------------------------------
int main()
{
    //Variables for maximum and minimum numbers
    const int MAX_VALUE = 1000;
    const int MIN_VALUE = 100;

    //Seed value and calling srand
    int seed = time(0);
    srand(seed);

    //Variables for random numbers to be added
    int x;
    int y;
    //Variable to prompt user for his/her result 
    int userResult;
    //Variable for the sum calculation
    int sum;
    //storing random numbers in x and y between the range of 100 - 1000
    x = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    y = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    sum = x + y;

    cout << "--------------------------------------------------------" << endl;
    cout << "Student please solve the following operation." << endl;
    cout << x << " + " << y << endl;
    cout << "When you are ready press [Enter] and provide your anwer." << endl;
    cin.get();
    cout << "Result: ";
    cin >> userResult;
    cout << "--------------------------------------------------------" << endl;

    if (userResult == sum)
    {
        cout << "Congratulations that correct." << endl;
        cout << x << " + " << y << " = " << sum << endl;
    }
    else if (userResult != sum)
    {
        cout << "Your result is incorrect." << endl;
        cout << x << " + " << y << " = " << sum << endl;
        cout << "But you entered " << userResult << endl;
    }
    
cout << "--------------------------------------------------------" << endl;


}