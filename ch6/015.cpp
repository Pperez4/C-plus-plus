/*----------------------------------------------------------------------
 Overloaded Hospital
Write a program that computes and displays the charges for a patient’s 
hospital stay. First, the program should ask if the patient was admitted
as an inpatient or an outpatient. If the patient was an inpatient, 
the following data should be entered:

• The number of days spent in the hospital
• The daily rate
• Hospital medication charges
• Charges for hospital services (lab tests, etc.)
The program should ask for the following data if the patient was an out-patient:
• Charges for hospital services (lab tests, etc.)
• Hospital medication charges
The program should use two overloaded functions to calculate the total charges.
 One of the functions should accept arguments for the inpatient data, 
 while the other function accepts arguments for outpatient information. 
 Both functions should return the total charges.
Input Validation: Do not accept negative numbers for any data.
------------------------------------------------------------------------*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*--------------------------------
function prototypes
---------------------------------*/
double patientCharges(int,double,double, double);
double patientCharges(double, double);

int main()
{
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
    
    cout << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "===========================================\n";
    cout << "Total Chargues: $" << patientTotal << endl;
    cout << "===========================================\n";
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