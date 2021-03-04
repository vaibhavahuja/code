#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i].first<<","<<a[i].second<<" ) ";}cout<<endl;}

int main(){
  ios_base::sync_with_stdio(false);
  int n; cin>>n;
  vp a(n); 
  for(int i = 0; i < n; i++){
  	int f, s; cin>>f>>s;
  	a[i] = pii(f, s);
  }

  int x, y; cin>>x>>y;
  vp ans;
  int x1, y1;
  for(int i = 0; i < n; i++){
  	x1 = a[i].first, y1 = a[i].second;
  	if(y <= x1 || x >= y1 ){
  		//does not overlap
  		//place it 
  		if(y1 < x){
  			ans.push_back(pii(x1, y1));
  			// ans.push_back(pii(x, y));
  		}else{
  			ans.push_back(pii(x, y));
  			// ans.push_back(pii(x1, y1));
  			x = x1; y = y1;
  		}
  	}else{
  		//merge and this is my new interval
  		x = min(x1, x);
  		y = max(y1, y);
  	}
  	show(ans);
  }
  // if(ans[ans.size()-1] != pii(x, y)) 
  ans.push_back(pii(x, y));

  show(ans);
}