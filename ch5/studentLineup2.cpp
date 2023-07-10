/*--------------------------------------------------------------
Using Files—Student Line Up
Modify the Student Line Up program so that it gets the names from a 
file. Names should be read in until there is no more data to read. 
----------------------------------------------------------------*/
//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
#include <string>
#include <fstream>
//------------------------------
// namespace statement
//------------------------------
using namespace std;

//------------------------------
// Main Function
//------------------------------
int main() 
{


    //Creating ifstream object
    ifstream inputFile;

    //Variables 
    string last;
    string first;
    string studentName;
    int numberOfStundents;
    //opening file
    inputFile.open("lineUp.txt");

    if (inputFile)
    {
       cout << "Reading from file." << endl;

        inputFile >> studentName;
        last = first = studentName;

        while (inputFile >> studentName)
        {
            numberOfStundents ++;//Counter to determine the number of students 
        
            for (int i = 2; i <= numberOfStundents; i++)
            {  
                inputFile >> studentName;
                if (studentName > last)
                    last = studentName;
                if (studentName < first)
                    first = studentName;

            }

        }

        
        cout << endl;
        cout << "---------------------------------------\n";
        cout << "Front of the line: " << first << endl;
        cout << "End of the line: " << last << endl;
        cout << "---------------------------------------\n"; 
        cout << endl;

         inputFile.close();

    }
    else 
        cout << "Error opening the file." << endl;
    

}