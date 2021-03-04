#include <bits/stdc++.h>
using namespace std;
#define vs vector<string>
#define vvs vector<vs>
#define mii map<int, int>

void show(vs a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

bool isPalin(string str, int s, int e){
	while(s<e){
		if(str[s] != str[e]) return false;
		s++;
		e--;
	}
	return true;
}

//will print all partitions
//how does it do that??
//you gotta understand dudeeee
void generate(string s, int i, vs out, vvs &ans){
	if(i == s.length()){
		ans.push_back(out);
		return;
	}

	for(int j = i; j < s.length(); j++){
		if(isPalin(s, i, j)){
			out.push_back(s.substr(i, j-i+1));
			generate(s, j+1, out, ans);
			out.pop_back();
		}
	}
}

int main(){
	string s = "aab";
	vs out;
	vvs ans;
	generate(s, 0, out, ans);
	
	for(int i = 0; i < ans.size(); i++){
		show(ans[i]);
	}
}
