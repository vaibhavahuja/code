#include <bits/stdc++.h>
using namespace std;

string getSum(string s){
	int ans = 0;
	for(int i = 0; i < s.length(); i++){
		ans += (s[i] - '0');
	}

	return to_string(ans);
}

int main(){

	string s;
	// cin>>s;
	while(1){
		cin>>s;
		if(s == "0") break;
		string a = s;
		while(a.length() > 1){
			a = getSum(a);
		}
		cout<<a<<endl;	
	}
	


}