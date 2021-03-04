#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define miv map<vi, int>

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


void answer(vi a, int i, vi out, miv &ans, int tar){
	if(i == a.size()){
		if(sum(out) == tar) sort(out.begin(), out.end()), ans[out] += 1;	
		return;
	}

	out.push_back(a[i]);
	answer(a, i+1, out, ans, tar);
	out.pop_back();
	answer(a, i+1, out, ans, tar);
}

int main(){
	vi a = {10,1,2,7,6,1,5};
	vvi ans;
	vi out;
	miv table;
	answer(a, 0, out, table, 8);
	for(auto i = table.begin(); i != table.end(); i++){
		// show(i->first);
		ans.push_back(i->first);
	}
	sort(ans.begin(), ans.end());

}
