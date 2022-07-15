#include <iostream>
using namespace std;

int main()
{
  int foo[3]= {1,2,3};
  cout<<*foo;
}
// Given the following statements, which statement will not cause an error?

// doublemyRadius=5.5;
// constdouble*constptrValue=&myradius;
// Group of answer choices

// myRadius++;

// (*ptrValue)++;

// ptrValue = &myRadius;

// cout

// Question 8
// 1 / 1 pts
// Given the following statements, which statement will not cause an error?

// doublemyRadius=5.5;
// constdouble*constptrValue=&myradius;
//   myRadius++; 
//   (*ptrValue)++; 
//   ptrValue = &myRadius;
//   cout 
// Correct. The cout << *ptrValue; statement will not cause an error.

 
// IncorrectQuestion 9
// 0 / 1 pts
// Given the following statements, which statement will not cause an error?

// doublemyRadius=5.5;
// constdouble*ptrValue=&myradius;
//   myRadius++; 
//   (*ptrValue)++; 
//   ptrValue = &myRadius;
//   cout 
// Try again. The ptrValue = &myRadius; statement will not cause an error. Refer to Section 8.6 in Chapter 8 of Structured Programming with C++ for more information.