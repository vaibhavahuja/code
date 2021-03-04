#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define vi vector<long long int>

long long int numShuffles(vi a, long long int init, long long int fin){
  long long int ans = 0;
  while(init != fin){
    init = a[init-1];
    ans++;
    if(ans > a.size()) return -1;
  }
  return ans;

}

int main(){
  long long int n, init, fin;
  cin>>n>>init>>fin;
  vi a;
  while(n--){
    long long int pl;
    cin>>pl;
    a.push_back(pl);
  }

  cout<<numShuffles(a, init, fin)<<endl;



}
