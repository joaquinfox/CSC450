#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()

{
    int rol1, rol2, rol3, rol4, rol5, rol6;
    double avg;
    srand(time(0));
    rol1 = rand() % 6 + 1;
    rol2 = rand() % 6 + 1;
    rol3 = rand() % 6 + 1;
    rol4 = rand() % 6 + 1;
    rol5 = rand() % 6 + 1;
    rol6 = rand() % 6 + 1;

    avg = (double)(rol1 + rol2 + rol3 + rol4 + rol5 + rol6) / 6;

    cout << setprecision(4) << "Average: " << avg << endl;
    ;
}
