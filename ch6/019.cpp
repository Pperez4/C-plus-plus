/*----------------------------------------------------
Using Files—Hospital Report
Modify Programming Challenge 15, Overloaded Hospital, 
to write the report it creates to a file.
----------------------------------------------------*/

#include <fstream>
#include <iostream>
using namespace std;


/*--------------------------------
function prototypes
---------------------------------*/
double patientCharges(int,double,double, double);
double patientCharges(double, double);

int main()
{
    ofstream outputFile; //Output file stream. You create an object of this type when you want to create a file and write data to it. 

    outputFile.open("hospital.txt");

    string answer;
    int numOfDays;
    double dayRate;
    double medicationChargues;
    double additionalServices;

    double patientTotal;

    cout << "Patient was an inpatient or an outpatient (IN/OUT): ";
    getline(cin, answer);

    if (answer == "In" || answer == "IN" || answer == "in")
    {
        cout << endl;
        cout << "Enter the number of days spent in the hospital: ";
            while (!(cin >> numOfDays) || numOfDays <= 0)
            {
                cout << "Error\n";
                cout << "It must be a numeric value greater than 0.\n";
                cin.clear();
                cin.ignore(1000,'\n');
            }
            
        cout << "Enter the daily rate: $";
            while (!(cin >> dayRate) || dayRate <= 0)
                {
                    cout << "Error\n";
                    cout << "It must be a numeric value greater than 0.\n";
                    cin.clear();
                    cin.ignore(1000,'\n');
                }
        cout << "Medication Chargues: $";
            while (!(cin >> medicationChargues) || medicationChargues <= 0)
                {
                    cout << "Error\n";
                    cout << "It must be a numeric value greater than 0.\n";
                    cin.clear();
                    cin.ignore(1000,'\n');
                }
        cout << "Additional Services charges (lab tests, etc.): $";
            while (!(cin >> additionalServices) || additionalServices <= 0)
            {
                cout << "Error\n";
                cout << "It must be a numeric value greater than 0.\n";
                cin.clear();
                cin.ignore(1000,'\n');
            }
        patientTotal = patientCharges(numOfDays, dayRate, medicationChargues, additionalServices);
        

    }
    else if (answer == "out" || answer == "Out" || answer == "OUT")
    {
        cout << endl;
          cout << "Medication Chargues: $";
            while (!(cin >> medicationChargues) || medicationChargues <= 0)
                {
                    cout << "Error\n";
                    cout << "It must be a numeric value greater than 0.\n";
                    cin.clear();
                    cin.ignore(1000,'\n');
                }
        cout << "Additional Services charges (lab tests, etc.): $";
            while (!(cin >> additionalServices) || additionalServices <= 0)
            {
                cout << "Error\n";
                cout << "It must be a numeric value greater than 0.\n";
                cin.clear();
                cin.ignore(1000,'\n');
            }
        patientTotal = patientCharges(medicationChargues,additionalServices);
    }
    
    outputFile << endl;
    outputFile << fixed << showpoint << setprecision(2);
    outputFile << "===========================================\n";
    outputFile << "Total Chargues: $" << patientTotal << endl;
    outputFile << "===========================================\n";
}
/*--------------------------------------------
patientChargues() overloaded function
accepts arguments for the inpatient data
return the total charges.
---------------------------------------------*/ 
double patientCharges(int days,double rate,double medicationCost, double additional)
{
    double total;
    total = (days * rate) + medicationCost + additional;
    return total;
}

/*--------------------------------------------
patientChargues() overloaded function
accepts arguments for the outpatient data
return the total charges.
---------------------------------------------*/
double patientCharges(double medicationCost, double additional)
{
    double total;
    total = medicationCost + additional;
    return total;
}