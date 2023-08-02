/*--------------------------------------------------------------
A prime number is a number that is only evenly divisible 
by itself and 1. For example, the number 5 is prime because
it can only be evenly divided by 1 and 5. The number 6, however, 
is not prime because it can be divided evenly by 1, 2, 3, and 6.
Write a function name isPrime, which takes an integer as an argument 
and returns true if the argument is a prime number, or false otherwise. 
Demonstrate the function in a complete program.

TIP: Recall that the % operator divides one number by another, and 
returns the remainder of the division. In an expression 
such as num1 % num2, the % operator will return 0 if num1 is 
evenly divisible by num2.
---------------------------------------------------------------*/

#include <iostream>
using namespace std;

//function prototype
bool isPrime(int n);

int main()
{
    //Variable for user input 
    int number;
    bool result;

    cout << "Enter a number and the program will determine if it\n"
         << "is prime: ";
        while (!(cin >> number))
        {
            cout << "Error\n"
                << "It must be a numeric value.\n";
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Enter a number and the program will determine if it\n"
            << "is prime: ";
        }
    
    result = isPrime(number);
    cout << endl;

    if (result == true)
        cout << "The number is prime.\n";
    else
        cout << "The number is not prime.\n";
}


//---------------------------------------------------------
// isPrime() definition 
// The function takes an integer as an argument and returns 
// true if the argument is a prime number.
//---------------------------------------------------------
bool isPrime(int n)
{
    bool r;
    int count = 0;


/*------------------------------------
A number is prime if it it can only be 
evenly divided by 1 and itself. Here I
created a for loop that executes until
i is less or equal to n (user number) 
If the remainder of n / i is equal to
0, the counter increments. If the counter
is not equal to 2 then the number is not 
prime.

For example lets supposse that the user
enters 9 as input then i will go from 
1,2,3,4,5,6,7,8,9
if(n%i == 0)
    count++;
This is true for 1,3,9 which means the
counter = 3 indicating the number is not
prime.

--------------------------------------*/

    for (int i = 1; i <= n; i++)
    {
        if(n%i == 0)
            count++;
    }
    
    if (count == 2)
        r = true;
    else
        r = false;

    return r;
}