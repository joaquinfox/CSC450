#include <atomic>
#include <iostream>

using namespace std;

// void update(atomic<int> &a)
// {

// }

int main()
{
    atomic<int> a(0);
    for (int i = 0; i < 10; i++)
    {
        ++a;
    }
    // printf(a);
    printf("%d", a);
    // update(a);
}