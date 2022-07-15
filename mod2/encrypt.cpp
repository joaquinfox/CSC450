#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    int len;
    char name[30];
    char encrypt[30];

    cout << "Enter your name: " << endl;
    cin.getline(name, 29);
    len = strlen(name);

    for (int i = 0; i < len; i++)

        encrypt[i] = name[i] + 1;
    encrypt[len] = '\0';
    cout << "Encrypted: " << encrypt << endl;
}

// The square bracket
// operator is not range-checked and thus reading from or writing to an out-of-bounds index
// tends to produce difficult-to-track-down errors.