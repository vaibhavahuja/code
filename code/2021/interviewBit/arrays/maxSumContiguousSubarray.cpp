#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int kadane(vi a){
	int curSum = 0, bestSoFar = 0;
	for(int i = 0; i < a.size(); i++){
		curSum += a[i];
		bestSoFar = max(curSum, bestSoFar);
		if(curSum < 0) curSum = 0;
	}
	return bestSoFar;
}

int main(){
  ios_base::sync_with_stdio(false);

  vi a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int ans = kadane(a);
  cout<<ans<<endl;
}