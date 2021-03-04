#include <bits/stdc++.h>
using namespace std;
#define vi vector<string>
#define vc vector<char>

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

string to_stringg(vc a){
  string s = "";
  int i = 0;
  while(i < a.size()){
    s += a[i];
    i++;
  }
 return s;
}

void answer(vi arr, string s, int j, vc out, vi &ans){
	if(out.size() == s.length()){
		ans.push_back(to_stringg(out));
		// show(out);
		return;
	}
	int num = s[j] - '0';

	for(int i = 0; i < arr[num].length(); i++){
		out.push_back(arr[num][i]);
		answer(arr, s, j+1, out, ans);
		out.pop_back();
	}

}



int main(){
	vi arr = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	string s = "2345";
	vc out;
	vi ans;
	answer(arr, s, 0, out, ans);












  
}
