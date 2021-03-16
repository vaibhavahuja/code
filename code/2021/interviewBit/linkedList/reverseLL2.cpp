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

ListNode *reverseLL(ListNode *head, int B, int C){
	if(B != 1){
		head->next = reverseLL(head->next, B-1, C-1);
		return head;
	}else{
		ListNode *pre = NULL, *cur = head, *nxt = NULL;
		int i = 0;
		while(i < C){
			nxt = cur->next;
			cur->next = pre;
			pre = cur;
			cur = nxt;
			i++;
		}
		head->next = cur;
		return pre;
	}
	
}


int main(){
  ios_base::sync_with_stdio(false);
  ListNode *head = createLL();
  // displayLL(head);
  ListNode *reverse = reverseLL(head, 2, 4);
  displayLL(reverse);
  

}
