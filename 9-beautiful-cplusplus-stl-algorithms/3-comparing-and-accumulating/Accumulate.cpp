#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>

using namespace std;
int main(){

  vector<int> vi{1,2,3,4,5};
  int total = accumulate(begin(vi), end(vi), 0);
  cout << "total " << total << endl;
  
  // total all evens  
  int evenTotal = accumulate(begin(vi), end(vi), 0, [](int & evenTotal, int const& i){
    return i%2 == 0 ? evenTotal + i : evenTotal;
  });
  cout << "Eventotal " << evenTotal << endl;


  string words = accumulate(begin(vi), end(vi), string{"Numbers: "}, [](string & words, int const& num){
    return words + " " + to_string(num);
  });
  cout << words << endl;


  auto firstThree = find(begin(vi), end(vi), 3);
  for_each(firstThree, end(vi), [](auto &i){ i = 10; });
  for_each(begin(vi), end(vi), [](int const& i){ cout << i << " "; });

  return 0;
}