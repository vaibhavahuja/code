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


int main(){
  int t;
  cin>>t;
  int l = -1, r = -1;
  int i = 1;
  while(t--){
    int p;
    cin>>p;
    if(p == 1) r = i;
    else l = i;
    i++;
  }
  cout<<min(l, r)<<endl;
}
