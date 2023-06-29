/*-------------------------------------
A survey results show that 15 percent 
of 16,500 individuals consume one energy
drink per week. Approximately 58 percent
prefer a citrus flavored drink.

The program shoudl display
-Number of idividuals from the survey
who consume energy drinks
- The percent of those individuals 
who prefer the citrus flavor
--------------------------------------*/
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
    //Variables holding the provided information
    int surveyedIndividuals = 16500;
    double consumersPercentage = 0.15;
    double percentageCitrus = 0.58;
    //Variables for the calculation
    int actualNumberConsumer;
    int actualNumberCitrusFlavor;

    //Calculating the number of surveyed individuals who consume energy drinks
    actualNumberConsumer = surveyedIndividuals * consumersPercentage;
    //Calculating the number of individual who prefer critrus flavor
    actualNumberCitrusFlavor = actualNumberConsumer * percentageCitrus;

    //Displaying the information 
    cout << "The number of surveyed individual who consume energy drinks: " << actualNumberConsumer << endl;
    cout << "The number of individual who prefer citric flavor: "<< actualNumberCitrusFlavor << endl;
}