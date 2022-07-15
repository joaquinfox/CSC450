#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
cout << setiosflags(ios::left) << 5.5;
cout << resetiosflags(ios::right)<< 5.5;
// need to reset in order to return to default, i.e right-justified.
}