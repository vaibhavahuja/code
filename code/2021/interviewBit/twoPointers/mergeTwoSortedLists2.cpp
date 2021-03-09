#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(vi a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}


void merge(vi &a, vi &b){
	int i = 0, j = 0;
	while(i < a.size() && j < b.size()){
		if(a[i] < b[j]){
			i++;
		}else{
			// int q = i-1;
			// if(i == 0) q = 0;
			a.insert(a.begin() + i, b[j]);
			j++;
		}
	}
	while(j != b.size()){
		a.push_back(b[j]);
		j++;
	}
}

void merge2(vi &a, vi &b){
	vi c;
	int i = 0, j = 0;
	while(i < a.size() && j < b.size()){
		if(a[i] < b[j]){
			c.push_back(a[i]);
			i++;
		}else if(a[i] >= b[j]){
			c.push_back(b[j]);
			j++;
		}
	}

	while(i < a.size()){
		c.push_back(a[i]);
		i++;
	}
	while(j < b.size()){
		c.push_back(b[j]);
		j++;
	}

	a = c;
}

int main(){
  ios_base::sync_with_stdio(false);
  vi a = {1, 5, 8};
  vi b = {6, 9};

  merge2(a, b);
  show(a);
  

}
