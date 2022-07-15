#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Field width
    // cout << setw(5) << 5.5;
    // cout << endl;

    // Justify
    cout << setw(10) << setiosflags(ios::right) << 5.5;
    cout << endl;
    cout << setiosflags(ios::left) << 5.5;
    cout << setw(10) << endl;

    // Precision & format
    // double x = 800000.0 / 81.0;
    // setprecision(3);
    // cout << setiosflags(ios::fixed) << x;
    // cout << endl;
    // cout << setiosflags(ios::scientific) << x;
    // cout << endl;

    // double a = 3.1415926534;
    // double b = 1996.1;
    // double c = 5.2e-10;

    // cout.precision(3);
    // cout << "default:\n";
    // cout << a << '\n'
    //      << b << '\n'
    //      << c << '\n';
    // cout << '\n';
    // cout << "fixed:\n"
    //      << fixed;
    // cout << a << '\n'
    //      << b << '\n'
    //      << c << '\n';
    // cout << '\n';
    // cout << "scientific:\n"
    //      << scientific;
    // cout << a << '\n'
    //      << b << '\n'
    //      << c << '\n';

    // Fill char
    // int m = 1, d = 2, y = 2015;
    // cout << setfill('0');
    // cout
    //     << setw(2) << m << '/' <<setw(2)<< d << '/' << y << endl;

    // Number bases
    unsigned long x = 64206;
    // cout << x
    //      << " in base 8 is \"" << oct << x << "\""
    //      << " and in base 16 is \"" << hex << x << "\"" << endl;
    // int x;
    cin >> hex >> x;
}