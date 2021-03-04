#include <iostream>
using namespace std;
//isEmpty, push, pop, top

class Stack{
  class Node{
  public:
    int data;
    Node *next;

    Node(int d){
      data = d;
      next = NULL;
    }
  };


public:
  Node *head;

  Stack(){
    head = NULL;
  }
  bool isEmpty(){
    return (head==NULL);
  }
  void push(int d){
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
  }

  int pop(){
    if(!isEmpty()){
      Node *temp = head;
      head = head->next;
      return temp->data;

    }

  }

  int top(){
    if(isEmpty()) return -1;
    return head->data;
  }
};

//doing using 2 extra stacks;
Stack reverse(Stack s){
  Stack p;
  while(!s.isEmpty()){
    int x = s.pop();
    p.push(x);
  }
  return p;
}


int main(){
  Stack s;
  s.push(2);
  s.push(3);
  s.push(5);
  cout<<s.top()<<endl;
  // s.pop();
  // cout<<s.top()<<endl;
  Stack m;
  Stack p;
  m = reverse(s);
  p = reverse(m);
  s = reverse(p);
  cout<<s.top()<<endl;
  s.pop();
  cout<<s.top()<<endl;
  s.pop();
  cout<<s.top()<<endl;
  s.pop();
}
