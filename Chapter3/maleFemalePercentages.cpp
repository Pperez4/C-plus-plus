//------------------------------------------
// Chapter 3 Programing challenge 4 
//------------------------------------------
// The program ask the user for the number 
// of males and females registered in class
// then the percentage of males and females
// in class is displayed. 
//------------------------------------------
//------------------------
// Include Directives
//------------------------
#include <iostream>
//------------------------
// namespace statement
//------------------------
using namespace std;

//------------------------
// main function 
//------------------------
int main()
{
    int numberOfMales;
    int numberOfFemales;
    int totalStudents;
    int percentageM;
    int percetageF; 

    cout << "Please provide the following information about the class: " << endl;
    cout << "Number of females: ";
    cin >> numberOfFemales;
    cout << "Number of males: ";
    cin >> numberOfMales;

    //Calculation
    totalStudents = numberOfFemales + numberOfMales;
    percentageM = (numberOfMales / totalStudents);
    percetageF = (numberOfFemales / totalStudents);

    //Displaying result
    cout << "Male and Female percetages." << endl;
    cout << "Male: %"  << percentageM   << endl;
    cout << "Female: %"  << percetageF   << endl;


}