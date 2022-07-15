#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
// int argc, char *argv[]
int main()
{

   // C++ code using parallel arrays:

   // Set floating point values to two decimal places
   cout << setiosflags(ios::fixed);
   cout << setiosflags(ios::showpoint);
   cout << setprecision(2);

   int r;
   cout << "Enter the number of students: ";
   cin >> r;

   string studentName[r];
   double GPA[r];
   string lName;
   string fName;

   // gather student names & GPAs
   for (int i = 0; i < r; i++)
   {

      // cout << "Student " << +i + 1 << endl;
      // cout << "Enter Name (Last Name, First Name: ";
      cin.ignore();
      getline(cin, studentName[i]);
      cout << "GPA: ";
      cin >> GPA[i];
      cout<< GPA[i]<<endl;

      // print column names
      // cout << setfill(' ') << setw(25) << left << "Student Name" << setw(5) << right << "GPA" << endl;

      // print student record
      // cout << setfill(' ') << setw(25) << left << studentName[i] << setw(5) << right << GPA[i] << endl;
   }
   return 0;
}