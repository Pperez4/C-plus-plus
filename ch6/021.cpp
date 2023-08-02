/*-------------------------------------------------------------
Multiple Stock Sales
Use the function that you wrote for Programming Challenge 20 
(Stock Profit) in a program that calculates the total profit 
or loss from the sale of multiple stocks. The program should 
ask the user for the number of stock sales and the necessary 
data for each stock sale. It should accumulate the profit or 
loss for each stock sale and then display the total.
--------------------------------------------------------------*/
#include <iostream>
#include <iomanip>
using namespace std;

int getInformation();
void displayAndCalculate(int);

int main()
{
    int num;
    num = getInformation();
    displayAndCalculate(num);
}

//-----------------------------
// getInformation () definition
// this function ask's the
// user for the number of 
// stock sales and returns
// the value.
//------------------------------
int getInformation()
{
    int stockSales;
    cout << "Enter the number of stock sales: ";
        while (!(cin >> stockSales) || stockSales <= 0)
        {
            cout << "Error\n"
                 << "it must be a numeric value\n"
                 << "greater than 0.\n";
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Enter the number of stock sales: ";
        }

        return stockSales;    
}

void displayAndCalculate(int numSales)
{

    int NS;                  //NS is the number of shares
    double SP;              //SP is the sale price per share, 
    double SC;             //SC is the sale commission paid
    double PP;            //PP is the purchase price per share, 
    double PC;           //PC is the purchase commission paid.

    double profitOrloss;
    for (int i = 1; i <= numSales; i++)
    {
        
        cout << endl;
        cout << "Please provide the following information." << endl;
        cout << endl;
        cout << "Number of shares sale " << i << ": ";
            while (!(cin >> NS) || NS <= 0)
            {
                cout << "Error\n"
                    << "It must be a numeric value\n"
                    << "greater than 0.\n";
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Number of shares sale " << i << ": ";
            }
        cout << endl;
        cout << "Sale Price per Share " << i << ": ";
            while (!(cin >> SP) || SP <= 0)
            {
                cout << "Error\n"
                    << "It must be a numeric value\n"
                    << "greater than 0.\n";
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Sale Price per Share "<< i << ": ";
            }
        cout << endl;
        cout << "Commission Sale Paid "<< i << ": ";
            while (!(cin >> SC) || SC <= 0)
            {
                cout << "Error\n"
                    << "It must be a numeric value\n"
                    << "greater than 0.\n";
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Commission Sale Paid "<< i << ": ";
            }
        cout << endl;
        cout << "Purchase Price Per Share "<< i << ": ";
            while (!(cin >> PP) || PP <= 0)
            {
                cout << "Error\n"
                    << "It must be a numeric value\n"
                    << "greater than 0.\n";
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Purchase Price Per Share "<< i << ": ";
            }

        cout << endl;
        cout << "Commission Purchase Paid "<< i << ": ";
            while (!(cin >> PC) || PC <= 0)
            {
                cout << "Error\n"
                    << "It must be a numeric value\n"
                    << "greater than 0.\n";
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Commission Purchase Paid "<< i << ": ";
            }

            profitOrloss = ((NS * SP) - SC) - ((NS * PP) + PC);
            cout << fixed << showpoint << setprecision(2);
            cout << "------------------------------------------\n";
            if (profitOrloss <= 0)
                cout << "Loss Sale " << i << ": $" <<profitOrloss << endl; 
            else if (profitOrloss > 0)
                cout << "Profit " << i << ": $" <<profitOrloss << endl;
            cout << "------------------------------------------\n";
    }
}