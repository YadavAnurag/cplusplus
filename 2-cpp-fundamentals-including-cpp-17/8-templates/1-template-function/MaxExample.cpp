// MaxExample.cpp entry point of application

#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
#include "header-files/Person.h"
#include "header-files/BankAccount.h"

using namespace std;


template <class T>
T GetMax(T const& t1, T const& t2){
  return t1 < t2 ? t2 : t1; // to compare classes using <, you have to implement operator overloading
}

int main(){

  // int
  cout << GetMax(22, 33) << endl;

  // string
  string s1 = "hello";
  string s2 = "world";
  cout << GetMax(s1, s2) << endl;

  // Person 
  Person p1("Anu", "Yadav", 20);
  Person p2("Anurag", "Gopal", 40);
  cout << GetMax(p1, p2).GetName() << endl;

  // BankAccount
  BankAccount b1(200);
  BankAccount b2(400);
  cout << GetMax(b1, b2).GetBalance() << endl;

  return 0;
}