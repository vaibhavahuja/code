#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>

void answer(string s){
	string ans = "";
	int p = 1;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '"' && p == 1){
			p = 2;
			ans += "``";
		}else if(s[i] == '"' && p == 2){
			p = 1;
			ans += "''";
		}else ans += s[i];
	}
	cout<<ans<<endl;		
}

int main(){
	string line, input;
	while (getline(cin, line)) {
	    input += line;
	}
	answer(input);
	
	
  

}














