#include <iostream>
#include <memory>

using namespace std;
int main(){

  auto p = make_unique<int>(64); // return type is -> unique_ptr<int>

  auto lambda = [](){
    //cout << "Inside the lambda value of p: " << *p << endl; // error p can't be referenced until it is captured by init-capture
    cout << "Inside the lambda \n";
  };

  lambda();


  auto anotherLambda = [ptr = move(p)](){ // but old value of p will be lost, find a better way to move that back
    cout << "Inside the anotherLambda value of p: " << *ptr << endl;
  };

  anotherLambda();

  cout << "Old value of p: " << *p << endl;

  
  return 0;
}