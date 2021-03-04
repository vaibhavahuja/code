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
	string q = "";
	string m = "";
	for(int i = s.length() - 1; i>=0; i--){
		if(s[i] == '4') q += '3', m += '1';
		else q += s[i], m += '0';
	}
	reverse(m.begin(), m.end());
	reverse(q.begin(), q.end());
	m.erase(0, min(m.find_first_not_of('0'), m.size()-1));
	q.erase(0, min(q.find_first_not_of('0'), q.size()-1));

	cout<<"Case #"<<i<<": "<<m<<" "<<q<<endl;





	// int a, b;
	// a = stoi(m);
	// b = stoi(q);
	// cout<<a<<" ";
	// cout<<b<<endl;
}




int main(){
  int t;
  cin>>t;
  int i = 1;
  while(t--){
  	string s;
  	cin>>s;
  	answer(s, i);
  	i++;
  }
}
