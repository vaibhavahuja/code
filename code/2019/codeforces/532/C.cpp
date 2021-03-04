#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926

float answer(float n, float r){
  float theta = ((n-2)/n)*90;
  float angle = cos(theta*2*pi/360);
  // setore
  // cout<<fixed<<setprecision(7)<<cos(30*2*pi/360)<<endl;
  cout<<fixed<<setprecision(7)<<((angle*r)/(1 - angle))<<endl;
  return ((angle*r)/(1 - angle));
}

int main(){
  float n, r;
  cin>>n>>r;
  // answer(n, r);
  cout<<fixed<<setprecision(7)<<answer(n, r)<<endl;

}
