#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(vi a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

vi makeLps(string s){
	int i = 1, j = 0;
	vi a(s.length());
	while(i < s.length()){
		if(s[i] == s[j]){
			j++;
			a[i] = j;
			i++;
		}else{
			if(j==0) i++;
			else j = a[j-1];
		}
	}
	return a;
}


int main(){
  ios_base::sync_with_stdio(false);
  string s = "aaaaa";
  string t = s;
  reverse(s.begin(), s.end());
  if(t==s) cout<<0<<endl;
  t+=s;
  vi q = makeLps(t);
  int ans = q[q.size()-1] - s.size();
  cout<<abs(ans)<<endl;
}
