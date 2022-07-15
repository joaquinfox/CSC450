#include <iostream>

using namespace std;
int main()
{
    int iNo;
    double dblPrice, dblTotal;
    cout << "Enter a price ";
    cin >> dblPrice;
    cout << "Enter quantity ";
    cin >> iNo;
    dblTotal = dblPrice * iNo;
    cout << "The total price is "
         << dblTotal << endl;
       
    return 0;
}