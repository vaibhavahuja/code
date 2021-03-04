#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

string convertBinary(int i){
	string s ="";
	while(i > 0){
		s += (i%2) + '0';
		i/=2;
	}
	reverse(s.begin(), s.end());
	return s;
}

int countBits(int i){
	int ans = 0;
	while(i > 0){
		ans += (i&1);
		i/=2;
	}
	return ans;
}

int main(){
  ios_base::sync_with_stdio(false);

  int i; cin>>i;
  cout<<convertBinary(i)<<endl;
  cout<<convertBinary(i-1)<<endl;

  // cout<<countBits(i)<<endl;

}