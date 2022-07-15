
using namespace std;
#include <iostream>
#include <string.h>
// void f(const string &input)
// {
//     std::string email;
//     cout << "BEFORE: " << input << endl;
//     // Copy input into email converting ";" to " "
//     string::iterator loc = email.begin();
//     for (auto i = input.begin(), e = input.end(); i != e; ++i, ++loc)
//     {
//         loc = email.insert(loc, *i != ';' ? *i : ' ');
//     }
//     cout << "AFTER: " << email << endl;
// }

int main()
{
    /* This works fine*/
    // int foo = 17;
    // auto *ptr = &foo;
    // cout << foo << endl;
    // cout << ptr << endl;

    // auto bar = NULL;
    // auto *nullPtr = &bar;
    // cout << bar << endl;
    // cout << nullPtr << endl;

    // char *ptr1, *ptr2;
    // char demo1 = '$';
    // ptr1 = &demo1;
    // ptr2 = ptr1;

    // delete ptr1;
    // ptr1 = nullptr;
    // how can you capture buffer overflow stuff??

    char purple[6] = {'p', 'u', 'r', 'p', 'e'};
    purple[15] = {'z'};
    cout << purple[15] << endl;
    cout << purple << endl;
    cout << purple[14];
    // cout << streamsize(purple);
    cout << sizeof(purple) << endl;
    cout << purple[15];
}
