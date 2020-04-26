#include "Utility.h"

bool IsPrime(int x){
  bool prime = true;

  for(int i=2; i<=x/i; i++){
    int factor = x/i;
    if(factor * i == x){
      prime = false;
      break;
    }
  }
  
  return prime;
}

bool Is2MorePrime(int x){
  x = x + 2;
  return IsPrime(x);
}

// bool Is2MorePrime(int& x){
//   x = x + 2;
//   return IsPrime(x);
// }


// //pass by ref but no modification
// bool Is2MorePrime(int const& x){ 
//   return IsPrime(x + 2);
// }


// int& BadFunction(int x){
//   return x;
// }