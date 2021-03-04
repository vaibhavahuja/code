#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

void rotateMatrix(vector<vi> a){
	int n = a.size();
	for(int x = 0; x < n; x++){
		for(int y = x; y < n-x-1; y++){
			int temp = a[x][y];
			a[x][y] = a[n-1-y][x];
			a[n-1-y][x] = a[n-1-x][n-1-y];
			a[n-1-x][n-1-y] = a[y][n-1-x];
			a[y][n-1-x] = temp;
		}
	}
}

int main(){
  ios_base::sync_with_stdio(false);

  vector<vi> a(5);
  for(int j = 0; j < 5; j++){
	  for(int i = 1; i <= 5; i++){
	  	a[j].push_back(i*(j+1));
	  }
  }

  for(int i = 0; i < 5; i++) show(a[i]);
}