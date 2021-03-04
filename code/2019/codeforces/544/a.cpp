#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>

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


int main(){
  string a, b;
  cin>>a>>b;

  int h1 = (a[0]-'0')*10 + (a[1]-'0');
  int m1 = (a[3]-'0')*10 + (a[4]-'0');
  int h2 = (b[0]-'0')*10 + (b[1]-'0');
  int m2 = (b[3]-'0')*10 + (b[4]-'0');

  int min1 = h1*60 + m1;
  int min2 = h2*60 + m2;

  int avg = (min1 + min2)/2;

  int H1 = avg/60;
  int M1 = avg%60;

  cout<<H1<<" "<<M1<<endl;





}
