#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define mod 1000000007


long long int answer(long long int x, long long int y, long long int n){
  if(n == 1) return x%mod;
  if(n == 2) return y%mod;
  if(n == 3) return (y%mod - x%mod)%mod;
  if(n == 4) return (-1*x)%mod;
  if(n == 5) return (-1*y)%mod;
  if(n == 0) return (-1*y + x)%mod;
}

int main(){
  long long int x, y, n;
  cin>>x>>y>>n;
  n %= 6;
  long long int m = 0;
  // cout<<answer(x, y, n)<<endl;
  if(answer(x, y, n) < 0) m = mod + answer(x, y, n);
  else m = answer(x, y, n);

  cout<<m<<endl;
}
