// Given a value N, if we want to make change for N cents, and we have infinite supply of each of S = { S1, S2, .. , Sm}
//  valued coins, how many ways can we make the change? The order of coins doesn’t matter.
// For example, for N = 4 and S = {1,2,3}, there are four solutions: {1,1,1,1},{1,1,2},{2,2},{1,3}. So output should be 4.
//  For N = 10 and S = {2, 5, 3, 6}, there are five solutions: {2,2,2,2,2}, {2,2,3,3}, {2,2,6}, {2,3,5} and {5,5}.
// So the output should be 5.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define vi vector<int>



//try for recursive solution
int answer(vi a, int i, int val){
  if(val < 0) return 0;
  if(val == 0) return 1;
  if(i < 0) return 0;

  return answer(a, i-1, val) + answer(a, i, val - a[i]);
}
//CORRECT solution

//dp solution

int answerdp(vi a, int i, int val){
  int dp[i+1][val+1];

  for(int k = 0; k < i+1; k++){
    for(int j = 0; j < val + 1; j++){
      dp[k][j] = 0;
    }
  }

  for(int k = 0; k < i+1; k++) dp[k][0] = 1;

  for(int k = 0; k <= i; k++){
    for(int j = 1; j <= val; j++){
      if(k - 1 >= 0) dp[k][j] += dp[k-1][j];
      if(j - a[k] >= 0) dp[k][j] += dp[k][j-a[k]];
    }
  }
  return dp[i-1][val];
}


int main(){
  int m;
  cin>>m;
  while(m--){
    vi a;
    int n;
    int q;
    cin>>q;
    while(q--){
      int p;
      cin>>p;
      a.push_back(p);
    }
    cin>>n;
    // cout<<answer(a, a.size(), n)<<endl;
    cout<<answerdp(a, a.size(), n)<<endl;
  }
}
