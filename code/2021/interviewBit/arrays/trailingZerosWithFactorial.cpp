#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int ans(int n){
	int ans = 0, q = 5, te = n;
	while(q < n){
		ans += n/q;
		q*=5;
	}
	return ans;
}

int main(){
  ios_base::sync_with_stdio(false);

  int n = 9247;
  cout<<ans(n)<<endl;

}