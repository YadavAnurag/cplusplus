#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::count_if;
using std::string;
using std::for_each;

// to define return type of lambda use return type explicitly after close round bracket and before start braces fn body
auto doSomething = []() -> double {return 3.4;};
int main(){

  // tiny functions
  auto isOdd = [](int candidate){return candidate%2!=0;}; // always use auto return type of lambda fn 
  
  vector<int> numbers{1, 2, -4, 4, 5, 7, 9};

  int odds = count_if(begin(numbers), end(numbers), isOdd);
  int evens = count_if(begin(numbers), end(numbers), [](int candidate){return candidate%2 == 0; });


  //////////////////////////////////
  int x{3}, y{7};
  string message = "elements between ";
  message += std::to_string(x) + " and " + std::to_string(y) + " inclusive:  ";
  for_each(begin(numbers), end(numbers),
    [x, y, &message](int n){ // init capture message by reference
      if(n >= x && n <= y){
        message += " " + std::to_string(n);
      }
    });


  //////////////////////////////////
  x = y = 0;
  // x by value rest by ref
  for_each(begin(numbers), end(numbers),
    [&, x](int n) mutable { // you must have to put & first
      x += n; // do not affect outer x
      y += n;
    });
  

  //////////////////////////////////
  x = y = 0;
  // everything by value
  for_each(begin(numbers), end(numbers),
    [=](int n) mutable { 
      x += n; // do not affect outer x
      y += n; // do not affect outer y
    });
  
  

  return 0;
}