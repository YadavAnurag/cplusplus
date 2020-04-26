#pragma once
template <class T>
class Accumulate{
  private:
    T total;
  public:
    Accumulate(T start):total(start){};
    T operator+=(T const& t){return total = total + t;};
    T GetTotal() const {return total;};
};
