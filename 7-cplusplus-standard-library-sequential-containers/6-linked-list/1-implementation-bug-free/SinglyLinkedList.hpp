#pragma once
#include <memory>
#include <iostream>

struct Node{
  int data{}; // declaration & initialization
  std::unique_ptr<Node> next{nullptr};  // declaration & initialization

  Node(int value): data{value}, next{nullptr} {} // constructor
  ~Node(){ 
    // std::cout<< "Destroy node with data " << data <<std::endl; 
  } // desctructor
  //nodes of linked list always destory recursively
};

class SinglyLinkedList{
  private:
    std::unique_ptr<Node> head{nullptr};

    void Clean(); // use to avoid stackoverflow
  public:
    SinglyLinkedList();
    SinglyLinkedList(SinglyLinkedList &&list); // move constructor
    ~SinglyLinkedList();
    Node* Head() const { return head.get();} ;
    void InsertAtHead(int const& val); // insert at start
    void RemoveAtHead();
    void Reverse();
    int Size() const;
    bool Search(int value) const;
    bool Remove(int value);

    
  friend std::ostream& operator<<(std::ostream &os, const SinglyLinkedList &list){
    os << "[ ";
    
    Node* head = list.head.get();
    while(head){
      os << head->data << ' ';
      head = head->next.get();
    }
    os << "]";

    return os;
  }
};