#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(vi a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int answer(string a){
	int i = 0;
	stack<char> s;

	for(i = 0; i < a.size(); i++){
		if(a[i] != ')') s.push(a[i]);
		else{
			int q = 0;
			while(s.top() != '('){
				q++;
				s.pop();			
			}
			s.pop();
			if(q == 0) return 1;
		}
	}
	return 0;
	
}


int main(){
  ios_base::sync_with_stdio(false);
  string a = "((a+b))()";
  cout<<answer(a)<<endl;

}
