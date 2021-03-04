#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define mii map<long long int, long long int>


int main(){
  long long int a, b, c, d;
  cin>>a>>b>>c>>d;
  bool x;
  if(a != d)  x = false;
  else if(a == d && a == 0 && c > 0) x = false;
  else x = true;

  cout<<x<<endl;
}
