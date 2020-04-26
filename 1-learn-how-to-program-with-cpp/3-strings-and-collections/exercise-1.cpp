// wap to ask user for two words and tell him which is longer

#include <iostream>
#include <string>

using namespace std;
int main(){

  string condition;
  while(true){
    string first, second;
    cout << "Enter first phrase " << endl;
    getline(cin, first);

    cout << "Enter second phrase " << endl;
    getline(cin, second);

    int lengthDiff = first.length() - second.length(); 
    if(lengthDiff > 0){
      cout << "First is longer " << endl;
    }else if(lengthDiff < 0){
      cout << "Second is longer " << endl;
    }else{
      cout << "Length of both string is same " << endl;
    }

    cout << "Try again y/n " << endl;
    cin >> condition;
    if(condition == "n"){
      break;
    }
  }

  return 0;
}