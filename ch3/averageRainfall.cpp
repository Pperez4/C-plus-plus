//-------------------------------------------
// The program calculates the average of 
// rainfall for three months. The program
// ask the user to enter the name of each month
// and the amount of rain (in inches)
// then the program shoul display the average
//-------------------------------------------

//--------------------
// Include directives
//--------------------
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    const double numberOfMonths = 3;
    string month1, month2, month3;
    double amountRainM1, amountRainM2, amountRainM3;
    double averageRainfall;


    //Promption for the months input
    cout << "Please enter the name of each month." << endl;
    cout << "Month 1: ";
    getline(cin, month1);
    cout << "Month 2: ";
    getline(cin, month2);
    cout << "Month 3: ";
    getline(cin, month3);

    //Prompting for the amount of rain
    cout << "Please enter the amount of rain (in inches) for each month." << endl;
    cout << "Amount of rain (in inches) for " << month1 << " : ";
    cin >> amountRainM1;
    cout << "Amount of rain (in inches) for " << month2 << " : ";
    cin >> amountRainM2;
    cout << "Amount of rain (in inches) for " << month3 << " : ";
    cin >> amountRainM3;

    //Calculating Averege 
    averageRainfall = (amountRainM1 + amountRainM2 + amountRainM3) / numberOfMonths;

    //Displaying Result 
    cout << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "The average rainfall for " << month1 << " , " << month2 << " and " << month3 << " is: "
         << averageRainfall << endl; 
    cout << "--------------------------------------------------------------------------------" << endl;
}