/*-----------------------------------------------------------------------------------------

A particular talent competition has five judges, each of whom awards a score between 0 and 10 
to each performer. Fractional scores, such as 8.3, are allowed. A performer’s final score is 
determined by dropping the highest and lowest score received, then averaging the three remaining 
scores. Write a program that uses this method to calculate a contestant’s score. 
It should include the following functions:

• void getJudgeData() should ask the user for a judge’s score, store it in a reference
 parameter variable, and validate it. This function should be called by main once for 
 each of the five judges.

• void calcScore() should calculate and display the average of the three scores that 
remain after dropping the highest and lowest scores the performer received. 
This function should be called just once by main and should be passed the five scores.

The last two functions, described below, should be called by calcScore, which uses t
he returned information to determine which of the scores to drop.
• int findLowest() should find and return the lowest of the five scores passed to it.
• int findHighest() should find and return the highest of the five scores passed to it.

Input Validation: Do not accept judge scores lower than 0 or higher than 10.
------------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

//---------------------
// Function prototype
//---------------------
void getJudgeData(double &); //Uses a reference parameter variable
void calcScore(double, double, double,double,double);
int findLowest(double, double, double,double,double);
int findHighest(double, double, double,double,double);


int main()
{
    //Variables for scores 
    double S1, S2, S3, S4, S5;
    getJudgeData(S1);
    getJudgeData(S2);
    getJudgeData(S3);
    getJudgeData(S4);
    getJudgeData(S5);

    calcScore(S1,S2,S3,S4,S5);

}

/*----------------------------------------------------------------
void getJudgeData() definition asks the user for a judge’s score, 
stores it in a reference arameter variable, and validates it. 
This function is called by main once for each of the five judges.
----------------------------------------------------------------*/
void getJudgeData(double &score)
{
    cout << endl;
    cout << "Enter score: ";
    //Input Validation: Do not accept judge scores lower than 0 or higher than 10.
    while (!(cin >> score) || score <= 0 || score > 10)
    {
        cout << "ERROR\n";
        cout << "The score must be a numeric value and scores lower than 0 or higher than 10\n"
             << " are not accepted.\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Enter score: ";
    }
    
}

/*----------------------------------------------------------------
• int findLowest() definition 
It finds and return the lowest of the five scores passed to it. 
----------------------------------------------------------------*/

int findLowest(double S1, double S2, double S3,double S4,double S5)
{

    int lowest;

    lowest = S1;

    if (S2 < S1)
        lowest = S2;

    if (S3 < lowest)
        lowest = S3;

    if (S4 < lowest)
        lowest = S4;
    
    if (S5 < lowest)
        lowest = S5;

return lowest;
}


/*----------------------------------------------------------------
• int findHighest()  definition 
It find and return the highest of the five scores passed to it.
----------------------------------------------------------------*/
int findHighest(double S1, double S2, double S3,double S4,double S5)
{
    int highest;
    highest = S1;
    
    if (S2 > S1)
        highest = S2;

    if (S2 > highest)
        highest = S2;

    if (S2 > highest)
        highest = S2;

    if (S2 > highest)
        highest = S2;

    if (S2 > highest)
        highest = S2;
    
    return highest; 
}

/*----------------------------------------------------------------
void calcScore() definition 
It calculatse and display the average of the three scores that 
remain after dropping the highest and lowest scores the performer 
received. 
This function is called once by main and passes the five scores.
----------------------------------------------------------------*/
void calcScore(double S1, double S2, double S3,double S4,double S5)
{
    double average;
    double total;
    int low;
    int high;
    low = findLowest(S1,S2,S3,S4,S5);
    high = findHighest(S1,S2,S3,S4,S5);

    total = S1 + S2 + S3 + S4 + S5;
    total = total - low - high;
    average = total / 3.0;

    cout << endl;
    cout << "----------------------------------\n";
    cout << "Highest Score: " << high << endl;
    cout << "Lowest Score: " << low << endl;
    cout << "Average: " << average << endl;
    cout << "----------------------------------\n";


}