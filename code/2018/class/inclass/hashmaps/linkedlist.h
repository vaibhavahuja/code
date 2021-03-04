#include <iostream>
using namespace std;

class Node{
public:
  int data;
  Node *next;

  Node(int d){
    data = d;
    next = NULL;
  }
};


Node *createLL(){
  Node *head = NULL;
  Node *tail = NULL;
  int x;
  cin>>x;
  while(x != -1){
    Node *temp = new Node(x);
    if(head==NULL){
      head = temp;
      tail = temp;
    }
    else{
      tail->next = temp;
      tail=tail->next;
    }
    cin>>x;
  }
  return head;
}
