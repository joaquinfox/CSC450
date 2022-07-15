#include <iostream>

using namespace std;

void passByVal(int a)
{
    a = 12;
    cout << "PBV: " << endl;
}

void passByRef(int &a)
{
    a = 99;
}

void passByPointer(int *a)
{
    *a = 55;
}

int main()
{
    int x = 4;
    passByVal(x); // x == 4, does not update
    cout << x << endl;

    int *px = &x;
    passByRef(*px); // x == 99
    cout << x << endl;

    passByPointer(&x); // x == 55
    cout << x << endl;

    return 0;
}