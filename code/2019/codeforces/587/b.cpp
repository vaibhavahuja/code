#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>
#define pi pair<int, int>
#define vp vector<pi>



void show(auto a){
  // int i = 0;
  for(int i = a.size() - 1; i >= 0; i--){
  	cout<<a[i].second<<" ";
  }
  cout<<endl;
}


int main(){
	int t;
	cin>>t;
	vp a;
	
	for(int i = 0; i < t; i++){
		pi P;
		P.second = i+1;
		int m;
		cin>>m;
		P.first = m;
		a.push_back(P);
	}

	sort(a.begin(), a.end());
	// show(a);

  	int m = 0;
  	int ans = 0;
  	for(int i = a.size() - 1; i>=0; i--){
  		ans += (1 + m*(a[i].first));
  		m++;
  	}

  	cout<<ans<<endl;
  	show(a);

}














