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


Node *midNode(Node *head){
  Node *temp1 = head;
  Node *temp2 = head;
  while(temp1 && temp2->next && temp2->next->next){
    temp2 = temp2->next->next;
    temp1 = temp1->next;
  }
  return temp1;
}


Node *mergeSort(Node *a){
  if(a==NULL || a->next == NULL) return a;
  Node *mid = midNode(a);
  Node *b = mid->next;
  mid->next = NULL;
  a = mergeSort(a);
  b = mergeSort(b);
  Node *out = mergeSorted(a,b);
}




int main(){
  Node *a = createLL();
  displayLL(mergeSort(a));



}
