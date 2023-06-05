/*---------------------------------------------------------
Modify the program Pizza Pi it reports the number of 
pizzas you need to buy for a party if each person attending 
is expected to eat an average of four slices. 
The program should ask the user for the number of people who 
will be at the party and for the diameter of the pizzas to be ordered. 
 It should then calculate and display the number of 
 pizzas to purchase.
----------------------------------------------------------*/
//------------------------
// Include Directives
//------------------------
#include <iostream>
#include <iomanip>
#include <cmath>
//------------------------
// namespace statement
//------------------------
using namespace std;

//------------------------
// main function 
//------------------------
int main()
{
        //Each slice should have an area of 14.125 inches
    const double eachSliceArea = 14.125;
    //Decimal Constant for PI
    const double  PI = 3.14159;

    //Variable(s) to promt user for input 
    double pizzaDiameter;
    double peopleAtParty;

    //For calculation
    double pizzaRatio;
    double pizzaArea;
    double slicePerPizza;
    double pizzasToPurchase;
    //Prompting user
    cout << "Provide the following information." << endl;
    cout << "Pizza Diameter: ";
    cin >> pizzaDiameter;
    cout << "Number of people who will be at the party: ";
    cin >> peopleAtParty;

    //Calculating Ratio
    pizzaRatio = pizzaDiameter / 2;
    //Calculating pizza area 
    pizzaArea = PI * pow(pizzaRatio, 2);
    //Slice per pizza
    slicePerPizza = pizzaArea / eachSliceArea;
    //Calculating the number of pizzas
    pizzasToPurchase = slicePerPizza / 4 * peopleAtParty;

    cout << fixed << showpoint << setprecision(1);
    cout << "--------------------------------" << endl;
    cout << "Number of slice's: " << slicePerPizza << endl;
    cout << "You need: " << pizzasToPurchase << " pizzas." << endl;
    cout << "--------------------------------" << endl;
    
}

