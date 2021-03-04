#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, vi>

#define mod 1000000007


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
    cout<<i->first<<" ";
    show(i->second);
  }
}

int calPow(int a, int b){
  int p = a;
  int ans = 1;
  while(b--){
    ans = ((ans%mod)*(p%mod))%mod;
  }
  return ans;
}

void answer(mii table, int v, bool &visited){
  visited[v] = true;
  cout<<v<<" ";
  for(auto i = table[v].begin(); i != table[v].end(); i++){
    if(!visited[*i]){
      answer(table, *i, visited);
    }
  }
}



int main(){

  int n, k;
  cin>>n>>k;
  int q = (n-1);
  mii table;
  while(q--){
    int u, v, r;
    cin>>u>>v>>r;
    if(r == 0){
      table[u].push_back(v);
      table[v].push_back(u);
    }
  }
  bool visited(n+1, false);
  answer(table, 1, visited);

  show(table);

}
