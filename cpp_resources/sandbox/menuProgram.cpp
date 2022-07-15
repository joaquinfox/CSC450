#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    double avg;
    int gt, lt, num1, num2, input;
    cout << "Enter 2 numbers: " << endl;
    if (cin >> num1 && cin >> num2)
    {
        cout << "1. Greatest" << endl;
        cout << "2. Least" << endl;
        cout << "3. Average" << endl;
        cin >> input;
        if (num1 > num2)
        {
            gt = num1;
            lt = num2;
        }
        else
        {
            gt = num2;
            lt = num1;
        }
        avg = double(num1 + num2) / 2;
        switch (input)
        {
        case 1:
            cout << endl
                 << "Greatest: " << gt << endl;
            break;
        case 2:
            cout << endl
                 << lt << endl;
            break;
        case 3:
            cout << endl
                 << "Average: " << avg << endl;
            break;
        default:
            cout << endl
                 << "not recognized.";
            break;
        }
    }
    else
    {
        cout << "Input error" << endl;
        system("clear");
        cin.get();
    }
    {
    }
}