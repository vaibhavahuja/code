// i am getting wrong output. To ask tomorrow why?

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

// 4 2 2 1 8 7 6 5

Node *reverse(Node *head, int k){
  Node *pre = NULL;
  Node *nxt = NULL;
  Node *cur = head;
  int c = 0;
  while(cur && c < k){
    nxt = cur->next;
    cur->next = pre;
    pre = cur;
    cur = nxt;
    c++;
  }
  if(nxt != NULL){
    head->next = reverse(nxt,k);
  }
  return pre;
}


int main(){
  Node *head = createLL();
  int k;
  cin>>k;
  displayLL(reverse(head,k));
}
