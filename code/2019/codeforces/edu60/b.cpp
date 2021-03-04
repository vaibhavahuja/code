#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define vi vector<unsigned long long int>

unsigned long long int answer(vi a, unsigned long long int m, unsigned long long int k){
  sort(a.begin(), a.end());
  unsigned long long int ans = 0;
  unsigned long long int q = m/(k+1);
  if(m%(k+1) == 0){
    ans += a[a.size() - 1]*q*k;
    ans += a[a.size() - 2]*q;
  }else{
    ans += a[a.size() - 1]*q*k;
    ans += a[a.size() - 2]*q;
    ans += a[a.size() - 1]*(m%(k+1));
  }

  return ans;
}

int main(){
  unsigned long long int n, m, k;
  cin>>n>>m>>k;
  vi a;
  while(n--){
    unsigned long long int p;
    cin>>p;
    a.push_back(p);
  }
  cout<<answer(a, m, k)<<endl;



}
