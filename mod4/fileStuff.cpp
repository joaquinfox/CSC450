#include <iostream>
#include <iomanip>
#include<fstream>
using namespace std;

int main()
{
    ifstream infp;
    infp.open("notes.txt”, ios::in);
    if (!infp)
    {
        cerr << "Can't open input file " << “inputFilename.txt” << endl;
        exit(1);
    }
    outfp.open(“outputFilename.tx”, ios::out);
    if (!outfp)
    {
        cerr << "Can't open output file " << “outputFilename.txt” << endl;
        exit(1);
    }

    return 0;
}