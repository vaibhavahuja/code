//wrong solution

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define vi vector<int>

int closestPair(vi a, vi b){
  vi c;
  for(int i = 0; i < a.size(); i++) c.push_back(a[i]);

  for(int i = 0; i < b.size(); i++) c.push_back(b[i]);

  sort(c.begin(), c.end());

  int diff = 1e5;
  for(int d = 0; d < c.size() - 1; d++){
    diff = min(diff, c[d+1] - c[d]);
  }

  return diff;
}

int main(){
  vi a = {20, 1, 25, 37, 12};
  vi b = {43, 10, 31, 15, 30};

  cout<<closestPair(a,b);

}
