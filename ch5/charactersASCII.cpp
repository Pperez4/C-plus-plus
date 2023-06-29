/*-------------------------------------------------------
Write a program that uses a loop to display the characters 
for the ASCII codes 0 through 127. Display 16 characters on 
each line.
---------------------------------------------------------*/

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
// Main Function
//------------------------------
int main() 
{
  //counter variable 
    int i;
    char ASCII;

    //The loop will iterate 127 times 
    for (i = 1; i <= 127; i++)
    {   
         ASCII = i;
         cout << ASCII << " ";
    //print 16 characters per line 
    // if the remainder of i / 16 is 0 a new line is printed 
           if (i % 16 == 0)
            cout << "\n"; 
    }
    
}