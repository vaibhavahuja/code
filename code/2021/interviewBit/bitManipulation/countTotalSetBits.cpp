#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define MOD 1000000007
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

string toBinary(int i){
	string s= "";
	while(i > 0){
		s += (i%2) + '0';
		i/=2;
	}
	reverse(s.begin(), s.end());
	return s;
}

int countBits(int a){
	string s = toBinary(a);
	int ans = 1;

	int w = s.length();
	if(s == "1") return 1;
	for(int i = 0; i < w-1; i++){
		ans *= 2;
		ans %= MOD;	
	}	
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '1') ans++;
	}
	return ans;
}

int main(){
  ios_base::sync_with_stdio(false);

  int a; cin>>a;
  cout<<countBits(a)<<endl;
}