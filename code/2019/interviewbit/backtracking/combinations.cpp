#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define mii map<int, int>

void show(vi a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void show(mii table){
  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->first<<" "<<i->second<<endl;
  }
}


void answer(vi a, int i, vi out, int k, vvi &ans){
	if(out.size() == k){
		sort(out.begin(), out.end());
		ans.push_back(out);
		return;
	}
	else if(i == a.size()) return;

	out.push_back(a[i]);
	answer(a, i+1, out, k, ans);
	out.pop_back();
	answer(a, i+1, out, k, ans);
}

int main(){

	vi a = {1,2,3,4};
	vvi ans;
	vi out;
	answer(a, 0, out, 2, ans);
  















}
