#include <cstdio>
#include <string>

using namespace std;

class A
{
public:
    int ia;
    const char *sb = "";
    int ic;
};

int main()
{
    A a;
    a.ia = 55;
    a.sb = "hanga banga";
    a.ic = 2;
    printf("%d,  %s,  %d", a.ia, a.sb, a.ic);
    double rate = 0.5;
}