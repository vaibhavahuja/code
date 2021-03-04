#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>

void answer(string s){
	string t = "";
	int q = 0;
	for(int i = 0; i < s.length(); i+=2){
		if(s[i] == 'b' && s[i+1] == 'b'){
			t += 'a';
			t += 'b';
			q++;
		}else if(s[i] == 'a' && s[i+1] == 'a'){
			t += 'a';
			t += 'b';
			q++;
		}else{
			t += s[i];
			t += s[i+1];
		}
	}
	cout<<q<<endl;
	cout<<t<<endl;
}


int main(){
	
	int p;
	string s;
	cin>>p;
	cin>>s;

	answer(s);

	
}














