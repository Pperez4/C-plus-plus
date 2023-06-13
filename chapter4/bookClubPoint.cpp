/*-------------------------------------------------------------------------
Serendipity Booksellers has a book club that awards points to its customers 
based on the number of books purchased each month. The points are awarded 
as follows:
• If a customer purchases 0 books, he or she earns 0 points.
• If a customer purchases 1 book, he or she earns 5 points.
• If a customer purchases 2 books, he or she earns 15 points.
• If a customer purchases 3 books, he or she earns 30 points.
• If a customer purchases 4 or more books, he or she earns 60 points.
Write a program that asks the user to enter the number of books that he or 
she has purchased this month and then displays the number of points awarded.
---------------------------------------------------------------------------*/
//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
#include <cmath>
//------------------------------
// namespace statement
//------------------------------
using namespace std;

//------------------------------
// Main Function
//------------------------------
int main()
{
    //Variable to promt for number of books purchased in one month 
    int booksPurchased;
    //Variable to display the points awarded
    int points;

    cout << "How many books did you purchase this month? : ";
    cin >> booksPurchased;

    if (booksPurchased == 0)
    {
        points = 0;
        cout << "You earned: " << points << " points." << endl;
    }
    else if (booksPurchased == 1)
    {
        points = 5;
        cout << "You earned: " << points << " points." << endl;
    }
    else if (booksPurchased == 2)
    {
        points = 15;
        cout << "You earned: " << points << " points." << endl;
    }
    else if (booksPurchased == 3)
    {
        points = 30;
        cout << "You earned: " << points << " points." << endl;
    }
    else if (booksPurchased == 4 || booksPurchased > 4)
    {
        points = 60;
        cout << "You earned: " << points << " points." << endl;
    }
    

}

