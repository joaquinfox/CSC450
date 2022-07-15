#include <iostream>

using namespace std;

int main()
{

    int array[5] = {9, 7, 5, 3, 1};

    for (int i = 0; i < 5; i++)

    {

        cout << "The array element " << i << " is : " << array[i] << " and is located at memory address: " << &array[i] << endl;
    }

    return 0;
}