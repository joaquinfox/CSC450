#include <iostream>
// #include <stdio.h>

using namespace std;

int main()
{
    // How to get a list of inegers?
    string inputs;
    puts("please eat peas");
    fflush(stdout);

    // getline(cin, inputs);
    static char response[4]; // static storage for response buffer
    fgets(response, 4, stdin);
    return 0;
}

/*Prompts user for input, validates and stores inputs in an array */
// const char *prompt()
// {
//     puts("Enter integers:");
//     printf(">>");
//     fflush(stdout);

//     const int max = 2147483647;
//     const int min = -2147483647;

// // Get user inputs from console, make sure they are ints within range
//     int inputs[];
// }

// /* */
// void writeFile()
// {
// }

void readFile()
{
}