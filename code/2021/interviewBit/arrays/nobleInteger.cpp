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
  // vi a = {3, 2, 1, 3};
  // vi a = {1,1};
  vi a = {-4, -2, 0, -1, -6};

  sort(a.begin(), a.end());
  if(a[a.size()-1] == 0) return 1;
  int n = a.size();
  int i = a.size()-2, x = 0;
  int ans = -1;
  while(i >= 0){
  	if(a[i] == a[i+1]) x++;
  	else x = 0;

  	if(n-i-x-1 == a[i]){
  		ans = 1;
  		break;
  	}
  	i--;
  }
  cout<<ans<<endl;
  return ans;

  

}