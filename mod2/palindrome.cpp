#include <iostream>
using namespace std;
#include <algorithm>
#include <string>
int main()
{
    cout << "\n Enter the string to be reversed:";
    string txt;
    getline(cin, txt);
    string revtxt = txt;
    reverse(txt.begin(), txt.end());
    if (txt == revtxt)
        cout << "\n Entered string is palindrome";
    else
        cout << "\n Entered string is not palindrome";
}