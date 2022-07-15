#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string input, inputB, inputC;
    int myNum = 25;
    double myDbl = 8.259874;
    cout << "Enter something: " << endl;
    cin >> input;
    cout << "Input was: " << setw(4) << input << endl;
    cout << "Enter two things in a row: " << endl;
    cin >> inputB >> inputC;
    cout << "Inputs were: " << inputB << " " << inputC << endl;
    cout << setiosflags(ios::fixed);
    // cout << resetiosflags(ios::fixed);
    cout << setprecision(2);
    cout << myDbl << endl;
    cout << setw(2) << myDbl << endl;
}