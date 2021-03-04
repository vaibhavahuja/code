#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long long long int>
#define mii map<long long int, long long int>

bool isPrime(long long int n){
  for(long long int i = 2; i*i <= n; i++){
    if(n % i == 0) return false;
  }
  return true;
}


long long int answer(long long int a){
  long long int ans = 0;
  for(long long int i = 1; i < a; i++){
    ans = max(ans, __gcd(a & i, a ^ i));
  }
  return ans;
}

long long int ans2(long long int a){
  long long int i = 2;
  while(i <= a){
    i *= 2;
  }
  if(i != a + 1) return (i-1);
  if(i - 1 == a){
    for(int i = 2; i*i <= a; i++){
      if(a % i == 0){
        return a/i;
      }
    }
  }
  return (1);
}

int main(){
  long long int t;
  cin>>t;
  while(t--){
    long long int a;
    cin>>a;
    cout<<ans2(a)<<endl;
  }
}
