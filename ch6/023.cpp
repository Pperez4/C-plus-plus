/*----------------------------------------------------------
Prime Number List
Use the isPrime function that you wrote in Programming Challenge 
22 in a program that stores a list of all the prime numbers from 
1 through 100 in a file.
------------------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;

void isPrime(ofstream&);
int main()
{

    //Creating a output file object 
    ofstream outputFile;
    outputFile.open("primeNumbers.txt");
    if (outputFile)
        cout << "File Oponed Succesfully.\n";
    
    outputFile << "-----------------------------------\n";
    outputFile << "\tPrime number from 1-100 report.\n";
    outputFile << "-----------------------------------\n";
    isPrime(outputFile);
    outputFile << "-----------------------------------\n";
    outputFile.close();
}

//----------------------------------------
// isPrime definition()
// The function is similar to the one in
// program 022 but is does not have return
// value. It accepts the outputFile as a
// parameter the outputFile.
//----------------------------------------

void isPrime(ofstream& outputFile)
{

/*---------------------------------------------
The logic is as follows in the function.
There is an outer for loop which is reponsible
for the number from 1 to 100.
The inner for loop checks if the number is prime
and a counter(j) is incremented. 
if j is exactly 2 then the number is prime and
stored in the file. 
-----------------------------------------------*/

    for (int number = 1;  number <= 100; number++)
    {
        int j = 0;
        for (int i = 1; i <= number; i++)
        {
            if (number % i == 0)
            {
                j++;
            }

        }
        if (j == 2)
            outputFile << number << endl;
        
        else{

        }
    }

}