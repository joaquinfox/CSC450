// #include <fstream>
#include <iostream>
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
    system("cls");
    cout << "Menu" << endl;
    cout << "====" << endl;
    cout << "A. Order" << endl;
    cout << "B. Invoice" << endl;
    cout << "C. Warehouse" << endl;
    cout << "D. Finance" << endl;
    cout << "Select:" << endl;

    cin >> input;
    switch (input)
    {
    case 'a':
        cout << "You chose A";
        break;
    case 'b':
    case 'c':
    case 'd':
    default:
        cout << "pending";
    }
    cout << endl;
    //  << "Input was: " << input;
    return 0;
}