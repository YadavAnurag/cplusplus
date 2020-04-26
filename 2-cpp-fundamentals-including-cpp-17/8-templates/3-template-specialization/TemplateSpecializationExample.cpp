#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;

#include "header-files/Person.h"
#include "header-files/Accumulate.h"


int main(){

  Accumulate<int> integers(0); 
  // this is syntax for c++14
  // c++17 template type deduction -> Accumulate integers(0);
  // no need to specify the <int> type
  
  integers += 3;
  integers += 4;
  cout << integers.GetTotal() << endl;


  Accumulate<string> strings(string(""));
  strings += "Anu";
  strings += "Gopal";;
  cout << strings.GetTotal() << endl;

  // errors
  // integers += "another"; // error type safety
  // strings += 4; // error type safety


  // template specialization
  Accumulate<Person> people(0);
  Person p1("Anu", "Singh", 12);
  Person p2("Anurag", "Yadav", 20);
  people += p1;
  people += p2;
  cout << people.GetTotal() << endl;

  return 0;
}