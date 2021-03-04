#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define vi vector<long long int>

long long int answer(vi a){
  long long int mx = -1;
  for(long long int i =0; i < a.size(); i++){
    mx = max(mx, a[i]);
  }
  long long int p = 0;
  long long int q = 0;
  for(long long int i = 0; i < a.size(); i++){
    if(a[i] == mx) p++;
    else{
      p = 0;
    }
    q = max(p, q);
  }
  return q;
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
  cout<<answer(a)<<endl;
}
