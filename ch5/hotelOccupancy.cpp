/*--------------------------------------------------------------------------
Hotel Occupancy
Write a program that calculates the occupancy rate for a hotel. The program
should start by asking the user how many floors the hotel has. A loop should 
then iterate once for each floor. In each iteration, the loop should ask the 
user for the number of rooms on the floor and how many of them are occupied. 
After all the iterations, the program should display how many rooms the hotel 
has, how many of them are occupied, how many are unoccupied, and the percentage 
of rooms that are occupied. The percentage may be calculated by dividing the 
number of rooms occupied by the number of rooms.
NOTE: It is traditional that most hotels do not have a thirteenth floor. 
he loop in this program should skip the entire thirteenth iteration.

Input Validation: Do not accept a value less than 1 for the number of floors.
Do not accept a number less than 10 for the number of rooms on a floor.
---------------------------------------------------------------------------*/

//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
#include <iomanip>
#include <cmath>
//------------------------------
// namespace statement
//------------------------------
using namespace std;

//------------------------------
// Main Function
//------------------------------
int main() 
{
    //Variable for floors on the hotel
    int floorsHotel;
    //for number of rooms per floor
    int numberOfRooms;
    //for rooms occupied in each floor
    int occupied;
    //For total rooms and total occupied
    int totalRooms = 0;
    int totalOccupied = 0;
    //for occupied percentage
    double occupiedPercentage;
    
    cout << "---------------------------------------------------------\n";
    cout << "Program calculates the occupancy rate for a hotel." << endl; 
    cout << "---------------------------------------------------------\n";
    
    cout << "Number of floors in the hotel: ";
    cin >> floorsHotel;
    
//-----------------------------------------------------------
//Do not accept a value less than 1 for the number of floors
//-----------------------------------------------------------
while (floorsHotel < 1)
{
    cout << "Program does not accept values less than 1 for the number of floors\n";
    cout << "Number of floors in the hotel: ";
    cin >> floorsHotel;
}


cout << fixed << showpoint << setprecision(2);
    for (int i = 1; i <= floorsHotel; i++)
    {
//----------------------------------------------------
//program should skip the entire thirteenth iteration
//----------------------------------------------------
        if (i == 13)
        {
            continue;
        }
        
        cout << "Number of rooms in floor " << i << ": ";
        cin >> numberOfRooms;
//------------------------------------------------------------------------
//Do not accept a number less than 10 for the number of rooms on a floor.
//------------------------------------------------------------------------ 
        while (numberOfRooms < 10)
        {
            cout << "Program does not accept a number less than 10 for\n"
                 << "the number of rooms on a floor.";
            cout << "Number of rooms in floor " << i << ": ";
            cin >> numberOfRooms;

        }
        
        cout << "Number of rooms occupied in floor " << i << ": ";
        cin >> occupied;

        while (occupied > numberOfRooms)
        {
            cout << "⚠️Invalid value for rooms occupied.⚠️\n";
            cout << "Enter a valid value: ";
            cin >> occupied;
        }

        totalRooms += numberOfRooms;
        totalOccupied += occupied;
        

    }
//-----------------------------------------------------------------------------
// The static_cast operator converts variable int to type float . 
//This allows the compiler to generate a division with an answer of type float 
// which is beneficial in this scenario where a percentage is desired,
//------------------------------------------------------------------------------
    occupiedPercentage = static_cast<double>(totalOccupied) / static_cast<double>(totalRooms);
    
    cout << endl;
    cout << "--------------------------------------------------\n";
    cout << "\t\tHotel Report.\n";
    cout << "--------------------------------------------------\n";
    cout << "Total Rooms: " << totalRooms << endl;
    cout << "Total Occupied: " << totalOccupied << endl;
    cout << "Percentage of rooms occupied: " << occupiedPercentage * 100 <<"%"<< endl;
    cout << "Available rooms: " << totalRooms - totalOccupied << endl;
    cout << "--------------------------------------------------\n";

        
}