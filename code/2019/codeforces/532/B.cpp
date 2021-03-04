#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

#define vi vector<int>
#define mii map<int, int>

void printTable(mii table){
  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->first<<" "<<i->second<<endl;
  }
}


string answer(mii table, vi a, int n){
  string ans = "";
  for(int i = 0; i < a.size(); i++){
    // cout<<ans<<endl;
    table[a[i]] += 1;
    if(table.size() == n) ans += '1';
    else ans += '0';

    if(table.size() == n){
      for(int i = 1; i <= n; i++){
        table[i] -= 1;
        if(table[i] == 0) table.erase(i);
        // printTable(table);
        // cout<<endl;
      }
    }
  }
  return ans;
}

int main(){
  int n, k;
  cin>>n>>k;
  vi a;
  while(k--){
    int o;
    cin>>o;
    a.push_back(o);
  }
  mii table;
  cout<<answer(table, a, n)<<endl;
}
