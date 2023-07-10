/*------------------------------------------------------------
Pattern Displays
Write a program that uses a loop to display Pattern A below, 

followed by another loop that displays Pattern B.
Pattern A
+
++
+++
++++
+++++
++++++
+++++++
++++++++
+++++++++
++++++++++

Pattern B
++++++++++
+++++++++
++++++++
+++++++
++++++
+++++
++++ 
+++ 
++
+
---------------------------------------------------------------*/
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
    //The '+' pattern is displayed in 10 lines
    int n = 10; 

//-------------------------------------------------------------------------------
//When observing the pattern we can notice that there are 10 levels. 
//Therefore a for loop is a good option because we know the number of iterations.
//-------------------------------------------------------------------------------

/*----------------------------------------------------
        Explanation of the logic of the loop 
------------------------------------------------------
In the first iteration of the outer for loop 
i = 1
n = 10 
Condition:  i <= n;
The condition is true because 1 is less than 10.

Therefore we go into the inner for loop where
j = 1 
i = 1
Condition: j <= i;
The condition is true because 1 == 1
and "+" is printed. One more time the program goes back
to test the condition of the ineer loop but at this point
j = 2
i = 1
Condition: j <= i;
Here the condition is false because 2 is greater than 1.
The program goes to the next line 
       cout << "\n";
and a new line is printed. 
------------------------------------------------------*/

cout << endl;
cout << "------------------------\n";
cout << " Pattern A\n";
cout << "------------------------\n";
cout << endl;

//Outer Loop responsible for printing the levels of the pattern.      
    for (int i = 1; i <= n; i++) 
    {
       //Ineer loop  is to print the stars and also increment the number of 
       //stars in each iteration. 
       for (int j = 1; j <= i; j++) 
       {
            cout << "+";
       }
       
       cout << "\n";
    }
cout << endl;
cout << "------------------------\n";
cout << " Pattern B\n";
cout << "------------------------\n"; 
cout << endl;
    
/*----------------------------------------------------
        Explanation of the logic of the loop 
------------------------------------------------------
Outer loop 
We recall than n = 10 
i = n; 
Which means i = 10 
Condition: i >= 1;
The condition is true then i--
i-- will run in a reverse way  10, 9, 8... for ten times. 
Inner for loop
j = i;
Which means j = 10
Condition: j > 0;
The condition is true and j-- 
j -- will run in a reverse way  10, 9, 8... for ten times. 

In the first iteration 
i = 10 which makes i >= 1; true 
The program goes to the inner for loop where j = 10 
making j > 0; true and "+" is printed, the program goes 
one more time into the inner loop at this point j = 9
making j > 0; true again and a second "+" is printed in 
the exact same line. 
------------------------------------------------------*/
 
 for (int i = n; i >= 1; i--)
 {
    for (int j = i; j > 0; j--)
    {
        cout << "+";
    }
    
    cout << "\n";
 }
 
    
}