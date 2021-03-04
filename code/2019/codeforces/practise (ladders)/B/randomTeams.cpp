//correct answer

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define vi vector<long long int>

long long int mini(long long int n, long long int m){
  long long int p = n/m;
  long long int q = n%m;
  long long int ans = 0;
  for(long long int i = 0; i < m-q; i++){
    ans += p*(p-1)/2;
  }
  for(long long int i = m-q; i < m; i++) ans += (p+1)*(p)/2;    //okayyy

  return ans;
}

long long int maxi(long long int n, long long int m){
  return (n-m+1)*(n-m)/2;
}

int main(){
  long long int a, b;
  cin>>a>>b;
  cout<<min(mini(a, b), maxi(a, b))<<" "<<max(mini(a, b), maxi(a, b))<<endl;
}
