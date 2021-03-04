#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>
#define miv map<int, vi>

void show(vi a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void show(miv table){
  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->first<<" ";
    show(i->second);
  }
}

void answer(vi a, int k){
  for(int i = 0; i < a.size(); i++){
    for(int j = i; j < a.size(); j++){
      if(abs(a[j]-a[i]) > k){
        cout<<"NO"<<endl;
        return;
      }
    }
  }
  miv table;
  for(int i = 0; i < a.size(); i++){
    int p = a[i];
    int j = 0;
    if(table.find(a[i]) != table.end()) continue;
    while(p--){
      table[a[i]].push_back(j%k + 1);
      j++;
    }
  }
  cout<<"YES"<<endl;
  for(int i = 0; i < a.size(); i++){
    sort(table[a[i]].begin(), table[a[i]].end());
    show(table[a[i]]);
  }
}

int main(){
  int n, k;
  cin>>n>>k;
  vi a;
  while(n--){
    int p;
    cin>>p;
    a.push_back(p);
  }
  answer(a, k);
}
