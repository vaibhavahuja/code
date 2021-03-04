#include <bits/stdc++.h>
using namespace std;
#define vp vector<pair<int, int>>
#define mii map<int, int>

void show(vp a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i].first<<" "<<a[i].second<<endl;
    i++;
  }
}

void show(mii table){
  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->first<<" "<<i->second<<endl;
  }
}


int main(){
  int n, m;
  cin>>n>>m;
  mii table;
  while(m--){
    int a, b;
    cin>>a>>b;
    table[a] = 0;
    table[b] = 0;
  }
  int q = 0;

  for(int i = 1; i<= n; i++){
    if(table.find(i) == table.end()){
      q = i;
      break;
    }
  }
  cout<<n-1<<endl;
  for(int i = 1; i <= n; i++){
    if(i != q){
      cout<<q<<" "<<i<<endl;
    }
  }

}
