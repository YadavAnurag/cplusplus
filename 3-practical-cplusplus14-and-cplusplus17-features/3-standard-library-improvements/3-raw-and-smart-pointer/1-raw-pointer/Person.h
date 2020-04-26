#pragma once
#include <string>
#include <iostream>

class Person{
  private:
    int number;
    std::string firstname;
  public:
    Person(){std::cout<< "[Person.h] Constructing \n"; };
    ~Person(){std::cout << "[Person.h] Destructing \n"; };
    void SayHi() const{ std::cout << "Hi, how are you ? \n"; };
};