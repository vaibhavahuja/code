//correct answer

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define mod 1000000007

int answer(long long int n, long long int k){
  long long int p = k;
  long long int q = n-1;
  while(q--){
    p = (p%mod*(k-1)%mod)%mod;
    // p *= k-1;
  }
  return (p)%1000000007;
}

int main(){
  long long int t;
  cin>>t;
  while(t--){
    long long int n, k;
    cin>>n>>k;
    cout<<answer(n,k)<<endl;
  }
}
