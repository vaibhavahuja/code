#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}




int main(){
  ios_base::sync_with_stdio(false);
  // vi a = {0, 1, 2, 3};
  // vi a = {4, 0, 2, 1, 3};
  // int maxLen = 0;
  // for(int i = 0; i < a.size(); i++){
  // 	maxLen = max(maxLen, len(a[i]));
  // }
  // int mulFactor = pow(10, maxLen);
  // cout<<mulFactor<<endl;
  // [1, 0] -> [10, 0] -> [10, 01]
  int mulFactor = a.size();
  for(int i = 0; i < a.size(); i++){
  	// newVal*mulFactor + oldVal
  	a[i] = (a[a[i]]%mulFactor)*mulFactor + a[i]%mulFactor;
  }
  show(a);
  for(int i = 0; i < a.size(); i++){
  	a[i]/=mulFactor;
  }
  show(a);


  

}