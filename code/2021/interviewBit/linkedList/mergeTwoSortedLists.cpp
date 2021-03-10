#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(vi a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}


class Node{
public:
	int data;
	Node *next;

	Node(int d){
		data = d;
		next = NULL;
	}
};



Node *merge(Node *a, Node *b){
	if(a == NULL) return b;
	if(b == NULL) return a;

	if(a->data < b->data) {a->next = merge(a->next, b); return a;}
	else {b->next = merge(a, b->next); return b;}

}

int main(){
  ios_base::sync_with_stdio(false);
  
  

}
