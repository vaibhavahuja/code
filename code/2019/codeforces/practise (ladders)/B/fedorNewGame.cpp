//correct answer

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define vi vector<int>

int numb(int a){
  int c = 0;
  while(a){
    a = a & (a-1);
    c++;
  }
  return c;
}

int answer(int a, int b){
  return numb(a^b);
}

int main(){
  int n, m, k;
  cin>>n>>m>>k;
  vi a;
  for(int i = 0; i <= m; i++){
    int c;
    cin>>c;
    a.push_back(c);
  }
  int p = 0;
  for(int i = 0; i < a.size()-1; i++){
    if(answer(a[i], a[a.size() - 1]) <= k) p++;
  }
  cout<<p<<endl;

}
