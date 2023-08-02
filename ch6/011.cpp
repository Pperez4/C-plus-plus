/*------------------------------------------------------------------------------
 Lowest Score Drop
Write a program that calculates the average of a group of test scores, where 
the lowest score in the group is dropped. It should use the following functions:
• void getScore() should ask the user for a test score, store it in a reference 
parameter variable, and validate it. This function should be called by main once 
for each of the five scores to be entered.
• void calcAverage() should calculate and display the average of the four highest 
scores. This function should be called just once by main and should be passed 
the five scores.
• int findLowest() should find and return the lowest of the five scores passed to it. 
It should be called by calcAverage, which uses the function to determine which 
of the five scores to drop.
Input Validation: Do not accept test scores lower than 0 or higher than 100.
-------------------------------------------------------------------------------*/
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
// Function prototypes 
//------------------------------



void getScore(int &); //Uses reference parameter 
int findLowest(int,int,int,int,int);
void calcAverage(int,int,int,int,int);


int main()
{

    int score1, score2, score3, score4, score5;
    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);
    calcAverage(score1,score2,score3,score4,score5);
}




/*-------------------------------------------------------
 void getScore() definition 
It asks the user for a test score, and stores it in a reference 
parameter variable, and validate it. This function is called
by main once or each of the five scores to be entered.
---------------------------------------------------------*/


void getScore(int& score)
{
    cout << endl;
    cout << "Enter a test score: "; 
    while (!(cin>>score) || score <= 0 || score > 100 )
    {
        cout << endl;
        cout << "The test score must be a numeric value and greater than 0 and less than or qual to 100.\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Enter a test score: "; 
    }

}
/*--------------------------------------------------
int findLowest() definition 

It returns the lowest of the five scores passed to it. 
It is called by calcAverage, which uses the function 
to determine which of the five scores to drop.
*--------------------------------------------------*/
int findLowest(int t1, int t2, int t3, int t4, int t5)
{
    int lowest;
    lowest = t1; // Lowest must have an initial value 

    if (t2 < t1)
        lowest = t2;

    if (t3 < lowest)
        lowest = t3;

    if (t4 < lowest)
        lowest = t4;

    if (t5 < lowest)
        lowest = t5;
    
    return lowest;
    
}

/*--------------------------------------------------
void calcAverage() Definition 
It calculates and display's the average of the four 
highest scores. 
This function is called once by main and is passed 
five scores.
--------------------------------------------------*/
void calcAverage(int t1, int t2, int t3, int t4, int t5)
{
    int low;
    low = findLowest(t1,t2,t3,t4,t5);
    int total = t1 + t2 + t3 + t4 + t5 - low;
    double average = total / 4.0;
    cout << "---------------------------------\n";
    cout << "Lowest Score: " << low << endl;
    cout << "Average: " << average << endl;
    cout << "---------------------------------\n";
}