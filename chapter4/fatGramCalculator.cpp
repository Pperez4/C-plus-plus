/*-------------------------------------------------------------------------
Fat Gram Calculator
Write a program that asks for the number of calories and fat grams in a food. 
The program should display the percentage of calories that come from fat.
If the calories from fat are less than 30% of the total calories of the food, 
it should also display a message indicating that the food is low in fat.
One gram of fat has 9 calories, 
so Calories from fat = fat grams * 9
The percentage of calories from fat can be calculated as 
Calories from fat / total calories
Input Validation: Make sure the number of calories and fat grams are not less 
than 0. Also, the number of calories from fat cannot be greater than the total 
number of calories. If that happens, display an error message 
indicating that either the calories or fat grams were incorrectly entered.
---------------------------------------------------------------------------*/
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
    //Variable for number of calories
    double numberOfCalories;
    //Variable for the fat grams
    double fatGrams;
    //Variable to calculate the calories from fat
    double caloriesFromFat;
    double percentageFromFat;

    cout << "Hi user, please provide the following information.\n";
    cout << "Total number of calories: ";
    cin >> numberOfCalories;
    cout << "Fat grams: ";
    cin >> fatGrams;

cout << fixed << showpoint << setprecision(2); 
if (fatGrams > 0 && numberOfCalories > 0 && fatGrams < numberOfCalories)
{
    caloriesFromFat = fatGrams * 9;
    percentageFromFat = caloriesFromFat / numberOfCalories * 100;
    cout << "Percentage of calories that come from fat: " << percentageFromFat << "%\n";

    if (percentageFromFat < 30)
    {
        cout << "The food is low in fat." << endl;
    }
    
}
else
    cout << "Either the calories or fat grams were incorrectly entered." << endl;
}