#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{

    int i, j, iLen;
    char cTemp, cText[50], cEncrypt[50];
    char cKey[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    srand(time(0));
    for (i = 0; i < 26; i++)
    {
        j = rand() % 26;
        cTemp = cKey[i];
        cKey[i] = cKey[j];
    }
    cout << "Write a text in upper case: " << endl;
    cin.getline(cText, 49);
    iLen = strlen(cText);
    for (i = 0; i < iLen; i++)
        cEncrypt[i] = cKey[cText[i] - 65];
    cEncrypt[iLen] = '\0';
    cout << "Encrypted: " << cEncrypt << endl;
}