//wrong answer idk why?

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include <map>

#define vi vector<int>
#define miv map<int, vi>
#define mii map<int, int>

void show(vi a){
  for(int i = 0; i < a.size(); i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}


int find(int p, miv table, int ok){
  if(table.find(p) == table.end()) return 0;

  for(int i = 0; i < table[p].size(); i++){
    int currentNode = table[p][i];
    ok =  min(1 + find(currentNode, table, ok), ok);
  }
  return ok;

}

int findHeight(miv table){
  mii heightCheck;
  int ok = 1e5;
  // int ok = 0;
  int d = table[1].size();
  for(int i = 0; i < table[1].size(); i++){
    heightCheck[table[1][i]] = find(table[1][i], table, ok);
  }
  // int a = i->second;
  auto q = heightCheck.begin();
  int check = q->second;
  for(auto i = heightCheck.begin(); i != heightCheck.end(); i++){
    if(i->second != check) return 0;
    // cout<<i->first<<" "<<i->second<<endl;
  }
  return 1;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    miv table;
    int n,s;
    cin>>n>>s;
    int m = n-1;
    while(m--){
      int a, b;
      cin>>a>>b;
      table[a].push_back(b);
    }
    // cout<<" okay as "<<endl;
    // cout<<findHeight(table)<<endl;
    if(findHeight(table) == 1){
      int ans = 0;
      if(s%(n-1) > 0) ans+= 1;
      ans += s/(n-1);
      cout<<ans<<endl;
    }else cout<<0<<endl;
    // cout<<endl;
    // for(auto i = table.begin(); i != table.end(); i++){
    //   cout<<i->first<<" ";
    //   show(i->second);
      // cout<<endl;
    // }
    // cout<<"ok"<<endl;
    // cout<<s/(n-1)<<" "<<(s%(n-1))<<" ";
    // cout<<0<<endl;
  }
}
