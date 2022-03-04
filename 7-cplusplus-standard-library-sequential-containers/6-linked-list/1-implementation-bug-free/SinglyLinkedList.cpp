#include "SinglyLinkedList.hpp"
#include <memory>
#include <iostream>


void SinglyLinkedList::Clean(){
  while(head){
    head = std::move(head->next);
  }
}

SinglyLinkedList::SinglyLinkedList():head{nullptr}{
  std::cout << "Constructing SinglyLinkedList \n";
}

SinglyLinkedList::SinglyLinkedList(SinglyLinkedList &&list){
  head = std::move(list.head);
}

SinglyLinkedList::~SinglyLinkedList(){
  std::cout << "Destructing SinglyLinkedList \n";
  Clean(); 
}


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

void SinglyLinkedList::RemoveAtHead(){
  if(head){
    head = move(head->next);
  }else{
    return;
  }
}

void SinglyLinkedList::Reverse(){
  if(head){
    SinglyLinkedList list; 
  
    while(head){
      list.InsertAtHead(head->data);
      head = std::move(head->next);
    }

    head = std::move(list.head);
  }else{
    return;
  }
}

int SinglyLinkedList::Size() const{
  Node* temp{head.get()};
  int size{};

  while(temp){
    temp = temp->next.get();
    size++;
  }
  return size;
}

bool SinglyLinkedList::Search(int value) const{
  if(head){
    Node* temp{head.get()};

    while(temp){
      if(temp->data == value){
        return true;
      }
      temp = temp->next.get();
    }

  }
  
  return false;
}

bool SinglyLinkedList::Remove(int value){
  // if head is to be deleted
  if(head->data == value){
    head = std::move(head->next);
    return true;
  }

  // if there is only one element in the list
  if(head->next == nullptr){
    if(head->data == value){
      head = std::move(head->next);
      return true;
    } 
  }

  // else
  Node* temp{head.get()};
  while(temp->next){
    if(temp->next->data == value){
      temp->next = std::move(temp->next->next);
      return true;
    }
    temp = temp->next.get();
  }

  return false;
}

