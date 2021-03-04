#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define mii map<long long int, long long int>

void show(vi a){
  long long int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void show(mii table){
  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->first<<" "<<i->second<<endl;
  }
}


int main(){
  long long int t;
  cin>>t;
  vi a;
  long long int sum = 0;
  while(t--){
    long long int q;
    cin>>q;
    a.push_back(q);
    sum += q;
  }
  vi c;
  long long int p;
  cin>>p;
  while(p--){
    long long int q;
    cin>>q;
    c.push_back(q);
  }
  sort(a.begin(), a.end());
  for(long long int i = 0; i < c.size(); i++){
    long long int val = a[a.size() - c[i]];
    cout<<sum-val<<endl;
  }
  // cout<<sum<<endl;
}
