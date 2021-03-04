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
  // int n = 3;
  // vector<string> s(n); for(int i = 0; i < n; i++) cin>>s[i];
  vs s = {"0.097213", "0.201885", "0.337909", "0.284558", "0.605286", "2.184695", "1.729887", "2.388816", "1.787512", "1.889604"};
  int n = s.size();

  vector<double> a(n);
  for(int i = 0; i < n; i++) a[i] = stod(s[i]);

  sort(a.begin(), a.end());
  
  int p1 = 0, p2 = 1, p3 = 2;
  // cout<<a[p1]+a[p2]+a[p3]<<endl;
  int ans = 0;
  while(p1 < n-2){
  	// cout<<p1<<" "<<p2<<" "<<p3<<endl;
  	cout<<a[p1]+a[p2]+a[p3]<<endl;
  	if(a[p1]+a[p2]+a[p3] < 2 && a[p1]+a[p2]+a[p3] > 1) {ans = 1; break;}
  	else if(p3 < n-1) p3++;
  	else if(p2 < n-2) p2++;
  	else p1++;
  }
  cout<<ans<<endl;
}