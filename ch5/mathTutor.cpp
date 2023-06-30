/*-------------------------------------------------------------------------------------
Math Tutor
Modify the program again so it displays a menu allowing the user to select an addition,
subtraction, multiplication, or division problem. The final selection on the menu should 
let the user quit the program. After the user has finished the math problem, the program 
should display the menu again.
This process is repeated until the user chooses to quit the program.
Input Validation: If the user selects an item not on the menu, display an error message 
and display the menu again.
---------------------------------------------------------------------------------------*/

//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
//------------------------------
// namespace statement
//------------------------------
using namespace std;

//------------------------------
// Main Function
//------------------------------
int main() 
{

    //To get a different series of random numbers each time the program is run
    srand(time(0));

    //Constants for minimum and maximum value 
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 1000;

    //Variable to get two random numbers 
    int x;
    int y;
    //To get random values that are within a specified range that starts at a value other than 0 or 1:  
    //num = minimum_value + (rand() % (maximum_value - minimum_value + 1));`
    x = MIN_VALUE + (rand() % (MAX_VALUE - MIN_VALUE + 1));
    y = MIN_VALUE + (rand() % (MAX_VALUE - MIN_VALUE + 1));

    //To prompt user
    int choice;
    int answer;


    //Variables to implement a menu
    const int addition = 1,
              subtraction = 2,
              multiplication = 3,
              division = 4,
              quit = 5;
    cout << fixed << showpoint << setprecision(2);
    do
    {
        //Display Menu 
        cout << "-----------------------------\n";
        cout << "\tMath Tutor Menu\n";
        cout << "-----------------------------\n"
             << "1. Addition Problem\n"
             << "2. Substraction Problem\n"
             << "3. Multiplication Problem\n"
             << "4. Division Problem\n"
             << "5. quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

    //To validate user input
        while (choice < 1 || choice > 5)
        {
            cout << "Invalid value\n";
            cout << "Enter a choice from the menu: \n";
            cin >> choice;
        }
        
        if(choice != quit)
        {
            switch (choice)
            { 
                case addition:
                    int sum;
                    sum = x + y;
                    cout << "Solve the following addition problem.\n";
                    cout << "-----------------------------\n";
                    cout << x << " + " << y << " = " << "?\n";
                    cout << "-----------------------------\n";
                    cout << "When you are ready press [ENTER].\n";
                    cin.get();
                    cout << endl;
                    cout << "Enter your answer: ";
                    cin >> answer;
                    if (answer == sum)
                        cout << "Your answer is correct\n";
                
                    else if (answer != sum)
                    {
                        cout << "Your answer is incorrect.\n";
                        cout << x << " + " << y << " = " << x+y << "\n";
                    }
                    break;
                
                case subtraction:
                    int sub;
                    sub = x - y;
                    cout << "Solve the following substraction problem.\n";
                    cout << "-----------------------------\n";
                    cout << x << " - " << y << " = " << "?\n";
                    cout << "-----------------------------\n";
                    cout << "When you are ready to check you answe press [ENTER].\n";
                    cin.get();
                    cout << "Enter your answer: ";
                    cin >> answer;
                    if (answer == sub)
                        cout << "Your answer is correct.\n";  
                    else if (answer != sub)
                    {
                        cout << "Your answer is incorrect.\n";
                        cout << x << " - " << y << " = " << x-y << "\n";
                    }
                    break;
                
                case multiplication:
                

                    int mult;
                    mult = x * y;
                    cout << "Solve the following multiplication problem.\n";
                    cout << "-----------------------------\n";
                    cout << x << " * " << y << " = " << "?\n";
                    cout << "-----------------------------\n";
                    cout << "When you are ready to check you answe press [ENTER].\n";
                    cin.get();
                    cout << "Enter your answer: ";
                    cin >> answer;
                    if (answer == mult)
                        cout << "Your answer is correct.\n";
                    else if(answer != mult)
                    {
                        cout << "Your answer is incorrect.\n";
                        cout << x << " * " << y << " = " << x*y << "\n";
                    }
                    break;

                case division:
                    int div;
                    div = x / y;
                    cout << "Solve the following division problem.\n";
                    cout << "-----------------------------\n";
                    cout << x << " / " << y << " = " << "?\n";
                    cout << "-----------------------------\n";
                    cout << "When you are ready to check you answe press [ENTER].\n";
                    cin.get();
                    cout << "Enter your answer: ";
                    cin >> answer;
                    if (answer== div)
                        cout << "Your answer is correct.\n";
                    else if(answer != div)
                    {
                        cout << "Your answer is incorrect.\n";
                        cout << x << " / " << y << " = " << x/y << "\n";
                    }
                break;

            default:
                break;
        }
     }   
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } while (choice != quit);
    

}