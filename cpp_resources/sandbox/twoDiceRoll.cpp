#include <iostream>

using namespace std;
int main()
{
    int d1, d2, counter;
    srand(time(0));
    while (d1 != d2)
    {
        counter++;
        d1 = rand() % 6 + 1;
        d2 = rand() % 6 + 1;
    }
    cout << counter << endl;
}