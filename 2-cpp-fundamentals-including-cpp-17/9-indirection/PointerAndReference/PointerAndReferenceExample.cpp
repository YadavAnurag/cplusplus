#include "header-files/Person.h"

#include <iostream>
using std::cout;
using std::endl;


int main(){

  int a = 3;
  cout << "a is " << a << endl;
  int& rA = a;
  rA = 5;
  cout << "a is " << a << endl;


  Person anu("Anu", "Singh", 12);
  Person& rAnu = anu;
  rAnu.SetNumber(1232);
  cout << "rAnu: " << rAnu.GetName() << " " << rAnu.GetNumber() << endl;


  // pointers
  int* pA = &a;
  *pA = 4;
  cout << "a is " << a << endl;

  int b = 100;
  pA = &b;
  (*pA)++;
  cout << "a is " << a << ", *pA " << *pA << endl;

  Person* pAnu = &anu;
  (*pAnu).SetNumber(235);
  pAnu->SetNumber(237);
  cout << "Anu: " << anu.GetName() << " " << anu.GetNumber() << endl;  
  cout << "pAnu: " << pAnu->GetName() << " " << pAnu->GetNumber() << endl;  



  // you must have to defined ref and pointer at time of declaration
  // int& badReference;
  // badReference = 3;
  // cout << badReference;

  // int* badPointer; // its bad thing, can cause unexpected result to system
  // *badPointer = 3;
  // cout << *badPointer << endl;

  int* badPointer = nullptr; // always initialize 
  if(badPointer){ // always check it badPointer is initialized
    *badPointer = 3;
    cout << *badPointer << endl;
  }


  return 0;
}
