#include <iostream>
#include <array>

int main()
{
    double temp[5];

    std::cout << "Enter 5 temps" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cin >> temp[i];
    }

    double avg, sum;
    for (int i = 0; i < 5; i++)
    {
        sum += temp[i];
    }
    avg = sum / 5;
    std::cout << avg;
}