/*-------------------------------------------------------------
Population Bar Chart
Write a program that produces a bar chart showing the population 
growth of Prairieville, a small town in the Midwest, at 20-year 
intervals during the past 100 years. 

The program should read in the population figures 
(rounded to the nearest 1,000 people) for 
1900, 1920, 1940, 1960, 1980, and 2000 from a file. 
For each year it should display the date and a bar consisting
of one asterisk for each 1,000 people. 

The data can be found in the People.txt file.
Here is an example of how the chart might begin:

PRAIRIEVILLE POPULATION GROWTH 
(each * represents 1,000 people) 
1900 **
1920 ****
1940 *****
--------------------------------------------------------------*/

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
    //ifstream	Input file stream. You create an object of this data type when you want to open an existing file and read data from it. 

    ifstream inputFile; // an ifstream object called "inputFile"
    int values;
    string stars;


    //calling the object and open member function 
    inputFile.open("People.txt");


    // If file succesfully opened, process it
    if (inputFile)
    {
        cout << "Reading PRAIRIEVILLE POPULATION GROWTH  data from file.\n";

        //Read the numbers from the file and display them


        //The statement that extracts data from the file is used 
        //as the boolean expression in the while loop.  
        cout << "----------------------------------------------\n";
        cout << "\tPRAIRIEVILLE POPULATION GROWTH\n"
             << "\t(each * represents 1,000 people)\n";
        cout << "----------------------------------------------\n";
        while (inputFile >> values >> stars )
        {
                cout << values << " " << stars << endl;
        }
         cout << "---------------------------------------------\n";
        
        
        //Close the file
        inputFile.close();
    }
    else 
        //Display error message
        cout << "Error opening file.\n";
    
    return 0; 



}