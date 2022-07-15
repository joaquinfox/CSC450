#include <iostream>
#include <string.h>

using namespace std;

char charFromInt(int a)
{
    char output = a;

    cout << output;
    return output;
}

void caseChange(char arr[30])
{
    for (int i = 0; i < strlen(arr); i++)
    {
        cout << (char)(arr[i] - 32); // capitalize
    }
}

void compareArrays()
{
    char foo[30] = {'a', 'b', 'c'};
    char bar[30] = {'a', 'b', 'c'};
    char bam[30] = {'s', 'g', 'v'};
    int result1 = strcmp(foo, bar), result2 = strcmp(foo, bam), result3 = strcmp(bam, foo);
    cout << endl
         << result1 << endl;
    cout << endl
         << result2 << endl;
    cout << endl
         << result3 << endl;
}

void getLongInput()
{
    char name[30];
    cout << "Enter name:" << endl;
    cin.getline(name, 29); // save one spot for null char
    cout << "you're name is " << name << endl;
    cout << "input length: " << strlen(name) << endl; // size of input
    cout << endl
         << "string length: " << sizeof(name) << endl; // size of string
    caseChange(name);
}
void copySubstrings(char firstArr[30])
{
    int count = 2;
    char secondArr[30];
    strncpy(firstArr, secondArr, count);
    for (int i = 0; i < strlen(secondArr); i++)
        cout << secondArr[i] << endl;
}

int main()
{
    int i = 65;
    char cChar;
    char test[30] = {'a', 'b', 'c', 'c', 'd', 'e', 'f'};
    charFromInt(i);
    getLongInput();
    compareArrays();
    copySubstrings(test);
}