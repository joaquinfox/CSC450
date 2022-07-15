#include <iostream>
#include <algorithm>
#include <assert.h>

using namespace std;

string reverseStr(string in)
{
    reverse(in.begin(), in.end());
    return in;
} // End

void printConsole()
{
    cout << endl
         << "Reversed:" << endl
         << "=========" << endl;
} // End

int main()
{
    string input;
    string stringArr[3]; // compiler allocates null end element
    int counter = 0;
    do
    {
        string *ptr;
        counter == 0 ? cout << "Enter a string: " : cout << "Enter another string: ";
        getline(cin, input);
        assert(input.length() > 0);
        input = reverseStr(input); // reverse the user input
        ptr = &input;              // assign input location to a pointer
        stringArr[counter] = *ptr; // store the pointer in an array
        counter++;
    } while (counter < 3);
    printConsole();

    for (int i = 0; i < 3; i++)
    {
        cout << stringArr[i] << endl;
    }
} // End main()