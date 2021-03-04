#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>

void show(vi a){
  int i = 0;
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

int answer(vi a, int m){
  sort(a.begin(), a.end());
  // show(a);
  int ans = 0;
  int i = 0;
  while(m--){
    if(a[i] > 0) return ans;
    ans += abs(a[i]);
    i++;
  }
  return ans;
}

int main(){
  int a, b;
  cin>>a>>b;
  vi c;
  while(a--){
    int p;
    cin>>p;
    c.push_back(p);
  }
  cout<<answer(c, b)<<endl;
}
