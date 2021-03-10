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

int isPalin(ListNode *head){
	vi a;
	ListNode *temp = head;
	while(temp != NULL){
		a.push_back(temp->val);
		temp=temp->next;
	}

	vi b = a;
	reverse(b.begin(), b.end());
	return (a==b)?1:0;

}

int main(){
  ios_base::sync_with_stdio(false); 

  ListNode *head = createLL();  
  // displayLL(head);
  cout<<isPalin(head)<<endl;
}
