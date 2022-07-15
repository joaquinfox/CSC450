#include <iostream>
#include <exception>
using namespace std;
struct MyException : public exception //struct is like class, all public
{
    const char *what() const throw() //what() is a public method of exception class
    {
        return "C++ Exception";
    }
};
int main()
{
    try
    {
        throw MyException();
    }
    catch (MyException &e)
    {
        std::cout << "MyException caught" << std::endl;
        std::cout << e.what() << std::endl;
    }
    catch (std::exception &e)
    {
        // Other errors
    }
}