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

ListNode *deleteDuplicates(ListNode *head){
	if(head->next == NULL) return head;
	ListNode *i = head, *j = head, *k = head->next;
	ListNode *ans;
	while(k != NULL){
		if(k->val == j->val){
			while(k->val == j->val){
				int q = k->val;
				k=k->next;
				if(k == NULL){ if(q == i->val){ return NULL;} i->next = NULL; return head;}
			}
			if(i == j){
				i = k;
				j = k;
				k = k->next;
				head = i;
			}else{
				i->next = k;
				j = k;
				k = k->next;
			}

		}else{
			i = j;
			k = k->next;
			j = j->next;
		}
		

	}
	return head;
}


int main(){
  ios_base::sync_with_stdio(false);
  ListNode *head = createLL();
  displayLL(head);  
  ListNode *temp = deleteDuplicates(head);
  displayLL(temp);

}
