#include <iostream>
#include <sstream>
#include <limits>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    int age;

    while (true)
    {
        cout << "fooooo";
        if (cin >> age)
        {
            break;
        }
        else
        {
            cout << "no bueno\n";
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    cout << EXIT_SUCCESS << "\n";
    return EXIT_SUCCESS;
}