#include <array>
#include <iostream>
#include <algorithm>

using namespace std;
int main(){

  array<int, 5>  arr{1,2,3,4,5};
  
  cout << "std::array elements \n";
  for(auto const& a:arr){
    cout << a << " ";
  }
  cout << "\n";

  cout << "Size of the array " << arr.size() << endl;

  cout << "Please enter a number to search for- ";
  int n;
  cin >> n;
  
  auto it = find(begin(arr), end(arr), n);
  if(it != end(arr)){
    cout << n << " was found in the array \n";
  }else{
    cout << n << " was not found \n";
  }



  return 0;
}