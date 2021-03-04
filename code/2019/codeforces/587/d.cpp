#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define mii map<long long int, long long int>

void show(vi a){
  long long int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

long long int gcd(vi a){
	long long int p = a[0];
	for(long long int i = 0; i < a.size(); i++){
		p = __gcd(p, a[i]);
	}
	return p;
}

int main(){
	long long int t;
	cin>>t;
	vi a;
	long long int m = -1;
	while(t--){
		long long int p;
		cin>>p;
		m = max(m,p);
		a.push_back(p);
	}

	vi b;
	for(long long int i = 0; i < a.size(); i++){
		b.push_back(m - a[i]);
	}

	// show(b);
	long long int z = gcd(b);
	long long int y = 0;
	for(long long int i = 0; i < b.size(); i++){
		y += b[i]/z;
	}

	cout<<y<<" "<<z<<endl;

}














