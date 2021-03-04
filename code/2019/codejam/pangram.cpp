#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<char, int>

void show(vi a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void show(mii table){
  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->first<<" "<<i->second<<endl;
  }
}

bool isPrime(int n){
	for(int i = 2; i*i <= n; i++){
		if(n%i == 0) return false;
	}
	return true;
}


void pan(int n, vi &table){
	for(int i = 3; i <= n; i++){
		if(isPrime(i)) table.push_back(i);
	}
}



int main(){
	vi a;
	int n = 103;
	
	pan(n, a);


	mii table;
	for(int i = 0; i < 26; i++){
		char p = i+'A';
		table[p] = a[i];
	}
	string m = "CJQUIZKNOWBEVYOFDPFLUXALGORITHMS";
	vi d = {};
	for(int i = 0; i < m.size()-1; i+=2){
		d.push_back(table[m[i]]*table[m[i+1]]);
	}
	show(d);
}	
