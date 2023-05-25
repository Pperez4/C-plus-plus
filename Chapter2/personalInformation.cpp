/*---------------------------------
Write a program that display the 
following in different lines.
Name
adress,city,state,ZIP
Phone Number
College Major
----------------------------------*/
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

    string name = "Paola Pérez";
    string adress = "1400 Twombly Rd, Dekalb IL 60115";
    long int phoneNumber = 8155016090;
    string collegeMajor = "Operation's and Information Management";

    cout << "\tPersonal Information" << endl;
    cout << "Name: " << name << endl;
    cout << "Adress: " << adress << endl;
    cout << "Phone Number: " << phoneNumber << endl;
    cout << "College Major: " << collegeMajor << endl;

}