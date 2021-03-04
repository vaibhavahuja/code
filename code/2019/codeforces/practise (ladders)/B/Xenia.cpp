#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define vi vector<long long int>

long long int getTime(long long int n, long long int u, long long int v){
  if(u == v) return 0;
  if(u < v) return v-u;
  if(u > v) return (n - abs(v-u));
}

long long int answer(long long int n, vi a){
  long long int ans = 0;
  long long int u = 1;
  for(long long int i = 0; i < a.size(); i++){
    ans += getTime(n, u, a[i]);
    u = a[i];
  }
  return ans;
}


int main(){
  long long int n, m;
  vi a;
  cin>>n>>m;
  while(m--){
    long long int p;
    cin>>p;
    a.push_back(p);
  }
  cout<<answer(n, a)<<endl;
}
