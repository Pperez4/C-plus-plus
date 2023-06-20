/*--------------------------------------------------------------------------

 
You have a group of friends coming to visit for your high school reunion,
and you want to take them out to eat at a local restaurant. You aren’t sure 
if any of them have dietary restrictions, but your restaurant choices are as 
follows:

Joe’s Gourmet Burgers—Vegetarian: No, Vegan: No, Gluten-Free: No
Main Street Pizza Company—Vegetarian: Yes, Vegan: No, Gluten-Free: Yes
Corner Cafe—Vegetarian: Yes, Vegan:Yes, Gluten-Free: Yes
Mama’s Fine Italian—Vegetarian: Yes, Vegan: No, Gluten-Free: No
The Chef’s Kitchen—Vegetarian: Yes, Vegan: Yes, Gluten-Free: Yes

Write a program that asks whether any members of your party are vegetarian, 
vegan, or gluten-free, then display only the restaurants that you may take 
the group to.
-----------------------------------------------------------------------------*/



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
    //Variables to asks whether any members of your party are vegetarian, 
    //vegan, or gluten-free
    string responseVegetarian;
    string responseVegan;
    string responseGluten;

    //Prompting user
    cout << "----------------------------------\n";
    cout << "\tInstructions.\n";
    cout << "----------------------------------\n"
         << "Answer with either yes or no\n"
         << "for example if you want to answer 'yes'\n"
         << "simply type Yes and press [ENTER]\n";
    cout << "----------------------------------\n";
    cout << "Is anyone in the group vegetarian? ";
    getline(cin, responseVegetarian);
    cout << "----------------------------------\n";
    cout << "Is anyone in the group vegan? ";
    getline(cin,responseVegan);
    cout << "----------------------------------\n";
    cout << "Is anyone in the group Gluten Free? ";
    getline(cin,responseGluten);

if (responseVegetarian == "yes" || responseVegetarian == "no"
    && responseVegan == "yes" || responseVegan == "no"
    && responseGluten == "yes" || responseGluten == "no")
{
        //If the answer is yes for vegetarian,vegan and gluten Free
        if (responseVegetarian == "yes" && responseVegan == "yes" && responseGluten == "yes")
        {
            cout << "---------------------\n";
            cout << "\tOption(s)\n";
            cout << "---------------------\n";
            cout << "1.The Chef's Kitchen.\n";
            cout << "---------------------\n";
        }
        //If the answer is yes for vegatarian and vegan and no for gluten Free
        else if (responseVegetarian == "yes" && responseVegan == "yes" && responseGluten == "no"
                || responseVegetarian == "no" && responseVegan == "yes" && responseGluten == "no")
        {
            cout << "---------------------\n";
            cout << "\tOption(s)\n";
            cout << "---------------------\n";
            cout << "1.Corner Cafe.\n";
            cout << "2.The Chef's Kitchen.\n";
            cout << "---------------------\n";
        }
        //if the answer is no for vergetarian and vegan and yes for gluten Free
        //The same condition is true if the answer for vegetarian is yes
        else if (responseVegetarian == "no" && responseVegan == "no" && responseGluten == "yes"
        || responseVegetarian == "yes" && responseVegan == "no" && responseGluten == "yes")
        {
            cout << "------------------------------\n";
            cout << "\tOption(s)\n";
            cout << "------------------------------\n";
            cout << "1.Main Street Pizza Company.\n";
            cout << "2.The Chef's Kitchen.\n";
            cout << "------------------------------\n";
        }
        //if the answer for vegetarian is yes and vegan and gluten free is no
        else if (responseVegetarian == "yes" && responseVegan == "no" && responseGluten == "no")
        {
            cout << "------------------------------\n";
            cout << "\tOption(s)\n";
            cout << "------------------------------\n";
            cout << "1.Main Street Pizza Company.\n";
            cout << "2.Corner Cafe.\n";
            cout << "3.Mama's Fine Italian.\n";
            cout << "4.The Chef's Kitchen.\n";
            cout << "------------------------------\n";
        }
        //if the answer for vegetarian, vegan, and gluten free is NO
        else if (responseVegetarian == "no" && responseVegan == "no" && responseGluten == "no")
        {
            cout << "------------------------------\n";
            cout << "\tOption(s)\n";
            cout << "------------------------------\n";
            cout << "1.Joe’s Gourmet Burgers\n";
            cout << "2.Main Street Pizza Company.\n";
            cout << "3.Corner Cafe.\n";
            cout << "4.Mama's Fine Italian.\n";
            cout << "5.The Chef's Kitchen.\n";
            cout << "------------------------------\n";
        }

}
else 
    cout << "The program only accepts Yes and No as answer.\n";




}
