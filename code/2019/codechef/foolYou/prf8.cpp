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

bool ans(string s){
  if(s[s.length() - 1] == '1') return false;
  return true;
}


int main(){
  string s;
  cin>>s;
  if(ans(s)) cout<<"Perfect"<<endl;
  else cout<<"Not Perfect"<<endl;
}
