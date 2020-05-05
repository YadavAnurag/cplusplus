#include "header-files/Person.hpp"
#include <iostream>

Person::Person():name("Anonymous"),age(17){}

Person::Person(
  std::string name,
  int age
):name(name),age(age){};

void Person::SayHi() const{
  std::cout << "Hi, " << name << ", my age is " << age;
}