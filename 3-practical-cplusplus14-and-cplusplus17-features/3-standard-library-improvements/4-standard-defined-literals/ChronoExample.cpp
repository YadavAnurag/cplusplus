#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

void print(milliseconds ms){
  cout << ms.count() << "ms \n";
}
int main(){

  auto x = 2s;
  cout << "x = 2s: "; print(x);

  auto y = 150ms;
  cout << "y = 150ms: "; print(y);

  auto z = x + y;
  cout << "z = x + y: "; print(z);

  constexpr auto timelimit = 3000ms;
  cout << "Timelimit is: "; print(timelimit);
  if(z < timelimit){
    cout << "All right! \n";
  }else{
    cout << "Out of time! \n";
  }

  return 0;
}