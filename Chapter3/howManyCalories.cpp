//----------------------------------------
// A bag of cookies holds 30 cookies. The
// caloeries intake of the bad claim is has
// 10 servings and a serving is equal to 
// 300 calories. Write a program that
// asks the user for input about how many
// cookies he or she ate, then reports the
// number of calories consumed
//----------------------------------------

//------------------------
// Include Directives
//------------------------
#include <iostream>
#include <iomanip>
#include <string.h>
//------------------------
// namespace statement
//------------------------
using namespace std;

//------------------------
// main function 
//------------------------
int main()
{
    //Constant variables for the bag of cookies
    const int numberOfCookiesBag = 30;
    const int numberServings = 10;
    const double servingCalories = 300.0;

    //Variable to calculate the number of calories in a cookie
    int cookiesPerServing;
    double caloriesPerCookie;

    //To promp the user
    int numberOfEatenCookies;

    //Calulating the calories in a cookie
    cookiesPerServing = numberOfCookiesBag / numberServings;
    caloriesPerCookie = servingCalories / cookiesPerServing;

    //Propting the user 
    cout << "Enter the number of cookies you ate: ";
    cin >> numberOfEatenCookies;

    //Displaying Caloric consumption 
    cout << "Calories consumed: " << numberOfEatenCookies * caloriesPerCookie << endl;

}