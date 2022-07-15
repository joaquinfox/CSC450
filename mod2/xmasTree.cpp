#include <iostream>

int main()
{

    int i, j;
    char x = 'X', blank = ' ';

    for (i = 10; i >= 0; i--) // first outer loop
    {
        for (j = 0; j < i; j++) // first inner loop
        {
            std::cout << blank;
        }
        std::cout << x;
        for (j = 0; j < 10 - i; j++) // second inner loop
        {
            std::cout << x << x;
        }
        std::cout << std::endl;
    }
    for (i = 0; i < 2; i++) // second outer loop
    {
        for (j = 0; j < 10; j++)
        {

            std::cout << blank;
        }
        std::cout << x << std::endl;
    }

    return 0;
}