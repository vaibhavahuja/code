#include <iostream>
using namespace std;

class Queue{
  class Node{
  public:
    int data;
    Node *next;
    Node(int d){
      data = d;
      next = NULL;
    }
  };
  Node *head;
  Node *tail;
public:
  Queue(){
    head = NULL;
    tail = NULL;
  }

  bool empty(){
    return(head==NULL && tail==NULL);
  }

  int top(){
    if(!empty()){
      return head->data;
    }
    else return -1;
  }

  void push(int x){
    if(empty()){
      head = new Node(x);
      tail = head;
    }
    else{
      Node *temp = new Node(x);
      tail->next = temp;
      tail = temp;
    }
  }

  void pop(){
    if(empty()) return;
    Node *temp = head;
    head = head->next;
    delete temp;
  }

  void show_first(){
    cout<<tail->data<<endl;
  }
};

int main(){
  Queue q;
  cout<<q.top()<<endl;
  q.push(1);
  q.push(2);
  q.push(4);
  cout<<q.top()<<endl;
  q.show_first();
  q.pop();
  cout<<q.top()<<endl;
  q.push(3);
  q.show_first();
}
