#include <bits/stdc++.h>
using namespace std;
#define vi vector<unsigned long long int>
#define mii map<unsigned long long int, unsigned long long int>

void show(vi a){
  unsigned long long int i = 0;
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

void primeFactor(unsigned long long int n, mii &table){
  unsigned long long int count = 0;
  while(n%2 == 0){
    count++;
    n/=2;
  }
  if(count > 0) table[2] = count;

  for(unsigned long long int i = 3; i <= sqrt(n); i++){
    count = 0;
    while(n % i == 0){
      count++;
      n/= i;
    }
    if(count > 0) table[i] = count;
  }

  if(n > 2) table[n] = 1;

}

void find(mii &table2, mii table, unsigned long long int a){
  for(auto i = table.begin(); i != table.end(); i++){
    unsigned long long int m = i->first;
    unsigned long long int c = m;
    unsigned long long int p = 0;
    while(m <= a){
      p += a/m;
      if(a/c < m) break;
      m *= c;
    }
    table2[i->first]  = p;
  }
}


unsigned long long int answer(unsigned long long int a, unsigned long long int b){
  mii table;
  primeFactor(b, table);

  mii table2;

  find(table2, table, a);

  unsigned long long int ans = ULLONG_MAX;
  for(auto i = table.begin(); i != table.end(); i++){
    unsigned long long int p = table2[i->first]/(i->second);
    ans = min(p, ans);
  }
  return ans;
}


int main(){
  unsigned long long int a, b;
  cin>>a>>b;
  cout<<answer(a, b)<<endl;
}
