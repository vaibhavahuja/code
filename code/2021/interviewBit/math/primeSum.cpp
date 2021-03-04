#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

bool isPrime(int n){
	if(n < 2) return false;
	for(int i = 2; i*i <= n; i++){
		if(n%i == 0) return false;
	}
	return true;
}


int main(){
  ios_base::sync_with_stdio(false);

  int n; cin>>n;
  vi ans;
  for(int i = 2; i < n; i++){
  	if(isPrime(i) && isPrime(n-i)){ ans.push_back(min(i, n-i)); ans.push_back(max(i, n-i)); break;}
  }
  show(ans);
}