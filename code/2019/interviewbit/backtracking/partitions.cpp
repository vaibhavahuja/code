#include <bits/stdc++.h>
using namespace std;
#define vs vector<string>

void show(vs a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void generate(string s, int i, vs out){
	if(i == s.length()){
		show(out);
		return;
	}

	for(int j = i; j < s.length(); j++){
		out.push_back(s.substr(i, j-i+1));
		generate(s, j+1, out);
		out.pop_back();
	}
}


int main(){
  string s = "abcd";
  vs out;
  generate(s, 0, out);
}
