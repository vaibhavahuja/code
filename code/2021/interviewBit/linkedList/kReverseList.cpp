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



ListNode *reverseK(ListNode *head, int k){

	int cnt = 0;
	ListNode *pre = NULL, *cur = head, *nxt = NULL;
	while(cur != NULL && cnt < k){
		nxt = cur->next;
		cur->next = pre;
		pre = cur;
		cur = nxt;
		cnt++;
	}

	if(nxt != NULL){
		head->next = reverseK(nxt, k);
	}

	return pre;
}

int main(){
  ios_base::sync_with_stdio(false);

  ListNode *head = createLL();
  ListNode *temp = reverseK(head, 5);

  displayLL(temp);  

}
