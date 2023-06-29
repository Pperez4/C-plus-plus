/*------------------------------------
A car with a 20 gallon gas tank averages
23.5 miles per gallon when driving in 
town and 28.9 miles per gallon when
driven in highway. The pogram should
display the distance the car traveled on one
tank of gas driven on town and highway.

HINT: Distance = Number of Gallons *
Average Miles per Gallon
-------------------------------------*/

//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
//------------------------------
// namespace statement
//------------------------------
using namespace std;

//------------------------------
// Main Function
//------------------------------
int main()

{
   //The 20 gallon's in the car
   double numberGallons = 20.0;

   //Given Averages
   double milesInTown = 23.5;
   double milesInHighway = 28.9;

   //for Distance Traveled
   double distanceTown;
   double distanceHighway;

   //Calculating Miles traveled
   distanceTown = numberGallons * milesInTown;
   distanceHighway = numberGallons * milesInHighway;

   //Displaying results 
   cout << "\tDistance" << endl;
   cout << "On one tank of gas and driving in the town" 
        << " the car can travel a distance of " << distanceTown << " miles." << endl;
   cout <<"On one tank of gas and driving in the highway"
        << " the car can travel a distance of " << distanceHighway << " miles." << endl;

}