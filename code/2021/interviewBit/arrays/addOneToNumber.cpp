#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int main(){
  ios_base::sync_with_stdio(false);

  vi a = {0, 3, 7, 6, 4, 0, 5, 5, 5};

  int p = a.size() - 1;
  int carry = 0;
  if(a[p] == 9) a[p] = 0, carry = 1;
  else a[p]++;
  p--;
  while(carry == 1 && p >= 0){
  	if(a[p] == 9) a[p] = 0, carry = 1;
  	else a[p]++, carry = 0;
  	p--;
  }
  vi b;
  if(carry == 1){
  	b.push_back(1);
  }
  int q = a.size();
  if(carry == 1) {while(q--) b.push_back(0);}
  
  if(b.size() > 0) show(b);
  else{
  	int u = 0;
  	while(a[u] == 0) u++;
  	for(u; u < a.size(); u++){
  		b.push_back(a[u]);
  	}
  	show(b);
  }

}