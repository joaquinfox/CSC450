#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ifstream inf{"testFoo.txt"};

    while (inf)
    { // As long as there is something in the file, keep reading.
        string strInput;
        getline(inf, strInput);

        cout << strInput << "\n";
    }

    return 0;
}