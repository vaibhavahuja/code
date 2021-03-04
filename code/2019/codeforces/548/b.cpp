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

long long int answer(vi a){
  long long int i = a.size() - 1;
  long long int ans = a[i];
  long long int maxSofar = a[i];
  i--;
  while(i >= 0){
    // cout<<a[i]<<" "<<maxSofar<<endl;
    if(a[i] >= maxSofar){
      if(maxSofar <= 0) maxSofar == 0;
      else maxSofar -= 1;
    }else{
      maxSofar = a[i];
    }
    // cout<<maxSofar<<endl;
    ans += maxSofar;
    i--;
  }
  return ans;
}





int main(){
  long long int t;
  cin>>t;
  vi a;
  while(t--){
    long long int p;
    cin>>p;
    a.push_back(p);
  }
  cout<<answer(a)<<endl;
}
