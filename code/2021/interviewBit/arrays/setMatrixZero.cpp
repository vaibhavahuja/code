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
  vector<vi> a(4);

  for(int i = 0; i < a.size(); i++){
  	for(int j = 0; j < 5; j++){
  		int p; cin>>p;
  		a[i].push_back(p);
  	}
  }

  for(int i = 0; i < a.size(); i++) show(a[i]);
  int rows = 1, cols = 1;
  for(int i = 0; i < max(a.size(), a[0].size()); i++){
  	if(i < a.size() && a[i][0] == 0) cols = 0;
  	if(i < a[0].size() && a[0][i] == 0) rows = 0;
  }

  for(int i = 1; i < a.size(); i++){
  	for(int j = 1; j < a[0].size(); j++){
  		if(a[i][j] == 0){
  			a[i][0] = 0;
  			a[0][j] = 0;
  		}
  	}
  }

  for(int i = a.size()-1; i > 0; i--){
  	for(int j = a[0].size()-1; j > 0; j--){
  		if(a[i][0] == 0 || a[0][j] == 0){
  			a[i][j] = 0;
  		}
  	}
  }
  
  for(int i = 0; i < max(a.size(), a[0].size()); i++){
  	if(rows == 0 && i < a[0].size()) a[0][i] = 0;
  	if(cols == 0 && i < a.size()) a[i][0] = 0;
  }
  for(int i = 0; i < a.size(); i++) show(a[i]);

}
