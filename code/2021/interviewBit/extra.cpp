#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(vi a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}


int main(){
  ios_base::sync_with_stdio(false);
  
  string s = "abcd"; 
  for(int i = 0; i < s.length(); i++){
  	for(int j = i; j < s.length(); j++){
  		cout<<s[j]<<" ";
  	}
  	cout<<endl;
  }

}
