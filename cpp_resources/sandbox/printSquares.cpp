#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int i = 0, x;

    while (i < 10)
    {
        cout << endl
             << i + 1 << " " << (i + 1) * (i + 1) << endl;
        i++;
    }

    for (x = 0; x < 5; x++)
    {
        cout << "Hanga banga!!" << endl;
    }
}