#include "header-files/Array.h"
#include <iostream>
#include <cassert>


using std::cout;
using std::cin;
using std::endl;
using std::cerr;

int main(){
  try{
    cout << "Creating an empty array \n";
    IntArray a{};
    cout << "a.Size() is " << a.Size() << endl;
    assert(a.IsEmpty());

    cout << "--------------------------------\n";
    
    cout << "Creating an array of 10 elements\n";
    IntArray b{10};
    cout << "b.size() is " << b.Size() << endl;
    assert(! b.IsEmpty());

    cout << "\n\n--------------------------------\n";
    IntArray c{10};
    cout << "Setting c[0] = 10 \n";
    c[0] = 10; // assignment always requires reference of the lvalue, bcause compiler needs to modify the referenced elements
    cout << "c[0] is " << c[0] << endl;


    cout << "\n\n--------------------------------\n";
    for(int i=0; i<c.Size(); i++){
      c[i] = (i+1)*10;
    }
    cout << "Array elements\n";
    for(int i=0; i<c.Size(); i++){
      cout << c[i] << ' ';
    }
    cout << '\n';
    
    cout << "Array size is " << c.Size() << endl;
    cout << "Please enter an array index: ";
    int index{};
    cin >> index; 
    cout << "The element at index " << index << " is: " << c[index] << endl;

  
  }catch(IndexOutOfBoundException const& e){
    cout << "\n----------------------------\n";
    cerr << "***Error: Invalid Array Index" << "\n";
    cout << "----------------------------\n";
  }


  return 0;
}