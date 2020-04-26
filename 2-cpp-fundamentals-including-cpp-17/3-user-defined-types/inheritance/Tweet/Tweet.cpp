#include <iostream>
#include "header-files/Tweet.h"

using std::cout;
using std::endl;

Tweet::Tweet(
  std::string first,
  std::string last,
  int arbitrary,
  std::string handle
):Person(first, last, arbitrary),twitterhandle(handle){
  cout << "[Tweet] Constructing Tweet " << twitterhandle << endl; 
};

Tweet::~Tweet(){
  cout << "[Tweet] Destructing Tweet " << twitterhandle << endl;
}