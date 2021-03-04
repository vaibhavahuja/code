#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define vi vector<int>

int answer(vi a){

  int t = 0;
  int heightNext = 0;
  int heightPresent = 0;
  for(int i = 0; i < a.size() - 1; i++){
    heightNext = a[i+1];
    if(a[i] > heightPresent){
      t += a[i] - heightPresent;
      heightPresent = a[i];
    }

    t += 1; //eats

    // if(heightPresent > heightNext){
    t += abs(heightPresent - heightNext);
    heightPresent = heightNext;
    // }


    t += 1;   //jumps to next tree;
  }
  t += 1;
  if(a.size() == 1) return t+1;
  return t;
}


int main(){
  int t;
  cin>>t;
  vi a;
  while(t--){
    int p;
    cin>>p;
    a.push_back(p);
  }
  // if(t == 1) cout<<answer(a) + 1<<endl;
  cout<<answer(a)<<endl;
}
