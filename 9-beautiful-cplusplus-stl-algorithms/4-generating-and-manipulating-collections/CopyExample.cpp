#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
ostream& operator<<(ostream& os, vector<int> const& vi){
  os << "[ ";
  for(auto const& i:vi){
    os << i << " ";
  }
  os << "]";
  return os;
};
int main(){
  vector<int> vi{1,2,3,4,5};

  // if you want to copy entire collection, please use '=' equal sign operator
  auto vi1 = vi;

  auto firstThree = find(begin(vi), end(vi), 3);


  vector<int> vi2(vi.size());
  cout << "\n\nelements of vi2 \n" << vi2 << endl;
  copy(begin(vi), firstThree + 1, begin(vi2)); // including copy 3
  cout << "After copy, elements of vi2 \n" << vi2 << endl;


  
  // copy with-in same collection
  auto vi4 = vi;
  cout << "\n\nContents of vi4 " << vi4 << endl;
  copy(begin(vi4), begin(vi4)+3, begin(vi4)+3);
  cout << "after copy within same collection vi4 \n";
  cout << vi4 << endl;


  // copy n elements
  vector<int> vi5(vi.size());
  cout << "\n\nHow many elements you want to copy \n";
  cout << "After copy 3 elements \n";
  copy_n(begin(vi), 3, begin(vi5));
  cout << "contents of vi5 "<< vi5 << endl;



  // copy backward (right to left)
  // copy (left to right)
  copy_backward(begin(vi), end(vi)-1, end(vi));// last argument must be out of range of first two argument range
  cout << "After copy_backward \n " << vi;


  return 0;
}