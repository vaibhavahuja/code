#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(vi a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

void show(stack<int> s){
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
}

int answer(vi a){
	stack<int> s;
	vi l;
	l.push_back(0);
	s.push(0);
	for(int i = 1; i < a.size(); i++){
		while(!s.empty() && a[s.top()] >= a[i]){
			s.pop();
		}
		if(s.empty()){
			l.push_back(0);
		}else{
			l.push_back(s.top()+1);
		}
		s.push(i);
	}

	while(!s.empty()) s.pop();
	vi r;
	r.push_back(a.size()+1);
	s.push(a.size()-1);

	for(int i = a.size() - 2; i >= 0; i--){
		while(!s.empty() && a[s.top()] >= a[i]){
			s.pop();
		}
		if(s.empty()){
			r.push_back(a.size()+1);
		}else{ 
			r.push_back(s.top()+1);
		}
		s.push(i);
	}
	reverse(r.begin(), r.end());
	int ans = 0;
	for(int i = 0; i < a.size(); i++){
		ans = max(ans, (r[i]-l[i]-1)*a[i]);
	}
	// show(l);
	// show(r);
	return ans;
}

int main(){
  ios_base::sync_with_stdio(false);
  vi a = {2, 1, 5, 6, 2, 3};
  cout<<answer(a)<<endl;
  

}
