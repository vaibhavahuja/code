//correct solution; 
//good way reducing the stack avoiding segmentation fault

#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define mii map<long long int, long long int>

long long int answer(long long int a, long long int b, long long int c){
	if(b == 0) return 1%c;
	if(b%2 == 0) return ((answer(a, b/2, c)%c)*(answer(a, b/2, c)%c))%c;
	else return ((a%c)*(answer(a, b-1, c)%c));
}

int main(){
	long long int a, b, c;
	cin>>a>>b>>c;
	cout<<answer(a, b, c)<<endl;
  
}
