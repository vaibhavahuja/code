#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>


void perm(string inp, string out){
	if(inp.length() == 0){
		cout<<out<<endl;
		return;
	}

	for(int i = 0; i < inp.length(); i++){
		char c = inp[i];
		inp.erase(i, 1);
		out += c;

		perm(inp, out);

		inp.insert(i, 1, c);
		out.erase(out.length() - 1, 1);
	}
}


int main(){
	perm("abc", "");

}