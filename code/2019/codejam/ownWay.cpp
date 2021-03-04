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

void answer(string s, int i){
	string ans = "";
	for(int i = 0; i < s.length(); i++){
		if(s[i] == 'E') ans += 'S';
		else ans += 'E';
	}
	cout<<"Case #"<<i<<": "<<ans<<endl;
}

int main(){
  int t;
  cin>>t;
  int i = 1;
  while(t--){
  	int p;
  	cin>>p;
  	string q;
  	cin>>q;
  	answer(q, i);
  	i++;
  }
}
