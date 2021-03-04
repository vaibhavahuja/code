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
  long long int n,k;
  cin>>n>>k;

  mii table;
  while(n--){
    long long int p;
    cin>>p;
    table[p%k] += 1;
  }
  long long int ans = 0;
  for(auto i = table.begin(); i != table.end(); i++){
    if(i->first == 0){
      if(i->second%2 == 0) ans += i->second;
      else ans += i->second - 1;
    }else{
      if(table.find(k - i->first) != table.end()){
        if(k - i->first == i->first) ans += min(i->second, table[k-i->first]);
        else ans += min(i->second, table[k-i->first])*2;
        table[i->first] -= min(i->second, table[k-i->first]);
        if(table[k-i->first] != 0) table[k-i->first] -= min(i->second, table[k-i->first]);
      }
    }
  }
  cout<<ans<<endl;

}
