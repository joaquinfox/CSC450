#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int limit, sum = 0;
    cout << "Limit ";
    cin >> limit;
    for (int i = 0; i <= limit; sum += i++)
        ;
    // for (int i = 0; i < limit; i++)
    // {
    //     sum += i;
    // }
    cout << "The sum is: " << sum << endl;
}