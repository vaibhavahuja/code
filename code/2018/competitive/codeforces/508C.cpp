//you thought of the correct solution, just see why test case 4 is not working.
// https://codeforces.com/contest/1038/submission/42591846

//logic 100% correct. some implementation fault.
//work on that.


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define vi vector<int>

void show(vi a){
  int d = 0;
  while(d < a.size()){
    cout<<a[d]<<" ";
    d++;
  }
  cout<<endl;
}


int answer(vi a, vi b){
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  int k = a.size() - 1; //pointer for A
  int j = b.size() - 1; //pointer for B
  int chance = 0; //0 for A 1 for B

  int maxa = 0, maxb = 0;

  while(k >= 0 && j >= 0){
    if(chance == 0){    //a's chance
      if(a[k] > b[j]){
        maxa += a[k];
        k--;
      }else{
        j--;
      }
      chance = 1;   //switch to b
    }else{    //b's chance
      if(a[k] < b[j]){
        maxb += b[j];
        j--;
      }else{
        k--;
      }
      chance = 0;
    }
  }

  if(k < 0 && j >= 0){
    while(j>=0){
      if(chance == 1){
        maxb += b[j];
        chance = 0;
      }else{
        j--;
        chance = 1;
      }
      j--;
    }
  }
  if(j < 0 && k >= 0){
    while(k >=0){
      if(chance == 0){
        maxa += a[k];
        chance = 1;
      }else{
        k--;
        chance = 0;
      }
      k--;
    }
  }
  show(a);
  show(b);


  return maxa - maxb;
  // cout<<maxa<<" "<<maxb<<endl;
}

int main(){
  int n;
  cin>>n;
  vi a, b;

  int k = n;
  while(n--){
    int p;
    cin>>p;
    a.push_back(p);
  }
  while(k--){
    int q;
    cin>>q;
    b.push_back(q);
  }
  cout<<answer(a, b)<<endl;

}
