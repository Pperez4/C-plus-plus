/*--------------------------------------------------------------------------------
Personal Best
Write a program that asks for the name of a pole vaulter and the dates and vault 
heights (in meters) of the athlete’s three best vaults. It should then report, 
in order of height (best first), the date on which each vault was made and its 
height.
Input Validation: Only accept values between 2.0 and 5.0 for the heights.
--------------------------------------------------------------------------------s*/
//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
#include <string>
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
    //For the athlete name
    string athleteName;
    //For the dates 
    string dateOne;
    string dateTwo;
    string dateThree;
    //For the heights
    double height1;
    double height2;
    double height3;
    //To assign a place
    double firstBest;
    double secondBest;
    double thirdBest;

    //Prompting user for the three dates and athlete name
    cout << "Hello user, please provide the following information." << endl;
    cout << "Athlete name: ";
    getline(cin, athleteName);
    cout << "Date one: ";
    getline(cin, dateOne);
    cout << "Date two: ";
    getline(cin , dateTwo);
    cout << "Date three: ";
    getline(cin , dateThree);
    //Prompting user for the heights 
    cout << "Now enter the heights (in feet) correlated with the dates you provided above.\n"
         << "Only values between 2.0 and 5.0 are accepted for the heights.\n";
    cout << "Enter height one: ";
    cin >> height1;
    cout << "Enter height two: ";
    cin >> height2;
    cout << "Enter height three: ";
    cin >> height3;

cout << "------------------------------------------------------------" << endl;
cout << fixed << showpoint << setprecision(2);
if (height1 >= 2.0 && height1 <= 5.0 && height2 >= 2.0 && height2 <= 5.0 && height3 >= 2.0 && height3 <= 5.0)
{
    cout << "Athlete name: " << athleteName << endl;
    //Determining the first best height 
    if (height1 > height2 && height1 > height3)
    {
        firstBest = height1;
        cout << "First best height: " << firstBest << " feet.\n"
        << "Date: " << dateOne << "\n";
    }
    else if (height2 > height1 && height2 > height3)
    {
        firstBest = height2;
        cout << "First best height: " << firstBest << " feet.\n"
        << "Date: " << dateTwo << "\n";
    }
    else if (height3 > height1 && height3 > height2)
    {
        firstBest = height3;
        cout << "First best height: " << firstBest << " feet.\n"
        << "Date: " << dateThree << "\n";
    }
    if (height1 > height2 && height1 < height3 || height1 < height2 && height1 > height3)
    {
        secondBest = height1;
        cout << "Second best height: " << secondBest << " feet.\n"
        << "Date: " << dateOne << "\n";
    }
    else if (height2 > height1 && height2 < height3 || height2 < height1 && height2 > height3)
    {
        secondBest = height2;
        cout << "Second best height: " << secondBest << " feet.\n"
        << "Date: " << dateTwo << "\n";
    }
    else if (height3 > height1 && height3 < height2 || height3 < height1 && height3 > height2)
    {
        secondBest = height3;
        cout << "Second best height: " << secondBest << " feet.\n"
        << "Date: " << dateThree << "\n";
    }
    if (height1 < height2 && height1 < height3)
    {
        thirdBest = height1;
        cout << "Third best height: " << thirdBest << " feet.\n"
        << "Date: " << dateOne << "\n";
    }
    else if(height2 < height1 && height2 < height3)
    {
        thirdBest = height2;
        cout << "Third best height: " << thirdBest << " feet.\n"
        << "Date: " << dateTwo << "\n";
    }
    else if (height3 < height1 && height3 < height2)
    {
        thirdBest = height3;
        cout << "Third best height: " << thirdBest << " feet.\n"
        << "Date: " << dateThree << "\n";
    }
}
else
    cout << "Invalid Values for height" << endl;

cout << "------------------------------------------------------------" << endl;
}
