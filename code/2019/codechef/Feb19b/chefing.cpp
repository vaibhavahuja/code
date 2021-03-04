//AC

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

#define vi vector<int>
#define miv map<char, vi>

void showv(vi a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void show(miv a){
  for(auto i = a.begin(); i != a.end(); i++){
    cout<<i->first<<" ";
    showv(i->second);
  }
}

int main(){
  int T;
  cin>>T;
  while(T--){
    int t;
    cin>>t;
    miv table;
    for(int i = 0; i < t; i++){
      string s;
      cin>>s;
      for(int j = 0; j < s.length(); j++){
        if(table.find(s[j]) == table.end()) table[s[j]].push_back(i);
        else{
          if(table[s[j]][table[s[j]].size() - 1] != i) table[s[j]].push_back(i);
        }
      }
    }
    int ans = 0;
    for(auto i = table.begin(); i != table.end(); i++){
      if(i->second.size() == t) ans++;
    }
    cout<<ans<<endl;
  }

}
