#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

vector<vi> a;

int main(){
  ios_base::sync_with_stdio(false);
  int n, m; cin>>n>>m;
  for(int i = 0; i < n; i++){
  	vi b(m); 
  	for(int j = 0; j < m; j++){ 
  		cin>>b[j];
  	}
  	a.push_back(b);
  }


  //will write my binary search here

  ll ans_low = 1, ans_high = 1e9;
  ll ans; 
  ll ind = ((n*m) + 1)/2;
  while(ans_low < ans_high){
  	ans = (ans_low + ans_high)/2;
  	int count = 0;
  	for(int i = 0; i < n; i++){
  		count = count + upper_bound(a[i].begin(), a[i].end(), ans) - a[i].begin();
  	}

  	if(ans < ind){
  		ans_low = ans+1;
  	}else ans_high = ans;
  }

  // return ans_low;

  cout<<ans_low<<endl;


  

}