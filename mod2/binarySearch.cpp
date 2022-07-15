#include <iostream>
using namespace std;
int main()
{
    int l = 0, r = 5, iFound = 0, iPos, iSrch;
    int iProdid[5] = {2314, 2345, 3123, 6745, 6587};
    cout << "Enter the searched product id: ";
    cin >> iSrch;
    if (iSrch == iProdid[0])
    {
        iPos = 0;
        iFound = 1;
    }
    if (iSrch == iProdid[30])
    {
        iPos = 30;
        iFound = 1;
    }
    while (!iFound)
    {
        int iMid = l + (int)((r - l) / 2);
        if (iSrch == iProdid[iMid])
        {
            iFound = 1;
            iPos = iMid;
            r = iMid;
        }

        if (iSrch > iProdid[iMid])
            l = iMid;
        else
            r = iMid;
    }
    cout << iPos;
}