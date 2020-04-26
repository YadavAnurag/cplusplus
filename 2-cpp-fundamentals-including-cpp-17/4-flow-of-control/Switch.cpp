#include <iostream>

using namespace std;
int main(){

  int x;
  cout << "Enter a number " << endl;
  cin >> x;

  while(x){
    switch(x){ 
    // x will not go out of scope after this switch
    // switch(Person p = Person("anu"); p.getName()) -> after this p will go out of scope
      case 1:
        cout << "You entered 1" << endl;
        break;
      case 2:
        cout << "You entered 2" << endl;
        break;
      case 3:
        cout << "You entered 3" << endl;
      case 4:
        cout << "You entered 4" << endl;
        break;
      case 5:
        cout << "You entered 5" << endl;
        break;
      default:
        cout << "Your entered other than 1-5" << endl;
    }

    cout << "Enter number " << endl;
    cin >> x;
  }

  return 0;
}