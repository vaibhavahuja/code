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


int sum(vi a){
	int i = 0;
	int sum = 0;
	while(i < a.size()){
		sum += a[i];
		i++;
	}
	return sum;
}

void answer(vi a, int i, vi out, int t, mvi &table){
	if(sum(out) > t) return;
 	if(i == a.size()){
		if(sum(out) == t) sort(out.begin(), out.end()),  table[out] += 1; 
		return;
	}
	if(sum(out) == t){
		sort(out.begin(), out.end());
		table[out] += 1;
		// show(out);
		return;
	}

	out.push_back(a[i]);
	answer(a, i+1, out, t, table);
	answer(a, i, out, t, table);
	out.pop_back();
	answer(a, i+1, out, t, table);

}


int main(){
	vi a = {2,3,6,7};
	vi out;
	vvi ans;
	int t = 7;
	mvi table;
	answer(a, 0, out, t, table);
	for(auto i = table.begin(); i != table.end(); i++){
		ans.push_back(i->first);
	}




















}

