// #include <fstream>
// #include <string>
// #include <assert.h>
#include <iostream>

// #include <bits/stdc++.h>
using namespace std;

#include <algorithm>
#include <string>
void f(const string &input)
{
    string email{input};
    replace(email.begin(), email.end(), ';', ' ');
    cout << email << endl;
}

int main()
{
    const string input = "foo;hanga;banga";
    const string &in = input;
    f(input);
}