#include <iostream>


using namespace std;
int main()
{
    int seconds, hours, minutes;
    cout << endl
         << "Enter seconds: " << endl;
    cin >> seconds;
    minutes = seconds / 60;
    seconds = seconds % 60; //??
    hours = minutes / 60;
    minutes = minutes % 60;
    cout << endl
         << hours << " hours, " << minutes << " minutes and " << seconds << " seconds.";
}