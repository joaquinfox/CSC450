#include <iostream>
#include <string.h>

using namespace std;
int main()
{

    char name[30], init[3]; // room for null char
    cout << "enter a name: ";
    cin.getline(name, 29);
    int len = strlen(name);
    init[0] = (name[0] - 32);
    for (int i = 1; i < len; i++)
    {

        if (name[i] == ' ')
        {

            init[1] = (name[i + 1] - 32);
        };
    }
    init[2] = '\0';
    cout << endl
         << "You're initials are: " << init << endl;
}