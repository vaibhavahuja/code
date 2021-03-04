#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define vi vector<long long int>

long long int answer(vi a){
  sort(a.begin(), a.end());
  long long int ans = 0;
  long long int i = 0;
  while(i < a.size()/2){
    ans += (a[i] + a[a.size() - i - 1])*(a[i] + a[a.size() - i - 1]);
    i++;
  }
  return ans;
}

int main(){
  long long int t;
  cin>>t;
  vi a;
  while(t--){
    long long int p;
    cin>>p;
    a.push_back(p);
  }
  cout<<answer(a)<<endl;

}
