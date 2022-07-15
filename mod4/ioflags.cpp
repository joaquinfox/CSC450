#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    double mole = 602200000000000000000.0;
    float grade = 97.153f;
    cout.precision(3);
    cout.setf(ios::scientific);
    cout << mole << endl;
    cout.unsetf(ios::scientific);

    cout << setw(10) << grade << endl;
    cout.precision();
    cout << setw(10)<<setfill('*') << grade << endl;

    return 0;
}