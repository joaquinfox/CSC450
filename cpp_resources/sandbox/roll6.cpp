#include <iostream>

using namespace std;

int main()
{
    srand(time(0));
    int roll, counter;
    while (roll != 6)
    {
        roll = rand() % 6 + 1;
        counter++;
    }
    cout<<counter;
}