#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

bool compare(string a, string b){
	return ((b+a) < (a+b));
}

int main(){
  ios_base::sync_with_stdio(false);
  vs a = {"1", "0", "0", "0", "0"};

  sort(a.begin(), a.end(), compare);
  string ans = "";
  for(int i = 0; i < a.size(); i++) ans += a[i];
  cout<<ans<<endl;

}