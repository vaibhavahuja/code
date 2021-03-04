#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define vi vector<long long int>

long long int answer(string a, long long int k, vi c){
  long long int in = -1;
  for(long long int i = 0; i < c.size(); i++){
    in = max(in, c[i]);
  }
  long long int ans = 0;
  for(long long int i = 0; i < a.length(); i++){
    ans += (i+1)*(c[a[i] - 'a']);
  }
  long long int m = a.length() + 1;
  while(k--){
    ans += m*in;
    m++;
  }

  return ans;


}

int main(){
  string a;
  long long int n;
  cin>>a>>n;
  long long int t = 26;
  // cin>>t;
  vi c;
  while(t--){
    long long int p;
    cin>>p;
    c.push_back(p);
  }
  cout<<answer(a, n, c)<<endl;

}
