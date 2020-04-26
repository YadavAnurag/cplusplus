#include <iostream>
#include "Person.h"

int main(){

  Person p1("Anu", "Yadav", 21);
  {
    Person p2;
  }
  std::cout << "after innermost block " <<std::endl;

  std::string name = p1.getName();

  std::cout << "name" <<  name << std::endl;

  return 0;
}