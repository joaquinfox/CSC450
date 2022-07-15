// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main()
{
    const int buff_size = 256;
    static char buf[buff_size];
    fputs("prompt: ", stdout);
    fflush(stdout);
    fgets(buf, buff_size, stdin); // get characters from the console
    fputs(buf, stdout);
    return 0;
}
