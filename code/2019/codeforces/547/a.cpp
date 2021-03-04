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


long long int answer(long long int n, long long int m){
  long long int q = m/n;
  if(m%n != 0) return -1;
  long long int ans = 0;
  while(q > 1){
    if(q % 2 == 0){
      ans++;
      q /= 2;
    }else if(q%3 == 0){
      ans++;
      q/=3;
    }else return -1;
  }
  return ans;
}

int main(){
  long long int n, m;
  cin>>n>>m;
  cout<<answer(n, m)<<endl;
}
