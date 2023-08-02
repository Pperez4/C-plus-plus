/*--------------------------------------------------------------------------------------
Days Out
Write a program that calculates the average number of days a company’s employees are absent.
 The program should have the following functions:

• A function called by main that asks the user for the number of employees in the company. 
This value should be returned as an int. (The function accepts no arguments.)

• A function called by main that accepts one argument: the number of employees in the company. 
The function should ask the user to enter the number of days each employee missed during the 
past year. The total of these days should be returned as an int.

• A function called by main that takes two arguments: the number of employees in the company
 and the total number of days absent for all employees during the year. The function should return, 
 as a double, the average number of days absent. (This function does not perform screen output 
 and does not ask the user for input.)

Input Validation: Do not accept a number less than 1 for the number of employees. Do not accept 
a negative number for the days any employee missed.
---------------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;


//function prototypes
int getNumEmployees();
int getNumberDaysMissed(int);
double averageNumberOfAbsent(int, int);



int main()
{
    int employees;
    int days;
    double average;
    employees = getNumEmployees();
    days = getNumberDaysMissed(employees);
    average = averageNumberOfAbsent(employees, days);
    
    cout << "---------------------------------------------\n";
    cout << "\t\tDays Out\n";
    cout << "---------------------------------------------\n";
    cout << "Number of employees: " << employees << endl;
    cout << "Number of days missed: " << days << endl;
    cout << "Average: " << average << endl;
    cout << "---------------------------------------------\n";


}

/*-----------------------------------------------------------------------
int getNumEmployees() Definition 
It asks the user for the number of employees in the company. 
This value is returned as an int. (The function accepts no arguments.)
-----------------------------------------------------------------------*/

int getNumEmployees()
{
    int numEmployees;

    cout << "Enter the number of employees in the company: ";
    //Input Validation: Do not accept a number less than 1 for the number of employees. Do not accept 
    //a negative number for the days any employee missed.
        while (!(cin >> numEmployees) || numEmployees <= 0)
        {
            cout << "The number of employees in the company\n"
                << "must be a numeric value greater than 0\n";
                cin.clear();
                cin.ignore(1000, '\n');
            cout << "Enter the number of employees in the company: ";
        }
    return numEmployees;
}

/*-----------------------------------------------------------------------
int getNumberDaysMissed(int, int)
A function called by main that accepts one argument: the number of employees
in the company. The function should ask the user to enter the number of days
each employee missed during the past year. The total of these days should 
be returned as an int.
-----------------------------------------------------------------------*/
int getNumberDaysMissed(int employees)
{
    int days;
    int totalDays = 0;
    for (int i = 1; i <= employees; i++)
    {
        cout << "Day's Missed by employee " << i << ": ";
        while (!(cin >> days) || days < 0)
        {
            cout << "The number of days must be a numeric positive value.\n";
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Day's Missed by employee " << i << ": ";
        }
        
        totalDays += days;

    }
    
    return totalDays;
}



/*----------------------------------------------------------------------- 
double averageNumberOfAbsent(int, int) Definition 
It is called by main that takes two arguments: the number of employees in 
the companyand the total number of days absent for all employees during
the year. The function returns, as a double, the average number of days
absent. (This function does not perform screen output and does not ask the
 user for input.)
-----------------------------------------------------------------------*/
double averageNumberOfAbsent(int totalEmployees, int totalDays)
{
    double average;
    average = static_cast<double>(totalDays) / static_cast<double>(totalEmployees);

    return average;
}


