/*--------------------------------------------------------------
Student Line Up
A teacher has asked all her students to line up single file 
according to their first name. For example, in one class Amy 
will be at the front of the line and Yolanda will be at the end. 
Write a program that prompts the user to enter the number of 
students in the class, then loops to read that many names. 
Once all the names have been read it reports which student
would be at the front of the line and which one would be 
at the end of the line. You may assume that no two students 
have the same name.
Input Validation: Do not accept a number less than 1 or greater
than 25 for the number of students.
-----------------------------------------------------------------*/

//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
#include <iomanip>
#include <string>
//------------------------------
// namespace statement
//------------------------------
using namespace std;

//------------------------------
// Main Function
//------------------------------
int main() 
{
    string last;
    string first;

    //To promt user 
    int numberOfStudents;
    string studentName;

    cout << "Enter the number of students: ";

//--------------------------------------------------
// Do not accept a number less than 1 or greater
// than 25 for the number of students.
// The loop will verify that the number entered is an
// integer and that is between the range of 1 - 25.
//--------------------------------------------------
    while (!(cin >> numberOfStudents) 
    || numberOfStudents < 1 || numberOfStudents > 25)
    {
        cout << endl;
        cout << "The number of students must in the range of 1-25\n";
        cout << "Please enter a valid value: ";
        cin.clear();  //Reset error flags 
        cin.ignore(1000, '\n'); // ignore next 1000 characters
    }


  cout << "Enter student 1 first name (with the first letter in uppercase format): ";
  cin >> studentName;

// the string in studentName will be assigned to last and first
  last = first = studentName;

for (int i = 2; i <= numberOfStudents; i++)
{
    cout << "Enter student " << i << " first name (with the first letter in uppercase format): ";
    cin >> studentName;


    if (studentName > last)
        last = studentName;
    if (studentName < first)
        first = studentName;

}

cout << endl;
cout << "---------------------------------------\n";
cout << "Front of the line: " << first << endl;
cout << "End of the line: " << last << endl;
cout << "---------------------------------------\n"; 
cout << endl;



return 0;

}