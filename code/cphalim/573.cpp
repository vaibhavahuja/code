#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>

int main(){
	while(1){
		float h, u, d, f;
		cin>>h>>u>>d>>f;
		if(h == 0) break;
		float up = u;
		float current = 0;
		int day = 0;
		while(1){
			day++;
			current += u;
			if(current > h) break;
			current -= d;
			if(current < 0) break;
			u -= 0.01*f*up;
			if(u < 0) u = 0;
		}
		if(current > h){
			cout<<"success on day "<<day<<endl;	
		}else if(current < 0){
			cout<<"failure on day "<<day<<endl;
		}	
	}
}














