#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(vi a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

vi fillLps(string s){
	vi a(s.size());

	int i = 1, j = 0;
	while(i < s.size()){
		if(s[i] == s[j]){
			j++;
			a[i] = j;
			i++;
		}else{
			if(j == 0) i++;
			else j = a[j-1];
		}
	}
	return a;
}


void kmp(string s, string t){
	vi a = fillLps(t);
	int i = 0, j = 0;
	while(i < s.length()){
		if(s[i] == t[j]) i++, j++;

		if(j == t.length()){
			cout<<"found match at "<<i-j<<endl;
			j = a[j-1];
		}else if(s[i] != t[j] && i < s.length()){
			if(j == 0) i++;
			else j = a[j-1];
		}
	}
}

int main(){
  ios_base::sync_with_stdio(false);
  string s = "abcaabcdbabc";
  string t = "abc";
  kmp(s, t);

}
