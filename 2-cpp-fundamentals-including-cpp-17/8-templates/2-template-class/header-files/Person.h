#pragma once
#include <string>

class Person{
  private:
    std::string firstname;
    std::string lastname;
    int arbitrarynumber;
  public:
    Person();
    ~Person();
    Person(
      std::string first,
      std::string last,
      int arbitrary
    );

    std::string GetName() const;
    int GetNumber() const;
    void SetNumber(int number);
};