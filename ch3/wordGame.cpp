/*--------------------------------------------------------------
Write a program that plays a word game with the user. The 
program should ask the user to enter the following:

• His or her name
• His or her age
• The name of a city
• The name of a college
• A profession
• A type of animal
• A pet’s name

After the user has entered these items, the program should display 
the following story, inserting the user’s input into the appropriate
locations: There once was a person named NAME who lived in CITY. 
At the age of AGE, NAME went to college at COLLEGE. NAME graduated 
and went to work as a PROFESSION. Then, NAME adopted
a(n) ANIMAL named PETNAME. They both lived happily ever after!
----------------------------------------------------------------*/

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
   string name;
   int age;
   string cityName;
   string collegeName;
   string profession;
   string typeAnimal;
   string petName;


   cout << "Provide the following information. " << endl;
   cout << "Name: ";
   getline(cin, name);
   cout << "City Name: ";
   getline(cin, cityName);
   cout << "College Name: ";
   getline(cin, collegeName);
   cout << "Profession: ";
   getline(cin, profession);
   cout << "Animal Type: ";
   getline(cin, typeAnimal);
   cout << "Pet Name: ";
   getline(cin, petName);
   cout << "Age: ";
   cin >> age;
   
   

   cout << "There once was a person named " << name << " who lived in " << cityName << ". " << endl;
   cout << "At the age of " << age << "," << name << " went to college at " << collegeName << ". " << endl;
   cout << name << " graduated and went to work as a " << profession << ". " << endl;
   cout << "Then " << name << " adopted a " << typeAnimal << " named " << petName << ". ";
   cout << "They both lived happily ever after!";
 
}