#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;
ostream& operator<<(ostream& os, vector<int> vi){
  os << "[ ";
  for(auto const& i:vi){
    os << i << " ";
  }
  os << "]";
  return os;
}
int main(){

  vector<int> vi{40,2,1,3,5,14,0};
  random_device randomDevice;
  mt19937 generator(randomDevice());

  cout << "after sorting\n";
  sort(begin(vi), end(vi));
  cout << vi << endl;

  cout << "after shuffle \n";
  shuffle(begin(vi), end(vi), generator);
  cout << vi << endl;


  cout << "\n Partial sort come in handy in pagination\n";
  cout << "partial sort till where you want, after that element is not necessary to be sorted\n";
  partial_sort(begin(vi), find(begin(vi), end(vi), 3),  end(vi));
  cout << vi << endl;

  cout << "is sorted until \n";
  cout << *is_sorted_until(begin(vi), end(vi)) << endl;


  vector<int> v2(3);
  cout << "Partial sort copy, come in handy-> to get top 3 or any element from collections \n";
  partial_sort_copy(begin(vi), end(vi), begin(v2), end(v2));
  cout << "partial_sort_copy collections \n";
  cout << v2 << endl;

  // nth element -> nth_element
  return 0;
}