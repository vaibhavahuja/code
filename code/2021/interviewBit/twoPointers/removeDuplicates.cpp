#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(vi a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

// 1 1 1 4 5

int findDistinct(vi &a){
	int i = 0, j = 1;
	while(j < a.size()){
		if(a[i] == a[j]){
			j++;
		}else{
			i++;
			a[i] = a[j];
		}
	}
	a.resize(i+1);
	return i+1;
}

int main(){
  ios_base::sync_with_stdio(false);
  
  vi a = {1, 1, 1, 1, 1};
  cout<<findDistinct(a)<<endl;
  show(a);

}
