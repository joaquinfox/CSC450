#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) // allows us to run at the command prompt and pass parameters to the executable

{

    int num1;
    int num2;
    int num3;

    int *myptr1 = new (int); // the new() keyword allocates memory from the heap instead of the stack (which is the default)
    int *myptr2 = new (int);
    int *myptr3 = new (int);

    // int t1;
    // t1 = 7;

    // cout << "address of t1 is: " << &t1 << endl;

    // cout << "size of t1: " << sizeof(t1) << endl;

    // cout << "value of t1 is: " << t1 << endl;

    cout << "Enter Integer 1:" << '\n';
    cin >> num1;

    cout << "Enter Integer 2:" << '\n';
    cin >> num2;

    cout << "Enter Integer 3:" << '\n';
    cin >> num3;

    // Print Variable Values and Their Associated Memory Address
    myptr1 = &num1;
    cout << "Integer 1's Value is: " << *myptr1 << '\n';
    cout << "Integer 1's Location is: " << myptr1 << '\n';

    // Dynamic memory allocation using NEW and DELETE

    // if you new(), you need to delete after using it -  otherwise, possible memory leak.

    myptr1 = new int(num1);
    delete myptr1;
    // cout << "myptr1 deleted";
    cout << '\n';

    myptr2 = &num2;
    cout << "Integer 2's Value is: " << *myptr2 << '\n';
    cout << "Integer 2's Location is: " << myptr2 << '\n';
    cout << '\n';

    myptr3 = &num3;
    cout << "Integer 3's Value is: " << *myptr3 << '\n';
    cout << "Integer 3's Location is: " << myptr3 << '\n';
    cout << '\n';

    return 0; // return success (the "0") back to the OS
}