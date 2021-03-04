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
    if(head == NULL){
      head = new Node(x);
      tail = head;
    }
    else{
      tail->next = new Node(x);
      tail = tail->next;
    }
    cin>>x;
  }
  return head;
}



Node *last(Node *head, int k){
  Node *temp1 = head;
  Node *temp2 = head;
  while(k--){
    temp1 = temp1->next;
  }

  while(temp1){
    temp1=temp1->next;
    temp2=temp2->next;
  }
  return temp2;
}

int main(){
  Node *head = createLL();
  Node *random;
  int k;
  cin>>k;
  random = last(head,k);
  cout<<random->data<<endl;
}
