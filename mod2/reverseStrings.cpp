#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;
int main()
{
    char name[30], first[15], last[30];
    cout << "Enter your name: " << endl;
    cin.getline(name, 29);
    for (int i = 0; i < 29; i++)

        if (name[i] == ' ')

            break;

    strncpy(first, last, i);
    first[i] = '\0';
    strcpy(last, name + i + 1);

    strcat(last, " ");
    strcat(last, first);
    cout << last << endl;
    cout << reverse(last.begin(), last.end()) << endl; // reverse name
}