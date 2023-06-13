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
    string runnerOneName;   double runnerOneTime;
    string runnerTwoName;   double runnerTwoTime;
    string runnerThreeName; double runnerThreeTime;
    
    //Variables to store first second and third
    string first;
    string second;
    string third;

    //Prompting user for the names and times 
    cout << "Enter runner number one name: ";
    getline(cin, runnerOneName);
    cout << "Time it took runner number one to finish a race: ";
    cin >> runnerOneTime;

    cout << "Enter runner number two name: ";
    getline(cin, runnerTwoName);
    cout << "Time it took runner number two to finish a race: ";
    cin >> runnerTwoTime;

    cout << "Enter runner number one name: ";
    getline(cin, runnerThreeName);
    cout << "Time it took runner number three to finish a race: ";
    cin >> runnerThreeTime;



}