// do this tomorrow.

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
  int t;
  cin>>t;
  Node *head = NULL;
  Node *cur = NULL;
  while(t--){
    int x;
    cin>>x;
    Node *temp = new Node(x);
    if(head == NULL){
      head = temp;
      cur = temp;
    }
    else{
      cur->next = temp;
      cur = cur->next;
    }
  }
  return head;
}


void display(Node *head){
  Node *temp = head;
  while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}

int length(Node *head){
  Node *temp = head;
  int t=0;
  while(temp){
    temp = temp->next;
    t++;
  }
  return t;
}

Node *nextGenerator(Node *temp, int t){
  while(t--){
    temp = temp->next;
  }
  return temp;
}

Node *reverse(Node *head, int t){
  Node *temp = head;
  Node *cur = head;
  for(int i=1;i<t;i++){
    while(nextGenerator(temp,i)){
      int m = temp->data;
      temp->data = temp->next->data;
      temp->next->data = m;
      temp = temp->next;
    }
    temp = cur;
  }
  return head;
}

int main(){
  Node *head = createLL();
   // reverse(head,length(head));
  display(reverse(head, length(head)));
}
