//------------------------------------------
// Chapter 3 Programing challenge 2
//------------------------------------------
// There are three seating caregories at a 
// stadium. For a softball game. Class A
// seats cost $15, Class B seats cost $12
// and class C seats cost $9. The program
// ask's for the number of tickets for each
// class that were sold, and then displays
// the amount of income generated from 
// tickets sales. The dollar amount shoudl be
// formated in fixed point notation, with
// decimal places of precision and be sure
// the decimal place is always displayed 
//------------------------------------------

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

    //Constants variables for the price of each category
    const double class_A = 15.0;
    const double class_B = 12.0;
    const double class_C = 9.0;

    //Variables to promt for input 
    int numberTicketsA;
    int numberTicketsB;
    int numberTicketsC;
    
    //Variable for total sales
    double totalSales;

    //Prompting user for input 
    cout << "Enter the number of tickets sold for each class." << endl;
    cout << "Class A: ";
    cin >> numberTicketsA;
    cout << "Class B: ";
    cin >> numberTicketsB;
    cout << "Class C: ";
    cin >> numberTicketsC;

    //Calulcaing Sales 
    totalSales = (numberTicketsA * class_A) + (numberTicketsB * class_B) + (numberTicketsC * class_C);

    //Displaying The result

    cout << fixed << showpoint << setprecision(2);
    cout << "------------------------------------" << endl;
    cout << "Total Sales: $" << totalSales << endl;
    cout << "------------------------------------" << endl;



}