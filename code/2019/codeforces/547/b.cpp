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

long long int answer(string p){
  long long int i = 0;
  long long int ans = 0;
  long long int q = 0;
  while(i < p.length()){
    if(p[i] == '1') q++;
    else ans = max(ans, q), q = 0;
    i++;
  }
  return ans;
}

int main(){
  long long int t;
  cin>>t;
  string s = "";
  while(t--){
    char a;
    cin>>a;
    s += a;
  }
  string p = "";
  p += s;
  p += s;
  cout<<answer(p)<<endl;

}
