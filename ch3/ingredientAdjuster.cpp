//------------------------------------------------------
// A cookie recipe calls for the following ingredients 
// 1.5 cups of sugar
// 1 cup of butter
// 2.75 cups of flour
// The recipe makes 48 cookies. The program ask the user 
// for the number of cookies they want and displays the
// needed ingredients. 
//------------------------------------------------------

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
    const int standardNumberCookies = 48; // The standard recipe makes 48 cookies
    double standardCupsSugar = 1.5;
    double stadardCupsButter = 1.0;
    double stadardCupsFlour = 2.75;

    //To prompt user 
    int numberOfCookies;

    cout << "How many cookies do you want to make: ";
    cin >> numberOfCookies;

    cout << "To make " << numberOfCookies << " Cookies you need the following ingredients." << endl;
    cout << standardCupsSugar / standardNumberCookies * numberOfCookies << " cups of sugar." << endl;
    cout <<  stadardCupsButter / standardNumberCookies * numberOfCookies << " cups of butter." << endl;
    cout << stadardCupsFlour / standardNumberCookies * numberOfCookies << " cups of flour." << endl;

}