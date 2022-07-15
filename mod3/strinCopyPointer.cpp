#include <iostream>
#include <assert.h>
using namespace std;

char *month(int n)
{
    static char *name[] = {"Jan", "feb", "Mar", "Apr", "May", "June", "Jul", "AUg", "Sep", "Oct", "Nov", "Dec"};
    assert(n >= 1 && n <= 12);
    return name[n - 1];
}
int main()
{
    cout << month(4);
    int a = 2, b = 1;
    int *x[] = {&a, &b, &b, &a, NULL};
    cout << endl
         << x[0] << endl;
}
