#include <iostream>
using namespace std;

class Node{
public:
	int data;
	Node *next;

	Node(int d){
		data = d;
		next = NULL;
	}
};


Node *createLL(){
	int x; cin>>x;
	Node *head = NULL;
	Node *tail = NULL;

	while(x != -1){
		Node *temp = new Node(x);
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

void displayLL(Node *head){
	Node *temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

// void displayRecursive(Node *head){
// 	if(head->next == NULL){
// 		cout<<head->data<<" ";
// 		return;
// 	}
// 	cout<<head->data<<" ";
// 	displayRecursive(head->next);
// }

// void deleteNode(Node* &head, int value){
// 	Node *temp = head;
// 	Node *pre = NULL;
// 	if(temp->data == value){
// 		head = temp->next;
// 		return;
// 	}

// 	while(temp->data != value){
// 		pre = temp;
// 		temp = temp->next;
// 	}
// 	pre->next = temp->next;
// 	delete temp;
// }

// Node *reverseRec(Node *head){
// 	if(head == NULL || head->next == NULL){
// 		return head;
// 	}
// 	Node *temp = reverseRec(head->next);
// 	head->next->next = head;
// 	head->next = NULL;
// 	return temp;
// }

// Node *reverseIter(Node *head){
// 	Node *cur = head;
// 	Node *pre = NULL;
// 	Node *nxt = cur->next;

// 	while(cur){
// 		nxt = cur->next;
// 		cur->next = pre;
// 		pre = cur;
// 		cur = nxt;
// 	}
// 	return pre;
// }

// Node *mergeRecursive(Node *a, Node *b){
// 	if(a == NULL) return b;
// 	if(b == NULL) return a;

// 	if(a->data < b->data){
// 		a->next = mergeRecursive(a->next, b);
// 		return a;
// 	}else{
// 		b->next = mergeRecursive(a, b->next);
// 		return b;
// 	}
// }


// int main(){
//   ios_base::sync_with_stdio(false);
//   Node *head1 = createLL();
//   Node *head2 = createLL();
//   displayLL(mergeRecursive(head1,head2));
  
// 	// Node *head = createLL();
// 	// displayRecursive(head);
// 	// cout<<endl;  
// 	// // Node *m = head;
// 	// // Node *q = reverseRec(head);
// 	// // displayLL(q);

// 	// Node *mm = reverseIter(head);
// 	// displayLL(mm);

// 	// // deleteNode(head, 3);
// 	// // displayLL(head);

// }












