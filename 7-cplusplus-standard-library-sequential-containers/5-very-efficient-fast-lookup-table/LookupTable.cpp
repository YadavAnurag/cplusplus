#include <iostream>
#include <array>

using namespace std;
int main(){

  // using static constexpr make no moachine code generated to push values on stack
  // so it make it fast lookup
  static constexpr array<int, 5> arr{1,2,3,4,5};

  cout << "static constexpr array contents \n";
  for(auto const& a:arr){
    cout << a << " ";
  }
  cout << endl;

  return 0;
}