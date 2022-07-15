#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    string bar = "red panda";
    string *ptrBar = &bar;

    // cout << ptrBar << endl;  // 0x7ffd248a7390
    // cout << *ptrBar << endl; // red panda

    char name[] = "Billy Bob";
    char *ptrName = name;

    // cout << ptrName << endl;  // Billy Bob
    // cout << *ptrName << endl; // Billy Bob

    int intArray[5] = {1, 2, 3, 4, 5};
    int foo = 5;
    int *ptrA = intArray;

    cout << "Type: " << typeid(name).name() << endl;
    cout << "Type: " << typeid(intArray).name() << endl;
    cout << "Type: " << typeid(*ptrBar).name() << endl;

    // cout << ptrA << endl;
    // cout << ptrA << endl;
    // cout << *ptrA << endl;
}