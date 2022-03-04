#include <iostream>
#include <vector>
#include <algorithm>
#include <map>


using namespace std;
int main(){

  vector<int> vi{1,2,0, 2,3,0,4,5,5,0,2,1,6};

  // count how many target
  int const target = 2;
  int twos{};
  twos = count(begin(vi), end(vi), target); // safe and good habit to use nonmember begin and end, because it also works for C-style array too, it calls vi.begin() and vi.end() if it exists
  twos = count(vi.begin(), vi.end(), target);
  cout << twos << endl;


  int odds = count_if(begin(vi), end(vi), [](int const& i){ return i%2!=0; });
  cout << "Number of odds " << odds << endl;


  map<string, int> monthLengths = {
    {"January", 31},
    {"February", 28},
    {"March", 31},
    {"April", 30},
    {"May", 31},
    {"June", 30},
    {"July", 31},
    {"August", 31},
    {"Spetember", 30},
    {"October", 31},
    {"November", 30},
    {"December", 31}
  };

  // find long months
  int const targetDay = 30;
  int longMonths = count_if(begin(monthLengths), end(monthLengths), [](auto const& month){
    auto [name, days] = month;
    return days > targetDay;
  });
  cout << longMonths << " months are long months\n\n";

  // check if all elemenet of vi is even
  bool allof = all_of(begin(vi), end(vi), [](auto const& i){ return i%2==0; });
  
  // check if any element of vi is even
  bool anyof = any_of(begin(vi), end(vi), [](auto const& i){ return i%2==0; });

  // check if no element of vi is even
  bool noneof = none_of(begin(vi), end(vi), [](auto const& i){ return i%2==0; });


  cout << "allof " << allof << endl;
  cout << "anyof " << anyof << endl;
  cout << "noneof " << noneof << endl;



  // find first zero in vi
  auto firstZero = find(begin(vi), end(vi), 0);
  
  // find first 2 after first 0
  auto firstTwo = find(firstZero, end(vi), 2);
  if(firstTwo != end(vi)){
    cout << "position of firstTwo, after first zero: " << (firstTwo-begin(vi)) << endl;
  }


  string sentence = "Hello how are you Anu ?";
  
  // find first a in sentence
  auto firstA = find(begin(sentence), end(sentence), 'a');
  if(firstA != end(sentence)){
    cout << "Position of first a " << (firstA-begin(sentence)) << endl;
  }

  // find first even value, opposite of predicate
  auto result = find_if_not(begin(vi), end(vi), [](auto const& i){ return i%2!=0; });
  cout << "Position of first even "<< (result-begin(vi)) << endl;


  return 0;
}