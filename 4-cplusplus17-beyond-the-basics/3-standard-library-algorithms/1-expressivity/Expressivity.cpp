#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>

using std::vector;
using std::cout;
using std::endl;
using std::generate_n; // algorithm
using std::accumulate; // numeric 
int main(){

  // populating a vector
  vector<int> vi;
  for(int i=0; i<5; i++){
    vi.push_back(i);
  }

  for(int i=0; i<5;){
    vi.push_back(i++);
  }

  int i;
  generate_n(std::back_inserter(vi), 5, [&](){return i++;});




  // totalling the elements of vectors
  int total{0};
  for(int i=0; i<size(vi); i++){
    total += vi[i];
  }

  int totalIt{0};
  for(auto it=begin(vi); it!=end(vi); it++, total+=*it);
  cout << "totalIt using iterator " << totalIt << endl;

  int totalAgain{0};
  for(auto const& i:vi){
    totalAgain += i;
  }

  int totalAccumulate{0};
  totalAccumulate = accumulate(begin(vi), end(vi), 0);



  ////////////////////////////////
  //couting 3
  int count3{0};
  for(auto it=begin(vi); it!=end(vi); it++){
    if(*it == 3){
      count3++;
    }
  }

  int count2{0};
  std::count(begin(vi), end(vi), 2);


  ////////////////////////////////
  // removing 3
  auto vi2 = vi;
  for(unsigned int i=0; i<vi2.size(); i++){
    if(vi2[i] == 3){
      vi2.erase(vi2.begin() + i);
    }
  }

  // auto vi3 = vi;
  // for(auto it=begin(vi3); it!=end(vi3); it++){
  //   if(*it == 3){
  //     vi3.erase(it); // error because next time iterator will be lost
  //   }
  // }

  auto vi4 = vi;
  auto endv4Iterator = std::remove_if(begin(vi4), end(vi4), [](int n){ return n==3;});
  vi4.erase(endv4Iterator, end(vi4));

  return 0;
}