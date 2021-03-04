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

int answer(int k, string lr){
  mii table;
  table[k] += 1;
  int q = k;
  for(int i = 0; i < lr.length(); i++){
    if(lr[i] == 'L') q--;
    else q++;
    table[q] += 1;
  }
  int p = table.size();
  return p;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int a, b;
    string c;
    cin>>a>>b;
    cin>>c;
    cout<<answer(b, c)<<endl;
  }
}
