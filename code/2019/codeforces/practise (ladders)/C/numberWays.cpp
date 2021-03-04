//accepted

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define vi vector<int>

void show(vi a){
  for(long long int i =0; i < a.size(); i++){
      cout<<a[i]<<" ";
  }
  cout<<endl;
}

long long int answer(vi a){
  vi b, c;
  for(long long int i = 0; i < a.size(); i++){
    b.push_back(0);
    c.push_back(0);
  }
  long long int sum = 0;
  for(long long int i = 0; i < a.size(); i++){
    sum += a[i];
  }
  if(sum % 3 != 0 || a.size() < 3) return 0;
  long long int sum_need = sum/3;
  long long int q = 0;
  for(long long int i = a.size() - 1; i >= 0; i--){
    q += a[i];
    if(q == sum_need) b[i] = 1;
  }
  long long int m = 0;
  for(long long int i = b.size() - 1; i >= 0; i--){
    m += b[i];
    c[i] = m;
  }

  long long int finalAns = 0;
  m = 0;
  for(long long int i = 0; i < a.size()-2; i++){
    m += a[i];
    // if(i + 2 > a.)
    if(m == sum_need) finalAns += c[i+2];
  }
  return finalAns;
  // show(b);
  // show(c);

}

int main(){
  long long int n;
  cin>>n;
  vi b;
  while(n--){
    long long int a;
    cin>>a;
    b.push_back(a);
  }
  // vi a = {1,2,3,0,3};
  // vi a = {0,0,0,0,0};
  cout<<answer(b)<<endl;

}
