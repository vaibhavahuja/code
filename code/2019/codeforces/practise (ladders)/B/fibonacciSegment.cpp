//ac
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


long long int answer(vi a){
  if(a.size() <= 2) return a.size();
  vi b;
  for(long long int i = 0; i < a.size() - 2; i++){
    // cout<<a[i]<<" "<<a[i+1]<<" "<<a[i+2]<<endl;
    if(a[i] + a[i+1] == a[i+2]) b.push_back(1);
    else b.push_back(0);
  }
  long long int ans = 0;
  long long int mx = 0;
  for(long long int i = 0; i < b.size(); i++){
    if(b[i] == 1)ans++;
    else{
      ans = 0;
    }
    mx = max(ans, mx);
  }
  return mx+2;
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
