#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define vvi vector<vi>
void show(vi a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}



int main(){
  ios_base::sync_with_stdio(false);
  int n; cin>>n; 
  vvi a(2*n-1);
  int cx = n-1, cy = n-1;
  for(int i = 0 ; i < 2*n-1; i++){
  	for(int j = 0; j < 2*n-1; j++){
  		a[i].push_back(1 + max(abs(i-n+1), abs(j-n+1)));
  	}
  }

  for(int i = 0; i < a.size(); i++) show(a[i]);

}
