#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

ostream& operator<<(ostream& os, vector<int> vi){
  os << "[ ";
  for(auto const& i:vi){
    os << i << " ";
  }
  os << "]";
  return os;
}
ostream& operator<<(ostream& os, vector<string> vi){
  os << "[ ";
  for(auto const& i:vi){
    os << i << " ";
  }
  os << "]";
  return os;
}
int main(){

  vector<int> vi{0, 4, -5, 6, 1, 5, 7, -6, -4 ,9, 5};
  sort(begin(vi), end(vi));
  cout << vi << endl;

  sort(begin(vi), end(vi), [](int elem1, int elem2){
    return elem1 > elem2; // descending order
  });
  cout << vi << endl;

  sort(begin(vi), end(vi), [](int elem1, int elem2){
    return abs(elem1) > abs(elem2);
  });
  cout << vi << endl;


  return 0;
}