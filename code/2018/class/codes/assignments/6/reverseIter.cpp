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

Node *reverse(Node *head){
  Node *pre = NULL;
  Node *cur = head;
  while(cur){
    Node *nxt = cur->next;
    cur->next = pre;
    pre = cur;
    cur = nxt;
  }
  return pre;
}



int main(){
  Node *head = createLL();
  display(reverse(head));
}
