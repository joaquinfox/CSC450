#include <stdio.h>
#include <assert.h>
#include <iostream>

using namespace std;

int main()
{
    int x = 7;
    int input;
    cin >> input;
    // x = 9;
    assert(("These inputs really need to be 7", x == 7));
    if (input != 7)
    {
        x = input;
    }
    // else
    // {

    //     cout << "input is " << input << "\n";
    // }

    return EXIT_SUCCESS;
}