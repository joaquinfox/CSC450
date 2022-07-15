// #include <fstream>
#include <iostream>
#include <stdlib.h>
// void f(std::istream &in)
// {
//     char buffer[32];
//     try
//     {
//         in.read(buffer, sizeof(buffer));
//     }
//     catch (std::ios_base::failure &e)
//     {
//         // Handle error
//     }
//     std::string str(buffer);
//     // ...
// }
using namespace std;
int main()
{
    char input;
    do // ensures menu prints at least once
    {

        cout << endl
             << "Menu" << endl;
        cout << "====" << endl;
        cout << "A. Order" << endl;
        cout << "B. Invoice" << endl;
        cout << "C. Warehouse" << endl;
        cout << "D. Finance" << endl;
        cout << "X. Exit" << endl;
        cout << "Select:" << endl;

        cin >> input;
        switch (input)
        {
        case 'a':
            cout << "You chose A";
            break;
        case 'b':
            cout << "You chose B";
        case 'c':
            cout << "You chose C";
            break;
        case 'd':
            cout << "You chose D";
            break;
        case 'x':
            cout << "Exit";
            break;
        default:
            cout << "pending";
            break;
        }
        cout << endl;

    } while (input != 'X');
    //  << "Input was: " << input;
    return 0;
}