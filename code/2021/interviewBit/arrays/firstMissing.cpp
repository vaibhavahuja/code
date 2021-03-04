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

  vi a = {1, 2, 0};
  int n = a.size();
  for(int i = 0; i < a.size(); i++){
  	if(a[i] > 0 && a[i] <= n){
  		int pos = a[i]-1;
  		if(a[pos] != a[i]){
  			swap(a[pos], a[i]);
  			i--;
  		}
  	}
  }

  for(int i = 0; i < n; i++){
  	if(a[i] != i+1) return i+1;
  }
  return n+1;
}