#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define vi vector<int>


void show(vi a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}


int main(){
  int t;
  cin>>t;
  while(t--){
    vi a;
    int o;
    cout<<"Q "<<0<<" "<<0<<endl;
    cin>>o;
    a.push_back(o);

    cout<<"Q "<<0<<" "<<100<<endl;
    cin>>o;
    a.push_back(o-100);

    cout<<"Q "<<100<<" "<<100<<endl;
    cin>>o;
    a.push_back(200-o);

    cout<<"Q "<<100<<" "<<0<<endl;
    cin>>o;
    a.push_back(100 - o);

    show(a);
    int A, B, C, D;
    int c,d,e,f;
    c = (a[0] + a[1])/2;
    d = (a[0] + a[3])/2;
    e = (c+d)/2;
    A = e;
    B = a[0] - A;
    D = A - a[1];
    C = a[0] - A + a[3];


    cout<<"A "<<A<<" "<<B<<" "<<C<<" "<<D<<endl;
    int qw;
    cin>>qw;
  }
}
