#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>

void show(vi a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void show(mii table){
  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->first<<" "<<i->second<<endl;
  }
}

void print(string s, int n, int q){
	for(int i = 0; i < q; i++){
		char p = (s[i] + n);
		if(p > 'z') p %= 'z', p += 'a' - 1;
		cout<<p;
	}
	cout<<endl;
}

int main(){
	string s;
	cin>>s;

	int t;
	cin>>t;
	int n = 0;
	while(t--){
		int a, b;
		cin>>a>>b;
		if(a == 1) n += b;
		else print(s, n, b);
	}

}
