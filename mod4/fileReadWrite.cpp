#include <iostream>
#include <fstream>
using namespace std;

void fileWrite();
int main()
{
    /*gets file size*/
    ifstream file("filename.txt", ios::binary | ios::ate);
    cout << file.tellg() << endl;
    return file.tellg();
    // fileWrite();
}

const char *prompt()
{
    puts("Enter integers:");
    fflush(stdout);
}
void fileWrite()
{
    // Create and open a text file
    ofstream MyFile("filename.txt");

    // Write to the file
    MyFile << 88<<55<<16;

    // Close the file
    MyFile.close();
}