#include <iostream>
#include <exception>
#include <cassert>
#include <iomanip>


using namespace std;
int main()
{
    // Declarations
    double hours, rate, overtime = 0.00, regtime = 0.00, wages;

    // Allocate heap space
    double *h = new double;
    double *r = new double;
    double *ot = new double;
    double *rt = new double;
    double *wg = new double;

    // Pointer references
    h = &hours;
    r = &rate;
    ot = &overtime;
    rt = &regtime;
    wg = &wages;

    // Get user inputs
    puts("Enter hours worked: ");
    cin >> hours;
    assert(hours > 0.00 && "Hours must be a positive number.");
    puts("Enter pay rate:");
    cin >> rate;
    assert(rate > 0.00 && "Pay rate must be a positive number.");

    try
    { // De-reference heap space
        h = new double(hours);
        r = new double(rate);
        ot = new double(overtime);
        rt = new double(regtime);
        wg = new double(wages);
    }
    catch (const bad_alloc &e)
    {
        cerr << "Cannot allocate heap space." << e.what();
    }

    // Wage calculation
    if (*h > 40.00)
    {
        *rt = 40.00;
        *ot = *h - 40.00;
    }
    else
    {
        *rt = *h;
    }
    *wg = (*rt * *r) + (*ot * (1.5 * *r));

    // Print
    puts("\nEarnings this period");
    puts("======================");
    setprecision(5);

    cout.setf(ios::fixed);

    cout << "Total earnings   : $" << setprecision(2) << setw(7) << setiosflags(ios::right) << *wg << endl;
    cout << "Regular hours    : $" << setw(7) << setiosflags(ios::right) << *rt << endl;
    cout << "Regular earnings : $" << setw(7) << setiosflags(ios::right) << (*rt * *r) << endl;
    cout << "Overtime         : $" << setw(7) << setiosflags(ios::right) << *ot << endl;
    cout << "Overtime earnings: $" << setw(7) << setiosflags(ios::right) << (*ot * (1.5 * *r)) << endl;

    // Free heap space
    delete h, r, ot, rt, wg;
    h = nullptr, r = nullptr, ot = nullptr, rt = nullptr, wg = nullptr;
}
