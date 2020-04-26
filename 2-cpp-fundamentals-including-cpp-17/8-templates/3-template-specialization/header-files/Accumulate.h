#pragma once
#include "./Person.h"

template <class T>
class Accumulate{
  private:
    T total;
  public:
    Accumulate(T start):total(start){};
    T operator+=(T const& t){return total = total + t;};
    T GetTotal() const {return total;};
};


// template specialization
template <>
class Accumulate<Person> {
  private:
    int total;
  public:
    Accumulate(int  start) : total(start) {};
    int operator+=(Person const& p){return total = total + p.GetNumber(); };
    int GetTotal() const {return total; };
};