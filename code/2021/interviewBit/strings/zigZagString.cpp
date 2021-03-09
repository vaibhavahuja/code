#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(vi a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}


string answer(string s, int n){
	map<int, string> table;
	for(int i = 0; i < n; i++) table[i] = "";

	int i = 0, dir = 1;
	int q = 0;
	
	while(i < s.size()){
		if(dir == 1){
			table[q] += s[i];
			q++;
			if((i+1)%n == 0) dir = 0;
		}else{
			table[q] += s[i];
			q--;
			if((i+1)%n == 0) dir = 1;
		}
		i++;
	}
	string ans = "";
	for(auto i : table){
		ans += i.second;
		cout<<i.first<<" "<<i.second<<endl;
	}
	return ans;	
}

int main(){
  ios_base::sync_with_stdio(false);
  string s; 
  int t; cin>>s>>t;
  // if(t == )
  cout<<answer(s, t)<<endl;
  

}
