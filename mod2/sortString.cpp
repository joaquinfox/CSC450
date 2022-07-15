#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    char names[5][30], temp[30];
    cout << "enter 5 names and enter" << endl;
    // populate names[]
    for (int i = 0; i < 5; i++)

        cin >> names[i];

    for (int i = 0; i < 4; i++)

        for (int j = i + 1; j < 5; j++)

            if (strcmp(names[i], names[j]) > 0)
            { // swap which they call a "triangular exchange"
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }

    cout << endl
         << "sorted names: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << names[i] << endl;
    }
}
