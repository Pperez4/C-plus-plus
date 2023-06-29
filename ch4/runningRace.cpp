/*-----------------------------------------------------------------
Running the Race
Write a program that asks for the names of three runners and the 
time it took each of them to finish a race. The program should display 
who came in first, second, and third place.
Input Validation: Only accept positive numbers for the times.
-------------------------------------------------------------------*/

//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
#include <iomanip>
#include <string>
//------------------------------
// namespace statement
//------------------------------
using namespace std;

//------------------------------
// Main Function
//------------------------------
int main()
{
    //Variables for runners names and time
    string oneName;   double oneTime;
    string twoName;   double twoTime;
    string threeName; double threeTime;
    
    //Variables to store first second and third
    string first;
    string second;
    string third;

    //Prompting user for the names 
    cout << "Name 1: "; 
    getline(cin, oneName); 
    cout << "Name 2: ";
    getline(cin, twoName);  
    cout << "Name 3: ";
    getline(cin, threeName);
    //Prompting user for the times
    cout << "Time it took runner 1 to finish the race: ";
    cin >> oneTime;
    cout << "Time it took runner 2 to finish the race: ";
    cin >> twoTime;
    cout << "Time it took runner 3 to finish a race: ";
    cin >> threeTime;

//Determing first place 
if (oneTime < twoTime && oneTime < threeTime)
{
    first = oneName;
    cout << "First place: " << first << endl;
}
else if (twoTime < oneTime && twoTime < threeTime)
{
    first = twoName;
    cout << "First place: " << first << endl;
}
else if (threeTime < oneTime && threeTime < twoTime)
{
    first = threeName;
    cout << "First place: " << first << endl;
}

//Determing second place 
if (oneTime > twoTime && oneTime < threeTime || oneTime < twoTime && oneTime > threeTime)
{
    second = oneName;
    cout << "Second place: " << second << endl;
}
else if (twoTime > oneTime && twoTime < threeTime || twoTime < oneTime && twoTime > threeTime)
{
    second = twoName;
    cout << "Second place: " << second << endl;
}
else if (threeTime > oneTime && threeTime < twoTime || threeTime < oneTime && threeTime > twoTime)
{
    second = threeTime;
    cout << "Second place: " << second << endl;
}

//Determing third place 
if (oneTime > twoTime && oneTime > threeTime)
{
    third = oneName;
    cout << "Third place: " << third << endl;
}
else if (twoTime > oneTime && twoTime > threeTime)
{
    third = twoName;
    cout << "Third place: " << third << endl;
}
else if (threeTime > twoTime && threeTime > oneTime)
{
    third = threeName;
    cout << "Third place: " << third << endl;
}







    
    
    
    
    

    
    
    


}