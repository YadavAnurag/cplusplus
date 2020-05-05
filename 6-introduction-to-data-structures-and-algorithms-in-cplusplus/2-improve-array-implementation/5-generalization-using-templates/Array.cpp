#include "header-files/Array.hpp"
#include <iostream>
#include <cassert>
#include <string>      
// #define assert(_Expression) (void) ((!!(_Expression)) || (_wassert(_CRT_WIDE(#_Expression),_CRT_WIDE(__FILE__),__LINE__),0))

using std::cout;
using std::endl;
using std::cin;
using std::string;

// testing default ctor
void TestDefaultCtor(){
  cout << "\n\n *Testing default ctor*\n";
  
  Array<int> a{};
  assert(a.IsEmpty());
  assert(a.Size() ==0);

  Array<double> d{};
  assert(d.IsEmpty());
  assert(d.Size() ==0);
  
  cout << "Array object correctly default constructed \n\n";
}

// Testing copy ctor
void TestCopyCtor(){
  cout << "\n\n*Testing copy ctor \n";
  Array<float> f1{3};
  assert(f1.Size() == 3);
  f1[0] = 10;
  f1[1] = 20;
  f1[2] = 30;

  cout << "Creating copy of f1 to f2\n";
  Array<float> f2 = f1;
  cout << "f1 = " << f1;
  cout << "f2 = " << f2;

  cout << "f2[1] = 400 \n";
  f2[1] = 400;
  cout << "f1 = " << f1 << endl;
  cout << "f2 = " << f2 << endl;;
}

void TestMoveCtor(){
  cout << "\n\n*Testing Move ctor\n";
  Array<float> f1{3};
  assert(! f1.IsEmpty());
  assert(f1.Size() == 3);

  cout << "Before move f1 \n"; 
  cout << "f1 = "<< f1 <<endl;

  Array<float> f2{f1};
  assert(! f2.IsEmpty());
  assert(f2.Size() == 3);
  cout << "After move f1 to f2";
  cout << "f1 = " << f1 << endl;;
  cout << "f2 = " << f2 << endl;;
  cout << "\n Object correctly constructed using move constructor\n";
}

void TestSwap(){
  cout <<"\n\n*Testing swap\n";
  Array<string> s1{3};
  assert(! s1.IsEmpty());
  assert(s1.Size() ==3 );
  s1[0] = "Anu";
  s1[1] = "Gopal";
  s1[2] = "Yadav";

  Array<string> s2{2};
  assert(s2.Size() == 2);
  assert(! s2.IsEmpty());

  cout << "\nBefore swap\n";
  cout << "s1 = " << s1 <<endl;
  cout << "s2 = " << s2 <<endl;
  swap(s1,s2);
  cout << "\nAfter swap\n";
  cout << "s1 = " << s1 <<endl;
  cout << "s2 = " << s2 <<endl;

}

void TestAssignmentOperator(){
  cout <<"\n\n*Testing assignment operator\n";
  Array<string> s1{3};
  assert(! s1.IsEmpty());
  assert(s1.Size() == 3);
  
  cout << "s1 = " <<s1 <<endl;
  
  Array<string> s2{};
  assert(s2.IsEmpty());
  assert(s2.Size() == 0);
  cout << "s2 = s1\n";
  s2 = s1;
  assert(s2.Size() == s1.Size());
  cout << "s1 = " << s1 <<endl;
  cout << "s2 = " << s2 <<endl;
}

void TestBoundChecking(){
  cout << "\n\n*Testing out of bound access\n";
  Array<int> a{3};
  assert(! a.IsEmpty());
  assert(a.Size() == 3);
  
  a[0] = 10;
  a[0] = 20;
  a[0] = 30;
  

  try{
    cout << "trying to access array out of bounds\n eg. a[100] = \n";
    cout << a[100];
  }catch(IndexOutOfBoundException const& e){
    cout << "IndexOutOfBoundException correctly caught!\n";
  }
}
int main(){
  TestDefaultCtor();
  TestCopyCtor();
  TestMoveCtor();
  TestSwap();
  TestAssignmentOperator();
  TestBoundChecking();

  
  return 0;
}


