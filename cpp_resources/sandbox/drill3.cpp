#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int qty;
    const double tax = 0.10;
    double price, total;
    cout << "Enter a quantity and a unit price: " << endl;
    cin >> qty >> price;
    cout << endl
         << "INVOICE";
    cout << endl
         << "=======" << endl;
    cout << "Quantity:               " << setw(5) << qty << endl;
    cout << setprecision(2) << setiosflags(ios::fixed);
    cout << "Price per unit:         " << setw(8) << price << endl;
    cout << "Total price:            " << setw(8) << (qty * price) << endl;
    cout << "Tax:                    " << setw(8) << tax << endl;
}