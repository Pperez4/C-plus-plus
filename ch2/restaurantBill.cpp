/*------------------------------------
The program computes the tax and the tip
on a retaurant bill. The meal chargue is
$88.67. The tax shoul be 6.75 percent
of the meal cost. The tip shoudl be 20
percent of the total after adding the tax
Display the information on the screen
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
    //Meal Cost 
    double mealCost = 88.67;
    //Tax percentage shoul be 6.75
    double tax = 0.0675;
    //Tip percentage shoudl be 20
    double tip = 0.20;
    //Variables for calculation
    double mealCostAndTax;
    double total;

    //Calculating the tax amount and adding it to the meal cost in order to calculate tip
    mealCostAndTax = mealCost * tax + mealCost;
    total = mealCostAndTax * tip + mealCostAndTax;

    cout << "\tRESTAURANT BILL" << endl;
    cout << "Meal Cost: $" << mealCost << endl;
    cout << "Tax Amount: $" << mealCost * tax << endl;
    cout << "Tip Amount: $" << mealCostAndTax * tip << endl;
    cout << "Total: $" << total << endl;




}