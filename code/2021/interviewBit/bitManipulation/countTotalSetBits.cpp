#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define pii pair<ll, ll>
#define vp vector<pii>
#define vs vector<string>
#define mii map<ll, ll>
void show(vi a){for(ll i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

#define MOD 1000000007

ll ans = 0;
ll findLargestPower2(ll n){
	ll q = 0;
	while((1<<q)<=n){
		q++;
	}
	return (q-1);
}

ll findAnswer(ll n){
	if(n != 0){
		ll x = findLargestPower2(n);
		// cout<<x<<endl;
		ans = (ans%MOD + ((((1<<(x-1))%MOD)*(x%MOD))%MOD + ((n - (1<<x) + 1)%MOD))%MOD)%MOD;

		ans%=MOD;
		findAnswer(n-(1<<x));
	}

	return ans%MOD;
}

int main(){
  ios_base::sync_with_stdio(false);
  ll p; cin>>p;
  cout<<findAnswer(p)<<endl;
}

