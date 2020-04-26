

/*

Ordinary functions are executed at run-time
double DoSomething(){

}


constexpr functions are executed at compile-time
constexpr double DoSomethingElse(){

}

*/

#include <iostream>
#include <cassert> // for runtime assertion
using namespace std;

int RunTimeFibonacci(int n){ // run-time execution
  switch(n){
    // F_0 = 0
    case 0: return 0;
    // F_1 = 1
    case 1: return 1;
    // F_n = F_(n-1) + F_(n-2)
    default:
      return RunTimeFibonacci(n-1) + RunTimeFibonacci(n-2);
  }
}

constexpr int CompileTimeFibonacci(int n){ // compile-time execution
  switch(n){
    // F_0 = 0
    case 0: return 0;
    // F_1 = 1
    case 1: return 1;
    // F_n = F_(n-1) + F_(n-2)
    default:
      return CompileTimeFibonacci(n-1) + CompileTimeFibonacci(n-2);
  }
}

// use (void) to silent unused warnings
#define assertm(exp, msg) assert(( (void)msg, exp ))
int main(){

  cout << "Index ? " << endl;
  int i{};
  cin >> i;

  static_assert(CompileTimeFibonacci(10) == 55, "UnExpected compile-time fibonacci number");
  assertm(RunTimeFibonacci(10) == 55, "UnExpected run-time fibonacci number");

  cout << "Runtime F_ " << i << " = " << RunTimeFibonacci(i) << "\n";
  cout << "CompileTime F_ " << i << " = " << CompileTimeFibonacci(i) << "\n";

  return 0;
}