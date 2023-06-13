/*----------------------------------------------------------
The user enters a number thought the range of 1 - 10 
the program utilizes the switch statement to display the 
Roman numeral of that number. 
Dont Accept values that are greater than 10 or less than 1
------------------------------------------------------------*/


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

//Variable to promt user for a number in the range of 1-10
int userNumber;
//Prompting User 
cout << "Enter a number in the range of 1 - 10 and I will display it's roman equivalency." << endl;
cin >> userNumber;

//If the value provided is not in the correct range the program terminated with a message
if (userNumber < 1 || userNumber > 10)
{
   cout << "You enetered a invalid value." << endl;
   cout << "The program only accepts values in the range of 1 - 10.";
}
//else the program proceds with the switch statement 
else
{
    switch (userNumber)
    {
        case 1:
            cout << "You entered: " << userNumber << endl;
            cout << "Roman number: I.\n";
            break;
        case 2:
            cout << "You entered: " << userNumber << endl;
            cout << "Roman number: II.\n";
            break;
        case 3:
            cout << "You entered: " << userNumber << endl;
            cout << "Roman number: III.\n";
            break;
        case 4:
            cout << "You entered: " << userNumber << endl;
            cout << "Roman number: IV.\n";
            break;
        case 5:
            cout << "You entered: " << userNumber << endl;
            cout << "Roman number: V.\n";
            break;
        case 6:
            cout << "You entered: " << userNumber << endl;
            cout << "Roman number: VI.\n";
            break;
        case 7:
            cout << "You entered: " << userNumber << endl;
            cout << "Roman number: VII.\n";
            break;
        case 8:
            cout << "You entered: " << userNumber << endl;
            cout << "Roman number: VIII.\n";
            break;
        case 9:
            cout << "You entered: " << userNumber << endl;
            cout << "Roman number: IX.\n";
            break;
        case 10:
            cout << "You entered: " << userNumber << endl;
            cout << "Roman number: X.\n";
            break;

        default:
            cout << "Program terminating." << endl;
            break;
    }
}

}