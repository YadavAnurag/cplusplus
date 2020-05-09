#include <set>
#include <iostream>
#include <algorithm>


using namespace std;
ostream& operator<<(ostream& os, set<string> strings){
  bool isFirst{true};

  os << "{ ";
  for(auto const& s:strings){
    if(isFirst){
      os << s;
      isFirst = false;
    }else{
      os << ", " << s;
    }
  }
  os << "}";

  return os;
}

int main(){

  set<string> colors{
    "Red", "Yellow", "Blue", "Magenta"
  };
  cout << "Initial content \n" << colors << endl;

  cout << "inserting green \n";
  auto [pos, inserted] = colors.insert("Green");
  if(inserted){
    cout << "After insertion " << colors << endl;
  }else{
    cout << *pos << ", is already present ";
  }

  cout << "again inserting green \n";
  auto it  = colors.insert("Green");
  cout << "After insertion " << colors << endl;

  cout << "Please enter a color to be searched for-";
  string s;
  cin >> s;

  auto found = find(begin(colors), end(colors), s);
  if(found != colors.end()){
    cout << s << ", is present \n";
  }else{
    cout << s << ", not found \n";
  }

  auto foundIf = find_if(begin(colors), end(colors), [&s](string const& color){
    return equal(begin(s), end(s), begin(color), end(color), [](char const& ch1, char const& ch2){
      return tolower(ch1) == tolower(ch2);
    });
  });
  if(foundIf != end(colors)){
    cout << "Case-insensitive match of " << s << " found " << *foundIf << endl;
  }else{
    cout << "Not even case-insensitive match of " << s << " found \n";
  }

  auto removed = colors.erase("Magenta");
  if(removed){
    cout << "After removing Magenta \n\n";
  }else{
    cout << "Does not contain Magenta \n\n";
  }
  cout << colors << endl;



  return 0;
}