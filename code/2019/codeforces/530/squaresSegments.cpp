//correct answer

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

long long int log2(long long int x){
  long long int m = 0;
  while(m*m < x){
    m++;
  }
  if(m*m == x) m++;
  return m-1;
}

long long int answer(long long int n){
  if(n == 1) return 2;
  long long int p = log2(n);
  if(p * p >= n) return 2*p;
  if(p * (p+1) >= n) return 2*p + 1;
  if(p * (p + 2) >= n) return 2*p + 2;
}


int main(){
    // int t;
    // cin>>t;
    // while(t--){
      long long int n;
      cin>>n;
      // cout<<log2(n)<<endl;
      cout<<answer(n)<<endl;
    // }

}
