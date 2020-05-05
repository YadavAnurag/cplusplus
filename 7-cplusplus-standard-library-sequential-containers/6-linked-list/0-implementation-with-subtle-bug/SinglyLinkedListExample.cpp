#include "SinglyLinkedList.hpp"
#include <iostream>

using namespace std;
int main(){
  
  SinglyLinkedList list{};

  unique_ptr<Node> n1{make_unique<Node>(8)};
  cout << "Data of n1 node " << n1->data << endl;

  list.InsertAtHead(1);
  list.InsertAtHead(2);
  list.InsertAtHead(3);

  for(int i=0; i<10'000'000; i++){ // stackoverflow
    list.InsertAtHead(i);
  }
  cout << "Last line of the program. After this, the list nodes will be recursively destroyed!\n";

  return 0;
}