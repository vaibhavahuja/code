//try running this once

#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define mii map<long long int, long long int>

struct rect{
	long long int x1,y1,x2,y2;
};


bool pointInRect(rect r, rect r2, long long int a, long long int b){
	if(a >= r.x1 && a <= r.x2 && b >= r.y1 && b <= r.y2) return true;
	if(a >= r2.x1 && a <= r2.x2 && b >= r2.y1 && b <= r2.y2) return true;

	return false;
}

bool rectOverlap(rect a, rect b){
	if(a.x1 > b.x2 || b.x1 > a.x2) return false;
	if(a.y2 < b.y1 || b.y2 < a.y1) return false;
	return true;
}

bool answer(rect a, rect c, rect d){
	if(pointInRect(c, d, a.x1, a.y1) && pointInRect(c, d, a.x2, a.y2) && pointInRect(c, d, a.x1, a.y2) && pointInRect(c, d, a.x2, a.y1) && rectOverlap(c, d)) return true;
	if(pointInRect(c, c, a.x1, a.y1) && pointInRect(c, c, a.x2, a.y2) && pointInRect(c, c, a.x1, a.y2) && pointInRect(c, c, a.x2, a.y1)) return true;
	if(pointInRect(d, d, a.x1, a.y1) && pointInRect(d, d, a.x2, a.y2) && pointInRect(d, d, a.x1, a.y2) && pointInRect(d, d, a.x2, a.y1)) return true;


	return false;
}	

int main(){
	rect a;
	cin>>a.x1>>a.y1>>a.x2>>a.y2;

	rect c;
	cin>>c.x1>>c.y1>>c.x2>>c.y2;

	rect d;
	cin>>d.x1>>d.y1>>d.x2>>d.y2;



	if(answer(a, c, d)) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;




  

}














