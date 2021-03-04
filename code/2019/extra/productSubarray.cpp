#include <bits/stdc++.h>
using namespace std;
#define vi vector<unsigned long long int>
#define mii map<unsigned long long int, unsigned long long int>

void show(vi a){
  unsigned long long int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void show(mii table){
  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->first<<" "<<i->second<<endl;
  }
}

unsigned long long int gen(unsigned long long int n, unsigned long long int k, unsigned long long int m){
  unsigned long long int p = k+1;
  unsigned long long int q = n+1;
  unsigned long long int w = 0;
  unsigned long long int ans = 1;
  while(p--){
    ans *= (q+w);
    ans %= m;
    // cout<<ans<<endl;
    w--;
  }
  ans/=(k+1);
  return ans;
  return 0;
}



int main(){
  unsigned long long int n, k, m;
  cin>>n>>k>>m;
  unsigned long long int ans = 0;
  for(unsigned long long int i = 1; i <= k; i++){
    ans += gen(n, i, m);
    cout<<ans<<endl;
    // ans = (ans%m + gen(n, i, m)%m)%m;
  }
  cout<<ans<<endl;
}
