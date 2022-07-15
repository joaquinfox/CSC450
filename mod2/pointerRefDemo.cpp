
using namespace std;
#include <iostream>
#include <string.h>
/*
we can get the memory address of a variable by using the & operator:

A pointer however, is a variable that stores the memory address as its value.
*/

int main()
{
    string food = "Pizza"; // A food variable of type string

    cout << food;  // Outputs the value of food (Pizza)
    cout << &food; // Outputs the memory address of food (0x6dfed4)

    string food = "Pizza"; // A food variable of type string
    string *ptr = &food;   // A pointer variable, with the name ptr, that stores the address of food

    // Output the value of food (Pizza)
    cout << food << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";

    // Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";
        /* This works fine*/
    int foo = 17;
    auto *ptr = &foo;
    cout << foo << endl;
    cout << ptr << endl;


    auto bar = NULL;
    auto *nullPtr = &bar;
    cout << bar << endl;
    cout << nullPtr << endl;
}
