#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define vi vector<long long int>

#define mod 1000000007

long long int answer(vi a, vi b){
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  long long int ans = 0;
  for(long long int i = 0; i < a.size(); i++){
    ans = (ans%mod + abs(a[i] - b[i])%mod)%mod;
  }
  return ans%mod;
}

int main(){
  int n;
  cin>>n;
  int p = n;
  vi a, b;
  while(n--){
    long long int q;
    cin>>q;
    a.push_back(q);
  }
  while(p--){
    long long int m;
    cin>>m;
    b.push_back(m);
  }
  cout<<answer(a, b)<<endl;
}
