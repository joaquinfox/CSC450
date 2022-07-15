#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int iMaxNo = 3;
    const double dLimit = 50000, perc1 = 0.1, perc2 = 0.15;
    double sales[iMaxNo], dAmount, dFee;
    int i, nr;
    // Initialize array
    cout << endl
         << "Enter ID: ";
    for (i = 0; i < iMaxNo; i++)
    {
        sales[i] = 0; // Why this? you need to initialize the index?\ of the first element?

        // Enter salesman info
        while (cin >> nr && cin >> dAmount)
        {
            cout << "Enter sales:" << endl;
            // if (nr < 1 || nr > iMaxNo || dAmount < 0)
            //     cout << "Input error" << endl;
            // else
            sales[nr - 1] += dAmount;
            cout << "Enter ID:";
        }
        // Print summary
        // cout << endl
        //      << "Number     Amount       Fee" << endl;
        // cout << "======     ======      ====== " << endl;

        // if (sales[i] > 0)
        // {
        //     if (sales[i] <= dLimit)
        //         dFee = perc1 * sales[i];
        //     else
        //         dFee = perc1 * dLimit + perc2 * (sales[i] - dLimit);
        //     cout << setw(4) << (i + 1) << setprecision(0) << setiosflags(ios::fixed) << setw(13) << sales[i] << setw(10) << dFee << endl;
        // } // end if
    } // end for-loop
    cout << "END" << endl;
} // end main