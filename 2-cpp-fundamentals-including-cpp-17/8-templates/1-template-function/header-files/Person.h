#pragma once
#include <string>
#include <iostream>

#ifndef _Person_H
#define _Person_H
class Person{
  private:
    std::string firstname; 
    std::string lastname;
    int arbitrarynumber;
  public:
    Person();
    Person(
      std::string first,
      std::string last,
      int arbitrary
    );
    ~Person();
    
    std::string GetName() const;
    int GetNumber() const { return arbitrarynumber;} // inline
    void SetNumber(int arbitrary){arbitrarynumber = arbitrary;} // inline
    
    bool operator<(int const& i) const;
    bool operator<(Person const& p) const;
    
    friend bool operator<(int const& i, Person const& p);
};
#endif

bool operator<(int const& i, Person& p);