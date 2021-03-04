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


Node *createLL(int t){
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
void displayLL(Node *head){
  Node *temp = head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
}

Node *mergeSorted(Node *a, Node *b){
  if(a==NULL) return b;
  if(b==NULL) return a;
  if(a->data < b->data){
    a->next = mergeSorted(a->next,b);
    return a;
  }
  else{
    b->next = mergeSorted(a,b->next);
    return b;
  }
}


int main(){
  int a,b;
  cin>>a;
  cin>>b;
  Node *head = createLL(a);
  Node *head2 = createLL(b);
  displayLL(mergeSorted(head,head2));



}
