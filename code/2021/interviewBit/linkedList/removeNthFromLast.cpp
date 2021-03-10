#include <bits/stdc++.h>
#include "linkedList.h"
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(vi a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}


ListNode *removeFromEnd(ListNode *head, int k){
	ListNode *temp = head;
	ListNode *pre = head;
	while(k--){
		temp = temp->next;
		if(temp == NULL) return head->next;
	}
	ListNode *prep;

	while(temp!=NULL){
		temp = temp->next;
		prep = pre;
		pre = pre->next;
	}

	prep->next = pre->next;
	return head;
}

int main(){
  ios_base::sync_with_stdio(false);
  ListNode *head = createLL();
  displayLL(head);
  ListNode *t = removeFromEnd(head, 5);
  displayLL(t);
  

}
