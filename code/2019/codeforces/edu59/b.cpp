#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  long long int t;
  cin>>t;
  while(t--){
    long long int k, n;
    cin>>k>>n;
    long long int p = n + (k-1)*9;
    cout<<p<<endl;
  }
}
