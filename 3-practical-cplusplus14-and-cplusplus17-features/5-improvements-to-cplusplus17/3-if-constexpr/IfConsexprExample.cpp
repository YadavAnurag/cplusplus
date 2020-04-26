#include <string>
#include <iostream>
#include <type_traits>

using namespace std;

template <typename T>
auto length(T const& value){
  // if(is_integral<T>::value){ // ordinary if
  //   //cout << "The length of the integer number is number itself: " << value;
  //   return value;
  // }else{
  //   //cout << "Invoke length method in general case";
  //   return value.length();
  // }


  if constexpr (is_integral<T>::value){ // c++17 if, compile time evaluation
  // if value is type integer then, else block wouldn't compile
    return value;
  }else{
    return value.length();
  }

}

int main(){

  int a{53};
  cout << length(a) << endl;

  string b{"Anu"};
  cout << length(b) << endl;

  return 0;
}