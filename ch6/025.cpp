/*-----------------------------------------------------------------------------------------------
Group Project -  Travel Expenses - Write a program that calculates and displays the total travel 
expenses of a businessperson on a trip. 
------------------------------------------------------------------------------------------------*/
//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
#include <iomanip>
//------------------------------
// namespace statement
//------------------------------
using namespace std;


//------------------------
// Global variables 
//------------------------

    //Constants for the allowed fees
double milesDrivenExpense = 0.27;
double allowedParkingFee = 6.0;
double allowedTaxiFee = 10.0;
double allowedHotelExpense = 90.0;
double breakfastFeeAllowed = 9.0;
double lunchFeeAllowed = 12.0;
double dinnerFeeAllowed = 16.0;

//------------------------------
// Function prototypes 
//------------------------------
void getNumberOfDays(int&);
double validateInput(double, int);
double validateTimes(double);
void getDepartureAndArrivalTime(double&, double&);
char validateResponse(char);
void getFlightTicket(double &);
void getCarRentalExpenses(double&, int);
void parkingFees(double&, double&, int);
void getTaxiExpenses(double&, double&, int);
void getHotelFee(double&, double&, int);
void getConferenceFee(double&);
void getMealsExpense(double&, double&, double, double);


int main()
{
    double businesspersonExpense = 0;
    double companyExpense = 0;
    int days;
    double departure, arrival;
    getNumberOfDays(days);
    getDepartureAndArrivalTime(departure, arrival);
    getFlightTicket(companyExpense);
    getCarRentalExpenses(companyExpense,days);
    parkingFees(companyExpense, businesspersonExpense, days);
    getTaxiExpenses(companyExpense, businesspersonExpense,days);
    getHotelFee(companyExpense, businesspersonExpense, days);
    getConferenceFee(companyExpense);
    getMealsExpense(companyExpense, businesspersonExpense,departure, arrival);


    cout << fixed << showpoint << setprecision(2);
    cout << "--------------------------------------\n";
    cout << "\tTrip Report.\n";
    cout << "--------------------------------------\n";
    cout << "Company Expense: $" << companyExpense << endl;
    cout << "Business Person Expense: $" << businesspersonExpense << endl;
    cout << "--------------------------------------\n";



}
//------------------------------------------------------------------
// The function receives two parameters as arguments, it validates
// the input by ensuring is a numeric value and greater than a certain
// range. If the value is valid then it is returned.
//------------------------------------------------------------------
double validateInput(double value, int range)
{
    while (!(cin >> value) || value <= range)
    {
        cout << "\t⚠️ERROR\n";
        cout << "IT MUST BE A NUMERIC VALUE GREATER THAN " << range << " .";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "TRY AGAIN: ";
    }
    
    return value;
}

//------------------------------------------------------------------------
// validateTimes() definition
// The function makes sure the time entered is valid and returns the value
// if valid. 
//------------------------------------------------------------------------
double validateTimes(double time)
{
    while (!(cin >> time) || (time > 23.59) || (time - static_cast<int>(time) > .59) || (time <= 00.00))
    {
        cout << "\t⚠️ERROR\n";
        cout << "IT MUST BE A NUMERIC VALUE IN THE 24 HOUR FORMAT\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "TRY AGAIN: ";
    }
    
    return time;
}




//--------------------------------------------------------------------------
// getNumberOfDays() Definition 
// This function receives as a reference parameter the number of days then 
// the argument is passed when it is called in main. This function also calls 
// validateInput. 
//---------------------------------------------------------------------------

void getNumberOfDays(int& totalDays)
{
    cout << endl;
    cout << "ENTER THE NUMBER OF DAYS SPENT IN THE BUSINESS TRIP: ";
    totalDays = validateInput(totalDays, 0);
}

//---------------------------------------------------------------------------
//getDepartureAndArrivalTime() definition 
// This function receives two reference parameters as arguments. Then a 
// function is called to validate both inputs.
//---------------------------------------------------------------------------
void getDepartureAndArrivalTime(double& departureTime, double& arrivalTime)
{
    cout << endl;
    cout << "THE TIMES MUST BE NUMERIC VALUES ENTERED IN 24 HOURS FORMAT AND (HH.MM)\n"
         << "EXAMPLE 1: IF (DEPARTURE/ARRIVAL) TIME WAS 6:30 AM SIMPLY ENTER: 6.30\n"
         << "EXAMPLE 2: IF (DEPARTURE/ARRIVAL) TIME WAS 9:50 PM SIMPLY ENTER: 21.50\n";
    cout << endl;
    cout << "ENTER THE DEPARTURE TIME: ";
    departureTime = validateTimes(departureTime);

    cout << endl;
    cout << "ENTER THE ARRIVAL TIME: ";
    arrivalTime = validateTimes(arrivalTime);

}

char validateResponse(char response)
{

    while (!(cin >> response) || !(response == 'Y' || response == 'y' || response == 'N' || response == 'n'))
    {
        cout << "ERROR\n"
             << "You must enter Y for Yes and N indicating no.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "TRY AGAIN: ";
    }
    
    return response;
}


void getFlightTicket(double& companyExpense)
{
    double amountPaid;
    cout << " Amount of round-trip airfare: $";
    amountPaid = validateInput(amountPaid, 0);
    companyExpense += amountPaid;
}

void getCarRentalExpenses(double& companyExpense, int days )
{
    char userChoice;
    double dailyRate;
    int miles;
    int totalMiles;
    cout << "Did you rented a Car (Y/N): ";
    userChoice = validateResponse(userChoice);

    if (userChoice == 'Y' || userChoice == 'y')
    {
        cout << "Enter the daily rate chargue for the car: $";
        dailyRate = validateInput(dailyRate, 0);
        dailyRate *= days;
        companyExpense += dailyRate;

        for (int i = 1; i <= days; i++)
        {
            cout << "Enter the number of miles driven day " << i << " : ";
            miles = validateInput(miles, 0);
            totalMiles += miles;
        }

        totalMiles *= milesDrivenExpense;
        companyExpense += totalMiles;
        
    }
    
}

void parkingFees(double& companyExpense, double& personExpense, int days)
{
    char userChoice;
    double amountPaid;
    cout << "Did you used any private parking? (Y/N): ";
    userChoice = validateResponse(userChoice);

    if (userChoice == 'Y' || userChoice == 'y')
    {
        for (int i = 1; i <= days; i++)
        {
            cout << "Amount paid day " << i << " : $";
            amountPaid = validateInput(amountPaid, 0);
            if (amountPaid > allowedParkingFee)
                personExpense += amountPaid - allowedParkingFee;
            else
                companyExpense += amountPaid;
            
            
        }
        
    }
    
}

void getTaxiExpenses(double& companyExpense, double& personExpense, int days)
{
    char userChoice;
    double amountPaid;
    cout << "Did you used any Taxi? (Y/N): ";
    userChoice = validateResponse(userChoice);

    if (userChoice == 'Y' || userChoice == 'y')
    {

        for (int i = 1; i <= days; i++)
        {
            cout << "Amount paid day " << i << " : $";
            amountPaid = validateInput(amountPaid, 0);

            if (amountPaid > allowedTaxiFee)
                personExpense += amountPaid - allowedTaxiFee;
            else
                companyExpense += amountPaid;  
        }
        
    }
    
}

void getHotelFee(double& companyExpense, double& personExpense, int days)
{

    double amountPaid;
    for (int i = 1; i <= (days - 1); i++)
    {
        cout << "Enter the amount paid night " << i << " : $";
        amountPaid = validateInput(amountPaid, 0);

        if (amountPaid > allowedHotelExpense)
            personExpense += amountPaid - allowedHotelExpense;
        else
            companyExpense += amountPaid; 
    }
    
}

void getConferenceFee(double& companyExpense)
{
    char userChoice;
    double amountPaid;

    cout << "Did you attended any (CONFERENCE/SEMINAR) (Y/N): ";
    userChoice = validateResponse(userChoice);

    if (userChoice == 'Y' || userChoice == 'y')
    {
        cout << "Enter amount paid for (CONFERENCE/SEMINAR): $";
        amountPaid = validateInput(amountPaid, 0);
        companyExpense += amountPaid;
    }
    
}

void getMealsExpense(double& companyExpense, double& personExpense, double departure, double arrival)
{
     
    char userChoice;
    double amountPaid;

     /*-------------------------------------------------------------------
        Breakfast is allowed if departure is before 7 a.m.
        Lunch is allowed if the time of departure is before 12 noon.
        Dinner is allowed on the first day if the time of departure is before
        6 p.m. 
     ---------------------------------------------------------------------*/
    cout << "The day of departure did you had breakfast? (Y/N): ";
    userChoice = validateResponse(userChoice);

    if (userChoice == 'Y' || userChoice == 'y')
    {
        if (departure < 7.00)
        {
            cout << "Amount paid for breakfast: $";
            amountPaid = validateInput(amountPaid, 0);
            if (amountPaid > breakfastFeeAllowed)
                personExpense += amountPaid - breakfastFeeAllowed;
            else 
                companyExpense += amountPaid; 
        }
        else
        {
            cout << "Amount paid for breakfast: $";
            amountPaid = validateInput(amountPaid, 0);
            personExpense += amountPaid; 
        }
    
    }

    cout << endl;
    cout << "The day of departure did you had lunch? (Y/N): ";
    userChoice = validateResponse(userChoice);
    if (userChoice == 'Y' || userChoice == 'y')
    {
        if (departure >= 7.0 && departure < 12.0)
        {
            cout << "Amount paid for lunch: $";
                amountPaid = validateInput(amountPaid, 0);
            if (amountPaid > lunchFeeAllowed)
                personExpense += amountPaid - lunchFeeAllowed;
            else 
                companyExpense += amountPaid; 
        }
        else
        {
            cout << "Amount paid for lunch: $";
            amountPaid = validateInput(amountPaid, 0);
            personExpense += amountPaid; 
        }
    }

    cout << endl;
    cout << "The day of departure did you had dinner? (Y/N): ";
    userChoice = validateResponse(userChoice);
    if (userChoice == 'Y' || userChoice == 'y')
    {
        if (departure > 18.00)
        {
            cout << "Amount paid for dinner: $";
                amountPaid = validateInput(amountPaid, 0);
            if (amountPaid > dinnerFeeAllowed)
                personExpense += amountPaid - dinnerFeeAllowed;
            else 
                companyExpense += amountPaid; 
        }
        else
        {
            cout << "Amount paid for dinner: $";
            amountPaid = validateInput(amountPaid, 0);
            personExpense += amountPaid;
        }
 
    }
    /*--------------------------------------------------------------------
        Breakfast is allowed if the time of arrival is after 8 a.m. 
        Lunch is allowed if the time of arrival is after 1 p.m.
        Dinner is allowed on the last day if the time of arrival is after 7 p.m. 
    ---------------------------------------------------------------------*/

    cout << "The day of arrival did you had breakfast? (Y/N): ";
    userChoice = validateResponse(userChoice);

    if (userChoice == 'Y' || userChoice == 'y')
    {
        if (arrival < 8.00)
        {
            cout << "Amount paid for breakfast: $";
                amountPaid = validateInput(amountPaid, 0);
            if (amountPaid > breakfastFeeAllowed)
                personExpense += amountPaid - breakfastFeeAllowed;
            else 
                companyExpense += amountPaid; 
        }
        else
        {
            cout << "Amount paid for breakfast: $";
            amountPaid = validateInput(amountPaid, 0);
            personExpense += amountPaid;   
        }
           
    }

    cout << endl;
    cout << "The day of arrival did you had lunch? (Y/N): ";
    userChoice = validateResponse(userChoice);
    if (userChoice == 'Y' || userChoice == 'y')
    {
        if (arrival >= 8.00 && arrival < 13.00)
        {
            cout << "Amount paid for lunch: $";
                amountPaid = validateInput(amountPaid, 0);
            if (amountPaid > lunchFeeAllowed)
                personExpense += amountPaid - lunchFeeAllowed;
            else 
                companyExpense += amountPaid; 
        }
        else
        {
            cout << "Amount paid for lunch: $";
            amountPaid = validateInput(amountPaid, 0);
            personExpense += amountPaid; 
        }
            
    }

    cout << endl;
    cout << "The day of arrival did you had dinner? (Y/N): ";
    userChoice = validateResponse(userChoice);
    if (userChoice == 'Y' || userChoice == 'y')
    {
        if (departure > 19.00)
        {
            cout << "Amount paid for dinner: $";
            amountPaid = validateInput(amountPaid, 0);
            if (amountPaid > dinnerFeeAllowed)
                personExpense += amountPaid - dinnerFeeAllowed;
            else 
                companyExpense += amountPaid; 
        }
        else
        {
            cout << "Amount paid for dinner: $";
            amountPaid = validateInput(amountPaid, 0);
            personExpense += amountPaid; 
        }
            
    }


}