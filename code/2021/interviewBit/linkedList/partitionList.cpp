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

// Given a linked list and a value x, partition it such that all nodes less than x come before 
// nodes greater than or equal to x.
// You should preserve the original relative order of the nodes in each of the two partitions.
// For example,
// Given 1->4->3->2->5->2 and x = 3,
// return 1->2->2->4->3->5.

ListNode *partition(ListNode *head, int k){
	ListNode *temp = head;
	vector<int> ans;
	while(temp){
		ans.push_back(temp->val);
		temp=temp->next;
	}
	vector<int> q;
	for(int i = 0; i < ans.size(); i++){
		if(ans[i] < k){ q.push_back(ans[i]); ans[i] *= -1;}
	}
	for(int i = 0; i < ans.size(); i++){
		if(ans[i] >= 0) q.push_back(ans[i]);
	}

	temp = head;
	int i = 0;
	while(temp){
		temp->val = q[i];
		temp = temp->next;
		i++;
	}

	return head;
}


int main(){
  ios_base::sync_with_stdio(false);
  ListNode *head = createLL();
  ListNode *temp = partition(head, 3);
  displayLL(temp);
  

}
