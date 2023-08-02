/*----------------------------------------------------------------------------
Paint Job Estimator
A painting company has determined that for every 110 square feet of wall space, 
one gallon of paint and eight hours of labor will be required. The company 
charges $25.00 per hour for labor. Write a modular program that allows the 
user to enter the number of rooms that are to be painted and the price of
the paint per gallon. It should also ask for the square feet of wall space 
in each room. It should then display the following data:

• The number of gallons of paint required
• The hours of labor required
• The cost of the paint
• The labor charges
• The total cost of the paint job

Input validation: Do not accept a value less than 1 for the number of rooms. 
Do not accept a value less than $10.00 for the price of paint. Do not accept 
a negative value for square footage of wall space.
------------------------------------------------------------------------------*/
#include <iostream>
#include <iomanip>
using namespace std;


//Global variables
const double laborHourCost = 25.00;
const int numberOfSquareFGallon = 110;
const int hours = 8;

//Function(s) prototypes 
int getNumberRooms();
void calculateAndDisplay(int);

int main()
{
    int rooms;
    rooms = getNumberRooms();
    calculateAndDisplay(rooms);
}

//-----------------------------
/// This function gets and 
// returns the number of rooms
// to be painted.
//-----------------------------
int getNumberRooms()
{
    int r;

    cout << "Enter the number of rooms to be painted: ";
        while (!(cin >> r) || r <= 0)
        {
           cout << "Error\n"
                << "It must be a numeric value\n"
                << "greater than 0.\n";
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Enter the number of rooms to be painted: ";
        }
        
    return r;
}

//-------------------------------------------------
// The function calculates and displays the following
// • The number of gallons of paint required
// • The hours of labor required
// • The cost of the paint
// • The labor charges
// • The total cost of the paint job
//-------------------------------------------------

void calculateAndDisplay(int r)
{
    double numberOfGallons;
    int numberOfHours;
    double costPaint;
    double gallonPrice;
    double laborChargues;
    double totalCost;

    double squareFeetPerRoom;
    double totalSquareFeet = 0;

    for (int i = 1; i <= r; i++)
    {
        cout << "Enter square feet of wall space for room "
             << i << ": ";
            while (!(cin >> squareFeetPerRoom) || squareFeetPerRoom <= 0)
            {
                cout << "Error\n"
                << "It must be a numeric value\n"
                << "greater than 0.\n";
                cin.clear();
                cin.ignore(1000,'\n');
                cout << "Enter square feet of wall space for room "
                     << i << ": ";
            }
            

        totalSquareFeet += squareFeetPerRoom;
    }
    

    //Number of gallons needed
    numberOfGallons = totalSquareFeet / numberOfSquareFGallon;
    numberOfHours = totalSquareFeet / numberOfSquareFGallon * hours;

    cout << "Enter the price per gallon: $";
        while (!(cin >> gallonPrice) || gallonPrice <= 0)
            {
                cout << "Error\n"
                << "It must be a numeric value\n"
                << "greater than 0.\n";
                cin.clear();
                cin.ignore(1000,'\n');
                cout << "Enter the price per gallon: ";
            }


    costPaint = gallonPrice * numberOfGallons;
    laborChargues = numberOfHours * laborHourCost;
    totalCost = costPaint + laborChargues;

    cout << "-------------------------------------\n";
    cout << "\tPaint Job Estimator\n";
    cout << "-------------------------------------\n";
    cout << fixed << showpoint << setprecision(2);
    cout << "Number of Rooms: " << r << endl;
    cout << "Total Square feet: " << totalSquareFeet << endl;
    cout << "Gallons needed: " << numberOfGallons << endl;
    cout << "Labor hours: " << numberOfHours << endl;
    cout << "Paint Cost: $" << costPaint << endl;
    cout << "Labor Cost: $" << laborChargues << endl;
    cout << "-------------------------------------\n";
    cout << "TOTAL: $" << totalCost << endl;
    cout << "-------------------------------------\n";





}

