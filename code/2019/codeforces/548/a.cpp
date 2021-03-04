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
  string s;
  cin>>t>>s;
  int i = 0;
  int ans = 0;
  while(i < s.length()){
    int p = s[i] - '0';
    if(p % 2 == 0){
      ans += (i + 1);
    }
    i++;
  }
  cout<<ans<<endl;
}
