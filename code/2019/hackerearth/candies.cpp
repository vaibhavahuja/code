#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define vi vector<long long int>

long long int sum(vi a){
  long long int i = 0;
  long long int sum = 0;
  while(i < a.size()){
    sum += a[i];
    i++;
  }
  return sum;
}

int main(){
  long long int t;
  cin>>t;
  vi a;

  while(t--){
    long long int p;
    cin>>p;
    a.push_back(p);
  }

  long long int p = 1;
  vi b;
  for(long long int i = 0; i < a.size(); i++){
    b.push_back(1);
  }
  // show(b);
  for(long long int i = 0; i <a.size()-1; i++){
    if(a[i+1] > a[i]) b[i+1] = b[i]+1 ;
  }
  // show(b);

  for(long long int i = a.size() - 1; i > 0; i--){
    // cout<<a[i-1]<<" "<<a[i]<<" "<<b[i-1]<<endl;
    if(a[i-1] > a[i]) b[i-1] = max(b[i-1], b[i]+1);
  }
  cout<<sum(b)<<endl;
  // show(b);
}
