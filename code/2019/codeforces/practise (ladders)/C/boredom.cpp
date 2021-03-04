#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define mii map<long long int, long long int>
#define MAX 100002
// #define MAX 100
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



int main(){
  vi dp(MAX);
  vi count(MAX);
  long long int t;
  cin>>t;
  while(t--){
    long long int p;
    cin>>p;
    count[p] += 1;
  }
  dp[0] = 0;
  dp[1] = (count[1]);
  for(long long int i = 2; i <= MAX-1; i++){
    dp[i] = max(dp[i-1], count[i]*i + dp[i-2]);
  }
  // show(count);
  // show(dp);

  cout<<dp[MAX-1]<<endl;
}
