#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(vi a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int solution(vi a, int b){
	if(a.size() < 3) return 0;
	int i, j;
	sort(a.begin(), a.end());
	int ans = INT_MAX, sum;
	for(int k = 0; k < a.size()-2; k++){
		i = k+1, j = a.size()-1;
		while(i < j){
			int temp = a[i]+a[j]+a[k];
			int diff = abs(temp-b);
			if(diff == 0){
				return b;
			}
			if(diff < ans){
				ans = diff;
				sum = temp;
			}
			if(temp < b) i++;
			else j--;
		}
	}	
	return sum;
}


int main(){
  ios_base::sync_with_stdio(false);
  
  vi arr = {-1, 2, 1, -4};
  cout<<solution(arr, 1)<<endl;

}
