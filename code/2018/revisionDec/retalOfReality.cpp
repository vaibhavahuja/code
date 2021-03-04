//to check.

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

#define mii map<int, int>
#define vi vector<int>

void answer(int a, vi b){
  mii table;
  for(int i = 0; i < b.size(); i++){
    table[b[i]]+=1;
  }

  for(auto it = table.begin(); it != table.end(); it++){
    cout<<it->first<<" "<<it->second<<endl;
  }
}

// void answer(int a, vi b){
//   sort(b.begin(), b.end());
//   for(int i = 0; i < a; i++){
//     cout<<b[i]<<" ";
//   }
//   cout<<endl;
// }

int main(){
  int t;
  cin>>t;
  while(t--){
    int n, k;
    cin>>n>>k;
    vi p;
    while(n--){
      int w;
      cin>>w;
      p.push_back(w);
    }
    answer(k, p);
  }

}
