#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

string answer(vi a, vi b){
	int ans = abs(a[0] - b[0]);
	for(int i = 0; i < a.size(); i++){
		if(ans != abs(a[i] - b[i])) return "no";
	}
	return "yes";

}

int main(){
	int t;
	cin>>t;
	cout<<endl;
	while(t--){
		int w;
		cin>>w;
		int ans = -1e5;
		vi a, b;
		while(w--){
			int c, d;
			cin>>c>>d;
			a.push_back(c);
			b.push_back(d);
			cout<<endl;
		}
		cout<<answer(a, b)<<endl;
	}
}