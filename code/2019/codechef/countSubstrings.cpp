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
long long int answer(string s){
  long long int i = 0;
  long long int sum = 0;
  while(i < s.length()){
    if(s[i] == '1') sum++;
    i++;
  }
  return ((sum)*(sum+1))/2;
}


int main(){
  long long int t;
  cin>>t;
  while(t--){
    long long int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<answer(s)<<endl;
  }
}
