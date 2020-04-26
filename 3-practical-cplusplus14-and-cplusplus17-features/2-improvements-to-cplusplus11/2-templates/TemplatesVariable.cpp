#include <iostream>
using namespace std;

// function template
template <typename T>
T GetMax(T const& t1, T const& t2){
  return t1 > t2 ? t1 : t2;
}
// class template
template <class T>
class PersonClass{
  private:
    T total;
  public:
    PersonClass();
    PersonClass(T start):total(start){};
    ~PersonClass();
    T operator+=(T const& t){ return total = total + t;}; // operator overloading
    T GetTotal() const {return total;};
} ;

// now- variable template
template <class T>
constexpr T PI = T(3.14159265323498769872314);


// variable template specialization
template <typename T>
constexpr T maxValue = T(1000);

template <>
constexpr double maxValue<double> = 2000.00;

template <>
constexpr char maxValue<char> = 'Z';

int main(){

  cout << "maxValue<int> " << maxValue<int> << endl;
  cout << "maxValue<int> " << maxValue<double> << endl;
  cout << "maxValue<int> " << maxValue<char> << endl;

  return 0;
}