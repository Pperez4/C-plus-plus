/*-------------------------------------------------
The Yukon Widget company manufactures Widgets that
weigh 12.5 pounds each. Write a program that calulates
the number of widgets on a pallet accoridng to the
total weight of the paller. The program shoudl ask
the user how much the pallet weights by itself and
with the widgets stacked on. Then the number of
widgets in the pallet are calculated. 
---------------------------------------------------*/

//------------------------
// Include Directives
//------------------------
#include <iostream>
//------------------------
// namespace statement
//------------------------
using namespace std;

//------------------------
// main function 
//------------------------
int main()
{
    const double standardWidgetWeight = 12.5;

    //To prompt user
    double palletAloneWeight;
    double palletWithWidgets;

    //To calculate 
    int numberOfWidgets;


    cout << "Please provide the following information: " << endl;
    cout << "What is the weight of the pallet alone: ";
    cin >> palletAloneWeight;
    cout << "What is the weight of the pallet with the widgets stacked: ";
    cin >> palletWithWidgets;

    //Calculation 
    numberOfWidgets = (palletWithWidgets - palletAloneWeight) / standardWidgetWeight;

    cout << "---------------------------------" << endl;
    cout << "Number of Widgets: " << numberOfWidgets << endl;
    cout << "---------------------------------" << endl;




}