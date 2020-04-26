#include <iostream>
using namespace std;

// [[deprecated("Deprecation Message")]] // deprecation msg is optional
// void DoSomething(){ // this function still can be used but with deprecation warning
// }

[[deprecated("DoSomething() is inefficient; use DoSomethingBetter() instead.")]]
void DoSomething(){
  cout << "I'm doing something in obsolete way";
}

void DoSomethingBetter(){
  cout << "I'm doing something in better way";
}

int main(){

  DoSomething();

  return 0;
}