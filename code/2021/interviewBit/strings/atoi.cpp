#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(vi a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

pair<string, int> clean(string t){
	int w = 0;
	string q = "";
	while(t[w] == ' ') w++;
	t+="ewewe";
	int sign = 0;
	if(t[w] == '-' && t[w+1] >= '0' && t[w+1] <= '9'){
		sign = 1;
		w++;
	}else if(t[w] == '+' && t[w+1] >= '0' && t[w+1] <= '9'){
		sign = 2;
		w++;
	}
	for(int i = w; i < t.size(); i++){
		if(t[i] >= '0' && t[i] <= '9') q+=t[i];
		else break;
	}
	pair<string, int> temp(q, sign);
	return temp;
}

int answer(pair<string, int> temp){
	string s = temp.first;
	int p = temp.second;

	if(s.size() == 0) return 0;
	int i = s.size()-1;
	ll m = 1;
	ll ans = 0;
	ll intMax = (ll) INT_MAX;
	ll intMin = (ll) INT_MIN;
	while(i >= 0){
		// cout<<"val is "<<s[i]<<"->";
		ans += (s[i]-'0')*m;
		m*=10;
		i--;
		// cout<<ans<<" "<<intMax<<endl;
		if(ans > intMax && p != 1) return intMax;
		if((p==1) && ans > intMax) return intMin;
	}
	// if(abs(ans) > intMax) return (p==1)?intMin:intMax;

	if(p == 1) return (int)(-1*ans);
	return (int)ans;
}


int main(){
  ios_base::sync_with_stdio(false);
  
  string t = "-54332872018247709407 4 54";
  cout<<answer(clean(t))<<endl;

}
