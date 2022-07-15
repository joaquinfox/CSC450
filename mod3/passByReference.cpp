#include <iostream>
using namespace std;
/* this program uses pass by reference to make a function polymorphic*/
class core
{
public:
    virtual void show() // meant to be overriden in a subclass
    {
        cout << "Core \n";
    }
}; // end core

class alt : public core // inherits from core
{
public:
    void show() { cout << "Alternate \n"; }
}; // end alt

void display(core &c) { c.show(); }

int main(void)
{
    core c; // Instantiate core
    alt a;  // Instantiate alt
    display(c);
    display(a);
    return 0;
} // end main