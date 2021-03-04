#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>


int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		int a = 0, b = 0;
		for(int i = 0 ; i<s.length(); i++){
			if(s[i] == 'M') a++;
			else if(s[i] == 'F') b++;
		}
		if(a == b && a > 1 ) cout<<"LOOP"<<endl;
		else cout<<"NO LOOP"<<endl;
	}
}















