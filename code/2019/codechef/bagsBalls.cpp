#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int  main(){
  long long int  k, n, r;
  cin>>n>>k>>r;
  long long int  m = 0;
  long long int  p = r;
  while(k > 0){
    // cout<<k<<" "<<r<<endl;
    k -= r;
    if(k >= 0) m++;
    r += p;
  }
  cout<<n-m<<endl;
  // cout<<m<<endl;

}
