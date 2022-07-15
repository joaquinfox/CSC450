/*
Enter a salesman number and amount sold. For each salesman calcualte a fee as follows
if sales < 5000, fee is 10% of sales
if sales > 5000, fee is is 10% of 5000, plus 15% of excess
Exit on ctrl z and print results in tabular form.
*/

#include <iostream>
#include <string>

using namespace std;

double calcFee(double sales)
{
    double fee;
    if (sales > 5000)
    {
        fee = (5000 * .1 + ((sales - 5000) * .15));
    }
    else
    {
        fee = (.1 * sales);
    }
    return fee;
}

bool checkQuit(string input)
{
    if (input == "z")
        return false;
}

int main()
{
    // Declarations
    int salesman[5];
    double sales[5];
    double fee[5];
    double sFee, totalSales;
    int smNum, counter = 0;
    bool quit = false;
    string input;
    cout << "Enter sales number:" << endl;

    while (!quit)
    {
        cin >> input;
        checkQuit(input);
        salesman[counter] = input;
        cout << "Enter sales amount:" << endl;
        cin>>input;
        sales[counter]=input;
        totalSales = sales[counter];
        sFee = calcFee(totalSales);
        fee[counter] = sFee;
        counter++;
    }
}