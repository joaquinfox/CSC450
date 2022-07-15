// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main()
{
    // Create (write) files
    static const char * firstFile="testFile1";
    static const char * secondFile="testFile2";
    static const char * thirdFile="testFile3";
    FILE* fh1 = fopen(firstFile,"w");
    FILE* fh2 = fopen(secondFile,"w");
    FILE* fh3= fopen(thirdFile,"w");

    static const char *fn1="fooFile";
    rename(firstFile,fn1);
    fclose(fh1);
    remove(thirdFile);
    puts("Done");

    puts("Hello, World!");
    return 0;
}
