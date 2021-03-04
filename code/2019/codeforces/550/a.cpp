
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

bool answer(string s){
  sort(s.begin(), s.end());
  if(s.length() == 1) return true;
  for(int i = 0; i < s.length() - 1; i++){
    if(s[i+1] - s[i] != 1) return false;
  }
  return true;
}


int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    if(answer(s)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
}
