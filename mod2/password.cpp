#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int len, i;
    char password[30];
    srand(time(0));
    len = rand() % 3 + 5;
    for (i = 0; i < len; i++)
        password[i] = rand() % 26 + 65;
    password[len] = '\0';
    cout << "Passord: " << password << endl;
}