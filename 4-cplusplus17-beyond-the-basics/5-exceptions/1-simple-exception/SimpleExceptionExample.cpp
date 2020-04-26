#include <iostream>
#include <vector>
#include <exception>

using std::cout;
using std::endl;
using std::vector;
using std::out_of_range;
using std::exception;

int main(){

  vector<int> vi{1,2,3};
  int tenth{};
  try{
    tenth = vi.at(10);
  }catch(out_of_range const& oof){
    cout << "Out of range exception " << oof.what() << endl;
  }catch(exception const& e){
    cout << "Exception occurred " << e.what() <<endl;
  }

  return 0;
}