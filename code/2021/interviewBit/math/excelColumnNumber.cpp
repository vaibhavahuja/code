#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int main(){
  ios_base::sync_with_stdio(false);

  int n; cin>>n;
  string ans = "";
  while(n > 0){
  	ans += n%26 + 'A' - 1;
  	// cout<<n%26<<endl;
  	n/=26;
  }
  reverse(ans.begin(), ans.end());
  cout<<ans<<endl;

}