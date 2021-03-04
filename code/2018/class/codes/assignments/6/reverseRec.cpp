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
  if(head == NULL || head->next == NULL) return head;
  Node *k = reverse(head->next);
  head->next->next = head;
  head->next = NULL;
  return k;

}



int main(){
  Node *head = createLL();
  display(reverse(head));
}
