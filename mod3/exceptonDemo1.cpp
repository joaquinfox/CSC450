#include <iostream>
// #include <stdexcept>

using namespace std;

int AddPositiveIntegers(int a, int b)
{
    if (a < 0 || b < 0)
        throw invalid_argument("AddPositiveIntegersHanga Banga arguments must be positive");

    return (a + b);
}

int main()
{
    try
    {
        cout << AddPositiveIntegers(-1, 2); // exception
    }

    catch (invalid_argument &e)
    {
        cerr << e.what() << endl; // what()
        return -1;
    }

    return 0;
}