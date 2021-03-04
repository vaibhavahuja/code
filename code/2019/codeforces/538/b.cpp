#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

#define vi vector<long long int>
#define mii map<long long int, long long int>

void show(vi a){
  long long int i = 0;
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

void answer(vi a, long long int m, long long int k){
  vi b = a;
  sort(b.begin(), b.end());
  long long int sum = 0;
  mii table;
  long long int q = b.size() - 1;
  long long int w = m*k;
  while(w--){
    sum += b[q];
    table[b[q]] += 1;
    q--;
  }
  // cout<<sum<<endl;
  // cout<<m<<endl;
  // show(table);
  q = 0;
  w = 0;
  vi ans;
  // long long int qw = 0;
  // long long int m = 1;
  while(q < a.size()){
    if(table.find(a[q]) != table.end()){
      if(table[a[q]] > 0){
        w++;
        table[a[q]] -= 1;
        // cout<<"show"<<endl;
        // show(table);
        // cout<<"show"<<endl;

      }
    }
    // show(table);
    if(w == m){
      // cout<<" added "<<q+1<<endl;
      // cout<<w<<endl;
      // cout<<a[q]<<" "<<q<<endl;
      ans.push_back(q+1);
      if(ans.size() == (k-1)) break;
      w = 0;
    }
    q++;
  }
  cout<<sum<<endl;
  show(ans);
}


int main(){
  long long int n, m, k;
  cin>>n>>m>>k;
  vi a;
  while(n--){
    long long int qw;
    cin>>qw;
    a.push_back(qw);
  }
  answer(a, m, k);

}
