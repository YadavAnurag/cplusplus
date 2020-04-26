#pragma once
#include <string>


class Person{
  private:
    std::string firstname;
    std::string lastname;
    int arbitrarynumber;
  public:
    Person();
    Person(std::string first, std::string last, int arbitrary);
    std::string GetName() const{return firstname + " " + lastname;};
    int GetNumber() const{return arbitrarynumber;};
};