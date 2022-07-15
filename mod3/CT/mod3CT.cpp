#include <iostream>
using namespace std;
int main()
{
     int num1, num2, num3;

     int *pnum1 = &num1, *pnum2 = &num2, *pnum3 = &num3;
     cout << "Enter 3 intergers" << endl;
     cin >> num1 >> num2 >> num3;
     cout << "\nINPUTS:" << endl;
     cout << *pnum1 << " " << *pnum2 << " " << *pnum3
          << endl;
     cout << "\nSTACK ADDRESSES:" << endl;
     cout << pnum1 << " " << pnum2 << " " << pnum3
          << endl;

     // Put on heap
     try
     {
          pnum1 = new int(num1);
          pnum2 = new int(num2);
          pnum3 = new int(num3);
          cout << "\nHEAP ADDRESSES:" << endl;
          cout << pnum1 << " " << pnum2 << " " << pnum3
               << endl;
          delete pnum1, pnum2, pnum3;
     }
     catch (bad_alloc &e)
     {
          cerr << e.what() << endl;
     }
     catch (...)
     {
          throw;
     }

} // End