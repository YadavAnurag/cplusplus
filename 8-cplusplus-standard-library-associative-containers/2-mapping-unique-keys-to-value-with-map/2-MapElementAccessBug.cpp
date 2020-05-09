#include <map>
#include <iostream>


using namespace std;

void PrintC64ComputerMemory(map<string, int> const& memory){
  //Bug: cout <<  "Memory of C64 is "<< memory["C64"] << endl; // error
  
  //Fix: use find method of map
  auto it = memory.find("C64");
  if(it != end(memory)){
    auto [computerType, memory] = *it;
    cout << "Memory of " << computerType << " in KB: " << memory << endl;
  }else{
    cout << "computer not found \n";
  }
}
int main(){

  map<string, int> computerMemory{};
  computerMemory["C64"] = 64;
  computerMemory["Amiga 500"] = 512;

  PrintC64ComputerMemory(computerMemory);

  return 0;
}