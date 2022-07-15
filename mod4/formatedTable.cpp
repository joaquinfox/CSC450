#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    const int max = 12;
    const int width = 6;
    for (int row = 1; row <= max; row++)
    {
        for (int col = 1; col <= max; col++)
        {
            cout << setw(width) << row * col;
        }
        cout << endl;
    }
}