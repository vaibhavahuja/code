// time limit exceeded

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long int  get(long long int  n){
  long long int  b = 0;
  while(n > 0){
    b += n & 1;
    n /= 2;
  }
  return b;
}

long long int  answer(long long int  a){
  long long int  p = 0;
  long long int  ans = 0;
  while(ans < a){
    ans += get(p);
    // cout<<ans<<" "<<get(p)<<endl;
    p++;
  }
  return p-1;
}

int  main(){
  long long int  t;
  cin>>t;
  while(t--){
    long long int  n;
    cin>>n;
    cout<<answer(n)<<endl;
  }

}
