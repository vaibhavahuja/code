//accepted

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ull unsigned long long int

ull gcd(ull a, ull b){
  if(a == 0 || b == 0) return 0;
  if(a == b) return a;
  if(a > b) return gcd(a-b, b);
  return gcd(a, b-a);
}

ull lcm(ull a, ull b){
  return (a*b)/gcd(a, b);
}

int main(){
  ull t;
  cin>>t;
  while(t--){
    ull n, a, b, k;
    cin>>n>>a>>b>>k;
    ull p = n/a + n/b - 2*(n/lcm(a, b));
    // cout<<p<<endl;
    if(p >= k) cout<<"Win"<<endl;
    else cout<<"Lose"<<endl;
  }
}
