#include "SinglyLinkedList.hpp"
#include <iostream>

using namespace std;
Node* DetectCycle(SinglyLinkedList const& list){

  Node *slow = list.Head();
  Node *fast = list.Head();

  while(slow->next){
    if(slow == fast) return slow;
    slow = slow->next.get();
    fast = fast->next->next.get();
  }

  return nullptr;
}
int main(){
  
  SinglyLinkedList list{};

  // for(int i=0; i<10'000; i++){ // no stackoverflow
  //   list.InsertAtHead(i);
  // }
  // cout << "Last line of the program. After this, the list nodes will be recursively destroyed!\n";


  // cout << "Initial list " << list << endl;
  // for(int i=0; i<10; i++){
  //   list.InsertAtHead(i);
  // }
  // cout << list << endl;


  // cout  << "Removing at head \n";
  // list.RemoveAtHead();
  // cout << list << endl;
  
  // cout << "Size of the linkedList " << list.Size() << endl;

  // cout << "Reverse LinkedList \n";
  // list.Reverse();
  // cout << list << endl;


  // cout << "Please, enter an element to be searched for- ";
  // int value;
  // cin >> value;
  // if(list.Search(value)){
  //   cout << value << " was found in the list \n";
  // }else{
  //   cout << value << " was not found \n";
  // }



  // SinglyLinkedList list1;
  // list1.InsertAtHead(1);
  // list1.InsertAtHead(2);
  // list1.InsertAtHead(3);
  // cout << "\nContent before remove " << list1 << endl;
  // cout << "Please, enter an element to be removed for- ";
  // cin >> value;
  // if(list1.Remove(value)){
  //   cout << value << " removed from list \n" << list1 << endl;
  // }else{
  //   cout << value << " not found in the list \n" << list1 << endl;
  // }

  Node n1{1};
  Node n2{2};
  Node n3{3};
  Node n4{4};

  n4.next = static_cast<unique_ptr<Node>>(&n1);
  
  SinglyLinkedList list;


  cout << n1.next->data;
  return 0;
}