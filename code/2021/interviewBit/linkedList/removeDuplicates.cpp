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
	if(head->next == NULL){
		return head;
	}
	ListNode *i = head, *j = head->next;

	while(j != NULL){
		if(j->val == i->val){
			while(i->val == j->val){
				j = j->next;
				if(j == NULL){
					break;
				}
			}
			i->next = j;
		}
		if(i == NULL || j == NULL) break;
		i = i->next;
		j = j->next;
		
	}

	return head;
}


int main(){
	ListNode *head = createLL();
	displayLL(head);
	ListNode *q = deleteDuplicates(head);
	displayLL(q);
}