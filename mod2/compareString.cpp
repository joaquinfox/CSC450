#include <iostream>
#include <string.h>
using namespace std;

// #include "console.h"
// #include "simpio.h"
int main()
{
    string myName = "Neal";
    while (true)
    {
        cout << "Enter your name (or 'quit' to exit): ";
        string userName;
        // cin.getline(userName, 29);
        getline(cin, userName);
        if (userName == "Julie")
        {
            cout << "Hi, Julie! Welcome back!" << endl;
        }
        else if (userName == "quit")
        {
            // user is sick of entering names, so let's quit
            cout << endl;
            break;
        }
        else if (userName != myName)
        {
            // user did not enter quit, Julie, or Neal
            cout << "Hello, " << userName << endl;
        }
        else
        {
            cout << "Oh, it’s you, " << myName << endl;
        }
    }
    return 0;
}