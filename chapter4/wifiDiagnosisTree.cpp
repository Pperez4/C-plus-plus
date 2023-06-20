/*-----------------------------------------------------------------
Use the flowchart to create a program that leads a person through 
the steps of fixing a bad WIFI connection.
-------------------------------------------------------------------*/
//------------------------------
// Include Directive(s)
//------------------------------
#include <iostream>
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
    string response;

    cout << "-------------------------------\n";
    cout << "Reboot the computer and try to\n"
         << "connect.\n";
    cout << "-------------------------------\n";

    cout << "Did that solve the problem? ";
    cin >> response;
    
    if (response == "yes" || response == "Yes")
    {
        cout << "Perfect now it is working.\n";
    }
    else
    {
        if (response == "no" || response == "No")
        {
            cout << "-------------------------------\n";
            cout << "Reboot the router and try to\n"
                 << "connect.\n";
            cout << "-------------------------------\n";
        }

        cout << "Did that solve the problem? ";
        cin >> response;
        if (response == "yes"|| response == "Yes")
        {
            cout << "Perfect now it is working.\n";
        }
        else
        {
            if (response == "no" || response == "No")
            {
               cout << "-------------------------------\n";
               cout << "Make sure the cables between the\n"
                    << "router and modem are plugged in\n"
                    << "firmly\n";
               cout << "-------------------------------\n";
            }

            cout << "Did that solve the problem? ";
            cin >> response;
            if (response == "yes"|| response == "Yes")
            {
            cout << "Perfect now it is working.\n";
            }
            else
            {
                if (response == "no"|| response == "No")
                {
                    cout << "-------------------------------\n";
                    cout << "Make sure the cables between the\n"
                         << "router and modem are plugged in\n"
                         << "firmly\n";
                    cout << "-------------------------------\n";
                }
                    cout << "Did that solve the problem? ";
                    cin >> response;

                    if (response == "yes" || response == "Yes")
                    {
                        cout << "Perfect now it is working.\n";
                    }
                    else
                    {
                        if (response == "no"|| response == "No")
                        {
                            cout << "-------------------------------\n";
                            cout << "Move the router to a new\n"
                                 << "location and try to connect.\n";
                            cout << "-------------------------------\n";
                        }
                        cout << "Did that solve the problem? ";
                        cin >> response;

                        if (response == "yes" || response == "Yes")
                        {
                             cout << "Perfect now it is working.\n";
                        }
                        else
                        {
                                if (response == "no"|| response == "No")
                                {
                                    cout << "-------------------------------\n";
                                    cout << "Get a new router\n";
                                    cout << "-------------------------------\n";
                                }
                                
                        }
                    }
                        
                        
                    }
                    
                
            }
            
        }
        
    }
    
    
