#include <iostream>
using namespace std;

class ListNode{
public:
	int val;
	ListNode *next;

	ListNode(int d){
		val = d;
		next = NULL;
	}
};


ListNode *createLL(){
	int x; cin>>x;
	ListNode *head = NULL;
	ListNode *tail = NULL;

	while(x != -1){
		ListNode *temp = new ListNode(x);
		if(head == NULL){
			head = temp;
			tail = temp;
		}else{
			tail->next = temp;
			tail = tail->next;
		}
		cin>>x;
	}
	return head;
}

void displayLL(ListNode *head){
	ListNode *temp = head;
	while(temp != NULL){
		cout<<temp->val<<" ";
		temp = temp->next;
	}
	cout<<endl;
}







