/*--------------------------------------------------------------
Using Files—Numeric Processing
Write a program that opens the file, reads all the numbers from 
the file, and calculates the following:

A) The number of numbers in the file
B) The sum of all the numbers in the file (a running total) 
C) The average of all the numbers in the file
The program should display the number of numbers found in the file, 
the sum of the numbers, and the average of the numbers.
----------------------------------------------------------------*/

//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
#include <fstream> //contains all the declarations necessary for file operations. 
//------------------------------
// namespace statement
//------------------------------
using namespace std;

//------------------------------
// Main Function
//------------------------------
int main()
{

    //ceatring file object ifstream
    ifstream inputFile;

    int numberOfValues;
    int sum = 0;
    int counter = 0;
    double average;

    //Opening file
    inputFile.open("Random.txt");
    
    if (inputFile)
    {
       cout << "Reading from the file.\n";
       while (inputFile >> numberOfValues)
       {
            sum += numberOfValues;
            counter++;
       }
    //Determining the avergae
             average = static_cast<double>(sum) / static_cast<double>(counter);
       
       cout << endl;
       cout << "---------------------------------------\n";
       cout << "Number of values: " << counter << endl;
       cout << "Sum: " << sum << endl;
       cout << fixed << showpoint << setprecision(2);
       cout << "Average: " << average << endl;
       cout << "---------------------------------------\n";
       cout << endl;

       inputFile.close();
    }
    else
        cout << "Error Opening the file\n";
    
}
