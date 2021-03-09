#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(vi a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int sol(string a){
	reverse(a.begin(), a.end());
	int i = 0, ans = 0;;
	while(a[i] == ' ' && i < a.size()) i++;
	while(a[i] != ' ' && i < a.size()) {ans++; i++;}
	return ans;
}

int main(){
  ios_base::sync_with_stdio(false);
  string s = "helloi world";
  cout<<sol(s)<<endl;
  

}
