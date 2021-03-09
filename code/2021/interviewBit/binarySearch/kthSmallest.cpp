#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(vi a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

//can be solved using binary search

int answer(vi a, int b){

	int low = 1, hi = 1e9+5, potentialAnswer, mid;
	while(low <= hi){
		mid = (low + hi)/2;
		int numLow = 0, equal = 0;
		bool exists = false;
		for(int i = 0; i < a.size(); i++){
			if(a[i] < mid) numLow++;
			else if(a[i] == mid) equal++;
		}
		if(numLow < b && numLow+equal >= b){
			return mid;
		}
		else if(numLow >= b){
			hi = mid-1;
		}else low = mid+1;

		// else if(numLow < b && numLow + equal < b){
		// 	low = mid+1;
		// }
	}
	return potentialAnswer;
}

int main(){
  ios_base::sync_with_stdio(false);
  
  vi a = {2, 1, 4, 3, 2};
  cout<<answer(a, 3)<<endl;

}
