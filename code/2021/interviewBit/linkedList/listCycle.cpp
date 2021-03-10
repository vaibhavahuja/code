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

ListNode *cycleDetection(ListNode *head){
	if(head == NULL || head->next == NULL) return NULL;
	ListNode *first = head->next, *second = head->next->next;
	ListNode *temp = head;
	while(second && second->next){
		if(second == first) break;
		second = second->next->next;
		first = first->next;
	}

	if(first != second){
		return NULL;
	}
	//cycle detected 
	while(temp != second){
		temp = temp->next;
		second = second->next;
	}	

	return temp;
}



int main(){
  ios_base::sync_with_stdio(false);
  
  

}
