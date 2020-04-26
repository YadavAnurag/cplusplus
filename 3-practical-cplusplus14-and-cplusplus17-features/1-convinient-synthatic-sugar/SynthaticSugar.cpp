#include <iostream>
#include <string>


// Automatic return type deduction
auto AreaOfSquare(double side){ // but its better to write return type as far as possible
  return side * side;
}

// Automatic return type deduction
// auto BuildCoolMap(){ // in this case when return type is very complex, its better to return auto
//   std::map<std::string, SomeLongValueType> result;
//   // fill the result map object
//   return result;
// }

using namespace std;
int main(){
  
  // digit seperators - int and float
  // using apostrophe(U+0027)
  long a = 10'000'0;
  double b = 150'000.049'0;


  // binary literals
  auto word = 0b00011101'01011101;

  return 0;
}