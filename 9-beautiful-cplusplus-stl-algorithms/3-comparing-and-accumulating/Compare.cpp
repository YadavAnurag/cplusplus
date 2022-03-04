#include <vector>
#include <iostream>

using namespace std;
int main(){

  vector<int> vi1{1,2,3,4,5};
  vector<int> vi2{1,2,3,0};

  bool same = vi1.size() == vi2.size();
  for(size_t i=0; i<vi1.size() && same; i++){
    if(vi1[i] != vi2[i]) same = false;
  }
  cout << "Equality of two vectors\n";
  if(same){
    cout << "Both vectors are same \n";
  }else{
    cout << "Both vectors are different\n";
  }

  // a better way to check the equality of vectors
  same = equal(begin(vi1), end(vi1), begin(vi2), end(vi2));
  cout << "\n\nEquality of two vectors in better way\n";
  if(same){
    cout << "Both vectors are same \n";
  }else{
    cout << "Both vectors are different\n";
  }

  // find mismatch
  auto firstchange = mismatch(begin(vi1), end(vi1), begin(vi2));
  cout << "Mismatch " << *(firstchange.first) << " != " << *(firstchange.second) << endl;

  auto distance1 = firstchange.first - begin(vi1);
  auto distance2 = firstchange.second - begin(vi2);
  cout << "Distances " << distance1 << " " << distance2 << endl;



  return 0;
}