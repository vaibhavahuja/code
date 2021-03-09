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
  
  string s = "1a2";
  string s_clean = "";
  for(int i = 0; i < s.size(); i++){
  	if(s[i] >= 'A' && s[i] <= 'Z'){
  		s_clean += s[i] - 'A' + 'a';
  	}else if(s[i] >= 'a' && s[i] <= 'z'){
  		s_clean += s[i];
  	}else if(s[i] >= '0' && s[i] <= '9'){
  		s_clean += s[i];
  	}
  }
  cout<<s_clean<<endl;
  string p = s_clean;
  reverse(p.begin(), p.end());
  if(p == s_clean){
  	return 1;
  }
  return 0;

}
