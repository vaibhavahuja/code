#include <iostream>
#include <map>
#include "linkedlist.h"
#include "modifiedLL.h"
#include <algorithm>
using namespace std;

void findSingleUsingMaps(string s){
  map <char,int> check;
  for(int i=0;i<s.length();i++){
    auto it = check.find(s[i]);
    if(it != check.end()){
      it->second++;
    }
    else{
      check.insert(pair <char, int> (s[i],1));
    }
  }

  for(auto it=check.begin(); it!=check.end();it++){
    if(it->second == 1){
      cout<<it->first<<" ";
    }
  }
}

int findIntersection(Node *head1, Node *head2){
  map<Node*, int> check;
  Node *temp = head1;
  while(temp){
    check.insert(pair <Node*, int>(temp, 1));
    temp=temp->next;
  }

  Node *temp2 = head2;
  while(temp2){
    auto it = check.find(temp2);
    if(it != check.end()){
      // cout<<"element of intersection is "<<
      return temp2->data;
    }
    temp2=temp2->next;
  }
  return -1;
}

void createIntersection(Node *head1, Node* head2, int x){
  Node *temp1 = head1;
  Node *temp2 = head2;
  while(x--){
    temp1=temp1->next;
    temp2=temp2->next;
  }
  temp2->next = temp1;
}

mNode *makenormalClone(mNode *head){
  mNode *tra = head;
  // tra=tra->next;
  mNode *temp1 = new mNode(tra->data);
  mNode *tail = temp1;
  while(tra){
    tail->next = new mNode(tra->data);
    tail=tail->next;
    tra=tra->next;
  }
  return temp1;
}
mNode *makeAdvancedClone(mNode *head1, mNode *head2){
  map<mNode*, mNode*> check;
  mNode *temp = head1;
  mNode *temp2 = head2;
  while(temp && temp2){
    check.insert(pair <mNode*, mNode*>(temp,temp2));
    temp=temp->next;
    temp2=temp2->next;
  }
  mNode *cra = head1;
  mNode *cra1 = head1;
  mNode *cra2 = head2;

  while(cra){
    auto it = check.find(cra1->random);
    cra2->random = it->second;
    cra1=cra1->next;
    cra2=cra2->next;
    cra=cra->next;
  }
  return head2;
}

int main(){
  // string s = "abcdeeffhhsadhhasbas";
  // findSingleUsingMaps(s);
  // Node *head1 = createLL();
  // Node *head2 = createLL();

  // createIntersection(head1,head2,2);
  // cout<<findIntersection(head1,head2);
  mNode *temp2 = createmodLL();
  // while(temp2){
  //   cout<<temp2->data<<" ";
  //   temp2=temp2->next;
  // }

  mNode *che = makenormalClone(temp2)->next;
  mNode *qw = makeAdvancedClone(temp2,che);
  while(che){
    cout<<che->data<<" ";
    cout<<che->random->data<<" ";
    che=che->next;
    cout<<endl;
  }


}
