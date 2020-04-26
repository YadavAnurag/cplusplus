#pragma once
#include <string>

class Person{
  private:
    std::string firstname;
    std::string lastname;
    int arbitrarynumber;

    // friend bool operator<(int const& i, Person const& p); // friend function, is free function any where in the project, can access the private stuffs
  public:
    Person();
    Person(std::string first, std::string last, int arbitrarynumber);
    ~Person();
    std::string GetName() const;
    int GetNumber() const;

    bool operator<(Person const& p) const; // p1<p2
    bool operator<(int const& i) const; // p1<300
};

// free function
bool operator<(int const& i, Person const& p); // 300<p1