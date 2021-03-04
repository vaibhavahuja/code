#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

#define vi vector<long long int>
// #define mcv map<char, vector>

void show(vi a){
  for(long long int i = 0; i < a.size(); i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}

void answer(vi a, string b, long long int k){
  long long int j = 0;
  b += '0';
  long long int ans = 0;
  vi c;
  while(j < b.length() - 1){
    c.push_back(a[j]);
    if(b[j+1] != b[j]){
      sort(c.begin(), c.end());
      // show(c);
      long long int m = 0;
      while(m < k && m < c.size()){
        ans += c[c.size() - m - 1 ];
        m++;
      }
      c.clear();
    }
    j++;
  }
  cout<<ans<<endl;
}

int main(){
  long long int n, k;
  cin>>n>>k;
  vi a;
  long long int j = 0;
  while(j < n){
    long long int p;
    cin>>p;
    a.push_back(p);
    j++;
  }
  string m;
  cin>>m;
  // vi a = {1,5,16,18,7,2,10};
  // string b = "baaaaca";
  answer(a, m, k);

}
