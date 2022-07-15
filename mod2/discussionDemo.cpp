#include <fstream>
#include <string>
#include <assert.h>
#include <iostream>

// #include <bits/stdc++.h>
using namespace std;

void f(const string &input)
{

    string email;
    // Copy input into email converting ";" to " "
    string::iterator loc = email.begin();
    for (auto i = input.begin(), e = input.end(); i != e; ++i, ++loc)
    {
        loc = email.insert(loc, *i != ';' ? *i : ' ');
    }
    cout << email;
}

int main()
{
    const string input = "foo;hanga;banga";
    const string &in = input;
    f(input);
}