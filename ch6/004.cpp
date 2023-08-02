/*-----------------------------------------------------------------------
Safest Driving Area
Write a program that determines which of five geographic regions within 
a major city (north, south, east, west, and central) had the fewest 
reported automobile accidents last year. It should have the following 
two functions, which are called by main.
• int getNumAccidents() is passed the name of a region. It asks the user 
for the number of automobile accidents reported in that region during 
the last year, validates the input, then returns it. 
It should be called once for each city region.
• void findLowest() is passed the five accident totals. 
It determines which is the smallest and prints the name of the region, 
along with its accident figure.
Input Validation: Do not accept an accident number that is less than 0.
-----------------------------------------------------------------------*/
//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
#include <iomanip>
//------------------------------
// namespace statement
//------------------------------
using namespace std;

//------------------------------
// Function prototypes 
//------------------------------

//Global constants for the name of the regions
const string R1 = "north",
             R2 = "south",
             R3 =  "east", 
             R4 = "west", 
             R5 = "central";
              

int getNumAccidents(string);
void findLowest(int,int,int,int,int);


int main()
{
    int numAccidentsR1,
        numAccidentsR2,
        numAccidentsR3,
        numAccidentsR4,
        numAccidentsR5;

    //int getNumAccidents should be called once for each city region.
    numAccidentsR1 = getNumAccidents(R1);
    numAccidentsR2 = getNumAccidents(R2);
    numAccidentsR3 = getNumAccidents(R3);
    numAccidentsR4 = getNumAccidents(R4);
    numAccidentsR5 = getNumAccidents(R5);

    //void findLowest() is passed the five accident totals. 
    findLowest(numAccidentsR1, numAccidentsR2, numAccidentsR3,
                numAccidentsR4, numAccidentsR5);
    

}

//------------------------------------------------------
// int getNumAccidents() definition 
// It is passed the name of a region. It asks the user 
// for the number of automobile accidents reported in 
// that region during the last year, validates the input, 
// then returns it.
//------------------------------------------------------

int getNumAccidents(string region)
{
    int numAccidents;
    cout << "Enter the number of automobile accidents reported in "
         << region << " last year: ";
    while (!(cin >> numAccidents) || numAccidents <= 0)
    {
        cout << endl;
        cout << "ERROR\n";
        cout << "The number of accidents must be a numeric value\n"
             << "and greater than 0.\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Enter the number of automobile accidents reported in "
         << region << " last year: ";
    }
    
    return numAccidents;
}

//------------------------------------------------------
// void findLowest() definition 
// It is passed the five accident totals. It determines 
// which is the smallest and prints the name of the region, 
// along with its accident figure.
//------------------------------------------------------
void findLowest(int A1,int A2,int A3,int A4,int A5)
{
    string lowest;

    if (A1 < A2 && A1 < A3 && A1 < A4 && A1 < A5)
    {
        cout << endl;
        cout << "----------------------------------\n";
        lowest = R1;
        cout << "Safest Driving Area: " << lowest << endl;
        cout << "Number of Accidents: " << A1 << endl;
        cout << "----------------------------------\n";
    }
    else if (A2 < A1 && A2 < A3 && A2 < A4 && A2 < A5)
    {
        cout << endl;
        cout << "----------------------------------\n";
        lowest = R2;
        cout << "Safest Driving Area: " << lowest << endl;
        cout << "Number of Accidents: " << A2 << endl;
        cout << "----------------------------------\n";
    }
    else if (A3 < A1 && A3 < A2 && A3 < A4 && A3 < A5)
    {
        cout << endl;
        cout << "----------------------------------\n";
        lowest = R3;
        cout << "Safest Driving Area: " << lowest << endl;
        cout << "Number of Accidents: " << A3 << endl;
        cout << "----------------------------------\n";
    }
    else if (A4 < A1 && A4 < A2 && A4 < A3 && A4 < A5)
    {
        cout << endl;
        cout << "----------------------------------\n";
        lowest = R4;
        cout << "Safest Driving Area: " << lowest << endl;
        cout << "Number of Accidents: " << A4 << endl;
        cout << "----------------------------------\n";
    }
    else if (A5 < A1 && A5 < A2 && A5 < A3 && A5 < A4)
    {
        cout << endl;
        cout << "----------------------------------\n";
        lowest = R5;
        cout << "Safest Driving Area: " << lowest << endl;
        cout << "Number of Accidents: " << A5 << endl;
        cout << "----------------------------------\n";
    }
    
}