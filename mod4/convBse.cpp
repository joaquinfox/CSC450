#include <iostream>
#include <iomanip>
using namespace std;
string convBase(unsigned long v, long base)
{
    string digits = "0123456789abcdef";
    string result;
    if ((base < 2) || (base > 16))
    {
        result = "Error: base out of range.";
    }
    else
    {
        do
        {
            result = digits[v % base] + result;
            v /= base;
        } while (v);
    }
    return result;
}
int main()
{
    unsigned long x = 64206;
    cout << "Hex: " << convBase(x, 16) << endl;
    cout << "Decimal:" << convBase(x, 10) << endl;
    cout << "Octal:" << convBase(x, 8) << endl;
    cout << "Binary:" << convBase(x, 2) << endl;
    cout << "Test:" << convBase(x, 32) << endl;

        return 0;
}