
using namespace std;
#include <iostream>
#include <string.h>
/*
we can get the memory address of a variable by using the & operator:

A pointer however, is a variable that stores the memory address as its value.
*/

int main()
{
    int a[10], *p, i;
    p = a;
    cout << p << endl; // a reference
    // a++; ILLEGAL

}
