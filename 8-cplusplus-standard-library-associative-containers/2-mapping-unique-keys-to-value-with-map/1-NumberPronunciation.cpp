#include <cassert>
#include <map>
#include <iostream>


using namespace std;
int main(){
  map<int, string> numbers{};

  assert(numbers.empty());

  numbers[1] = "one";
  numbers[2] = "two";
  numbers[64] = "sixty-four";
  numbers[3] = "three";
  numbers[4] = "four";

  for(auto const& [num, pronounced]:numbers){
    cout << "The number " << num << " is pronounced as " << pronounced << endl;
  }

  return 0;
}