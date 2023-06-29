/*-------------------------------------------------------------

The Fast Freight Shipping Company charges the following 
rates:

Weight of Package (in Kilograms)      Rate per 500 Miles Shipped
2 kg or less                          $1.10
Over 2 kg but not more than 6 kg      $2.20
Over 6 kg but not more than 10 kg     $3.70
Over 10 kg but not more than 20 kg    $4.80


Write a program that asks for the weight of the package and the
distance it is to be shipped, and then displays the charges.
Input Validation: Do not accept values of 0 or less for the weight
of the package. Do not accept weights of more than 20 kg .
Do not accept distances of less than 10 miles or more than 
3,000 miles. These are the company’s minimum and maximum shipping 
distances.
---------------------------------------------------------------*/
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
    //Charge rate
    double chargeRate;
    //Variables to prompt user
    double packageWeight;
    double distance;

//Prompting for weight and distance
    cout << " The company does not ship packages within 10 miles of distance and\n"
         << "the maximum miles of distance for a package are 3000." << endl
         << "the maximum wieght of a package is 20 kg.\n";
    cout << "Package Weight: ";
    cin >> packageWeight;
    cout << "Distance it is to be shipped: ";
    cin >> distance;


//Validating input 
cout << fixed << showpoint << setprecision(2);
    
    if (packageWeight < 1 || packageWeight > 20)
    {
        cout << " Invalid weight value." << endl;
    }
    else if (distance < 10 || distance > 3000)
    {
        cout << "Invalid Value for distance." << endl;
    }
    
    //Determining charges 
    else if (packageWeight > 0 && packageWeight <= 20 && distance > 10 && distance < 3000)
    {   

            if (packageWeight <= 2)
            {
            chargeRate = 1.10;
            chargeRate = 1.10 / 500.0 * distance;
            cout << "Charge for a " << packageWeight << " kg package.\n"
                 << "Traveling " << distance << " miles.\n"
                 << "$" << chargeRate << endl;
            }
            else if (packageWeight > 2 && packageWeight <= 6)
            {
                chargeRate = 2.20;
                chargeRate = 2.20 / 500.0 * distance;
                cout << "Charge for a " << packageWeight << " kg package.\n"
                    << "Traveling " << distance << " miles.\n"
                    << "$" << chargeRate << endl;
            }
            else if (packageWeight > 6 && packageWeight <= 10)
            {
                chargeRate = 3.70;
                chargeRate = 3.70 / 500.0 * distance;
                cout << "Charge for a " << packageWeight << " kg package.\n"
                    << "Traveling " << distance << " miles.\n"
                    << "$" << chargeRate << endl;
            }
            else if (packageWeight > 10 && packageWeight <= 20)
            {
                chargeRate = 4.80;
                chargeRate = 4.80 / 500.0 * distance;
                cout << "Charge for a " << packageWeight << " kg package.\n"
                    << "Traveling " << distance << " miles.\n"
                    << "$" << chargeRate << endl;
            }
    }   
}
