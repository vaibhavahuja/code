#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define pii pair<ll, ll>
#define vp vector<pii>
#define vs vector<string>
#define mii map<ll, ll>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

vi fact(1e7+5);


int main(){
  ios_base::sync_with_stdio(false);
  int k; cin>>k;
  int prev = 1;
  vi ans;ans.push_back(1);
  for(int i = 1; i<=k; i++){
  	int curr = (prev*(k-i+1))/i;
  	ans.push_back(curr);
  	prev = curr;
  }
  show(ans);
}