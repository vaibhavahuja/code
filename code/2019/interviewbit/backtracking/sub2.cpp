#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define mvi map<vi, int>

void show(vi a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}


void answer(vi a, int i, vi out, mvi &table){
	if(i == a.size()){
		sort(out.begin(), out.end());
		table[out] += 1;
		return;
	}

	out.push_back(a[i]);
	answer(a, i+1, out, table);
	out.pop_back();
	answer(a, i+1, out, table);
}


int main(){
  vi a = {1,2,2};
  vi out;
  mvi table;
  answer(a, 0, out, table);
  vvi ans;
  for(auto i = table.begin(); i != table.end(); i++){
  	ans.push_back(i->first);
  }
  sort(ans.begin(), ans.end());
  for(auto i = 0; i < ans.size(); i++){
  	show(ans[i]);

  }






}
