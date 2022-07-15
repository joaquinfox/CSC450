#include <cstdio>

int main()
{

    char c = 'S';

    float x = 7.0, y = 9.0;

    double d = 6.548;

    int i = 50;

    printf("The float division is : %.2f / %.3f = %.3f \n", x, y, x / y);

    printf("The double value is : %.4f \n", d);

    printf("Setting the width of c : %*c \n", 3, c);

    printf("The octal equivalent of %d is %o \n", i, i);

    printf("The hex equivalent of %d is %x \n", i, i);

    return 0;
}