#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(vi a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int answer(vi a, int b){
	int numZeros = 0, ans = -1;
	int i = 0, j = 0;
	while(j < a.size() && i < a.size()){
		if(a[j] == 0){
			numZeros++;
		}

		if(numZeros > b){
			while(a[i] != 0 && i < a.size()) i++;
			i++;
			numZeros--;
		}
		ans = max(ans, j-i+1);
		j++;
	}

	return ans;

}


int main(){
  ios_base::sync_with_stdio(false);
  vi a = { 1, 0};
  cout<<answer(a, 1)<<endl;
  

}
