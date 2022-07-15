#include <iostream>
using namespace std;

int main()
{
    long *p;
    long foo = 4;
    p = &foo;
    // long a = 8045856;
    cout << p << endl;
    p += 1; // ads 8 bits (a byte)
    cout << p << endl;
    p -= 1;
    cout << p << endl;
    p--;
    cout << p << endl;
    // cout << p << endl;
    // cout << p << endl;
}
