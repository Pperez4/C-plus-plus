//-----------------------------------------------------------
// A movie theater only keeps a percentage of the revenue
// earned from tickets sales. Write a program that calculates
// the teather gross and net profit for a night. The 
// program should ask for the name of the movie, the number
// of adults and child tickets sold. 
// Price of adult tickets = $10.00
// Price of child tickets = $6.00
// NOTE: Assume theater keeps 20% of the gross profit
//-----------------------------------------------------------

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
    
    //Constant for the price of the tickets 
    const double adultTicketPrice = 10.00;
    const double childTicketPrice = 6.00;
    //Constant for the profit percentage 
    const double profitPercentage = 0.20;
    
    //Variables for user input
    string movieName;
    int adultTicketsSold;
    int childTicketsSold;
    double grossProfit;
    double netProfit;
    double amountPaidDistributor;

    //Prompting user for input 
    cout << "Hi user, please provide the following information." << endl;
    cout << "Movie Name: ";
    getline(cin, movieName);
    cout << "Adult Tickets Sold: ";
    cin >> adultTicketsSold;
    cout << "Child Tickets Sold: ";
    cin >> childTicketsSold;

    //Calculations 
    grossProfit = (adultTicketsSold * adultTicketPrice) + (childTicketsSold * childTicketPrice);
    netProfit = grossProfit * profitPercentage;
    amountPaidDistributor = grossProfit - netProfit;

    cout << "-----------------------------------------------------------" << endl;
    cout << fixed << showpoint << setprecision(2);
    //Displaying Report 
    cout << "Movie Name: " << movieName << endl;
    cout << "Adult Tickets Sold: " << adultTicketsSold << endl;
    cout << "Child Tickets Sold: " << childTicketsSold << endl;
    cout << "Gross Profit: $" << grossProfit << endl;
    cout << "Net Profit: $" << netProfit << endl;
    cout << "Amount Paid to Distributor: $" << amountPaidDistributor << endl;
    cout << "-----------------------------------------------------------" << endl;
}