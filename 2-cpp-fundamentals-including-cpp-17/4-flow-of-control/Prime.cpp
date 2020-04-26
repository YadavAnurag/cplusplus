#include <iostream>

using namespace std;
int main(){

  int x;
  bool prime = true;
  cout << "Enter a number " << endl;
  cin >> x;

  int i = 2;

  while(i <= x/i){
    int factor = x/i;

    if(factor * i == x){
      cout << "Factor found " << factor << endl;
      prime = false;
      break;
    }

    i = i + 1;

  }
  if(prime){
    cout << "Number is prime" << endl;
  }else{
    cout << "Number is not prime" << endl;
  }

  return 0;
}