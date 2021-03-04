#include <bits/stdc++.h>
using namespace std;
#define vi vector<string>
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
  vi a = {"2","1729","87539319","6963472309248","48988659276962496", "24153319581254312065344"};
  int t;
  cin>>t;
  string s;
  cin>>s;
  int p = s[s.length() - 1] - '0';
  cout<<a[p%a.size()]<<endl;


}
