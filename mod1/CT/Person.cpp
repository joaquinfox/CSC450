#include <iostream>
#include <string.h>

using namespace std;
class Person
{
    string firstName;
    string lastName;
    string address;
    string city;
    int zip;

public:
    Person(string first, string last, string addr, string city, int zip) : firstName(first), lastName(last), address(addr), city(city), zip(zip){};
    void setLastName(string last) { lastName = last; }
    void setFirstName(string first) { firstName = first; }
    void setAddress(string addr) { address = addr; }
    void setCity(string city) { city = city; }
    void setZip(int zip) { zip = zip; }
    string getLastName()
    {
        return lastName;
    }
    string getFirstName()
    {
        return firstName;
    }
    string getAddress()
    {
        return address;
    }
    string getCity()
    {
        return city;
    }
    int getZip()
    {
        return zip;
    }
}; // End

int main()
{
    string firstName;
    string lastName;
    string address;
    string city;
    int zip = 45265;
    cout << "Enter a first name: " << endl;
    cin >> firstName;
    cout << "Enter last name: " << endl;
    cin >> lastName;
    cout << "Enter address:" << endl;
    cin.ignore();
    getline(cin, address);
    cout << "Enter city and zip : " << endl;
    cin >> city >> zip;

    Person bob(firstName, lastName, address, city, zip);

    cout << endl
         << "You entered: "
         << endl
         << bob.getFirstName() << " " << bob.getLastName() << endl;
    cout << bob.getAddress() << ", " << bob.getCity() << ", " << bob.getZip() << endl;
} // End
