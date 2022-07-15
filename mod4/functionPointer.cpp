#include <cstdio>

using namespace std;

void func()
{
    puts("hanga banga");
}

int main()
{
    void (*pfunc)()=func;
    puts("cheese");
    func();
    pfunc();
    return 0;
}