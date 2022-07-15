
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

    // cout << food;  // Outputs the value of food (Pizza)
    // cout << &food; // Outputs the memory address of food (0x6dfed4)

    // string food = "Pizza"; // A food variable of type string
    string *ptr = &food; // A pointer variable, with the name ptr, that stores the address of food

    // Output the value of food (Pizza)
    // cout << food << "\n";

    // Output the memory address of food (0x6dfed4)
    // cout << &food << "\n";

    // Output the memory address of food with the pointer (0x6dfed4)
    // int foo = 17;
    // int *ptr2 = &foo;
    // cout << "ptr2 " << ptr2 << "\n";
    /* This works fine*/
    // *ptr2 = &foo;
    // cout << "foo " << foo << endl;
    // cout << ptr2 << endl;

    // auto bar = NULL;
    // auto *nullPtr = &bar;
    // cout << bar << endl;
    // cout << nullPtr << endl;

    int x, y, *k, *px, *py;
    x = 2;
    k = &x;
    y = *k;
    // cout << "y: " << y << endl;
    y = *(&x); // the value that is stored at reference x, x = x
    // cout << "y: " << y << endl;

    // y = *k++;
    // cout << "y: " << y << endl;
    // cout << "k: " << k << endl;

    // y = *k + 1;
    // cout << "y: " << y << endl;
    // cout << "k: " << k << endl;

    // y = *k++;
    // cout << "y++: " << y << endl;

    // cout << "k: " << k << " x: " << x << " y: " << y << endl;
    px = &x;
    cout << px << endl;

    *px = 0; // sets x to 0
    cout << x << endl;
    // py = px;
    // cout << py << endl;
    cout << px << endl;
    // cout << "y: " << y << endl; // prints 2?? shouldnt it print 0?
    cout << ++*px << endl;
    cout << *px++ << endl;// no effect?
}
