#include <iostream>
// #include <stdexcept>

using namespace std;
double division(int a, int b)
{
    if (b == 0)
    {
        throw invalid_argument("Division by foo bar condition!");
    }
    return (a / b);
}

int main()
{

    try
    {

        cout << division(9, 0);
    }
    catch (invalid_argument &e)
    {
        cerr << e.what() << endl;
    }

    return 0;
}