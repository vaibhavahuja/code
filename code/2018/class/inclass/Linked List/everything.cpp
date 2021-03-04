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


void deleteNode(Node* &head, int value){
  Node *temp = head;
  Node *pre = NULL;
  if(temp->data = value){
    head = temp->next;
    return;
  }
  while(temp->data != value){
    // cout<<temp->data<<endl;
    pre = temp;
    temp = temp->next;
    // cout<<pre->data;
  }
  pre->next = temp->next;
  delete temp;
}

void displayLL(Node *head){
  Node *temp = head;
  while(temp){
    cout<<temp->data<<"->";
    temp=temp->next;
  }
  cout<<endl;
}

//reversing a ll using recursion. think of it as (1->2->3->4->5); 2 to 5 is already reversed (using recursion) and you just need to reverse
Node *reverseRec(Node *head){
  if(head==NULL || head->next==NULL){
    return head;
  }
  Node *temp = reverseRec(head->next);  //stores head of reversed list starting from 2 (2->3->4->5); hence will store 5 in the end.
  head->next->next = head;
  head->next = NULL;
  return temp;
}

Node *reverseIter(Node *head){
  Node *pre = NULL;
  Node *cur = head;
  Node *nxt = cur->next;
  while(cur){
    nxt = cur->next;
    cur->next = pre;
    pre = cur;
    cur = nxt;
  }
  return pre;
}

Node *mergeRecursive(Node *a, Node *b){
  if(a==NULL) return b;
  if(b==NULL) return a;
  if(a->data<b->data){
    a->next = mergeRecursive(a->next, b);
    return a;
  }
  else{
    b->next = mergeRecursive(a,b->next);
    return b;
  }
}

// to do, merge linked lists iteratively; do it tomorrow.

int main(){
  Node *head1 = createLL();
  Node *head2 = createLL();
  displayLL(mergeIterative(head1,head2));


  // displayLL(reverseIter(head));


  // displayLL(reverseRec(head));
  // displayLL(head);

  // deleteNode(head, 3);
  // displayLL(head);
}
