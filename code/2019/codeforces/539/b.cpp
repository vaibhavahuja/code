#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define vi vector<long long int>

bool isPrime(long long int x){
  for(long long int i = 2; i <= sqrt(x); i++){
    if(x%i == 0) return false;
  }
  return true;
}

long long int answer(vi a, long long int sum){
  sort(a.begin(), a.end());
  long long int one = -1, two = -1;
  for(long long int i = 0; i < a.size(); i++){
    if(isPrime(a[i])){
      one = i;
      break;
    }
  }
  for(long long int i = a.size() - 1; i >=0; i--){
    // cout<<a[i]<<" "<<isPrime(a[i])<<endl;
    if(!isPrime(a[i])){
      two = i;
      break;
    }
  }
  // cout<<one<<" "<<two<<endl;
  if(one == -1 || two == -1) return sum;
  if(one == two) return sum;
  long long int p = 0;
  for(long long int i = 2; i <= sqrt(a[two]); i++){
    // cout<<i<<endl;
    if(a[two]%i == 0){
      p = i;
    }
  }
  sum -= (a[one] + a[two]);
  sum += a[one]*p;
  sum += a[two]/p;

  return sum;

}


int main(){
  long long int t;
  cin>>t;
  vi a;
  long long int sum = 0;
  while(t--){
    long long int p;
    cin>>p;
    sum += p;
    a.push_back(p);
  }
  cout<<answer(a, sum)<<endl;

}
