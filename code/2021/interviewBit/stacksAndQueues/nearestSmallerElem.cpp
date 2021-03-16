#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>

void show(vi a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

vi answer(vi a){
	stack<int> s;
	vi answer;
	s.push(-1);
	for(int i = 0; i < a.size(); i++){
		while(s.top() >= a[i]){
			s.pop();
		}
		answer.push_back(s.top());
		s.push(a[i]);
	}
	return answer;

}

int main(){
  ios_base::sync_with_stdio(false);
  
  vi a = {4,5,2,10,8};
  show(a);
  show(answer(a));

}
