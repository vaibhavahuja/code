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

  int n; cin>>n; vi a(n); for(int i = 0; i < n; i++) cin>>a[i];
  vi sumArr(n), diffArr(n);
  for(int i = 0; i < n; i++){
  	sumArr[i] = a[i] + i;
  	diffArr[i] = a[i] - i;
  }
  sort(sumArr.begin(), sumArr.end());
  sort(diffArr.begin(), diffArr.end());
  int ans = max(sumArr[sumArr.size()-1] - sumArr[0], diffArr[diffArr.size()-1] - diffArr[0]);
  cout<<ans<<endl;


}
