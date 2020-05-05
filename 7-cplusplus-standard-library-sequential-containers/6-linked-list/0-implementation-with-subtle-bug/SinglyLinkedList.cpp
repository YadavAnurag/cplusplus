#include "SinglyLinkedList.hpp"
#include <memory>
#include <iostream>


SinglyLinkedList::SinglyLinkedList():head{nullptr}{
  std::cout << "Constructing SinglyLinkedList \n";
}
SinglyLinkedList::~SinglyLinkedList(){std::cout << "Destructing SinglyLinkedList \n"; }

void SinglyLinkedList::InsertAtHead(int const& value){
  // create of new node
  std::unique_ptr<Node> temp{std::make_unique<Node>(value)};

  // if list is not empty
  if(head){
    temp->next = std::move(head);
    head = std::move(temp);
  }else{
    head = std::move(temp);
  }
}

int SinglyLinkedList::Size() const{
  return 0;
}