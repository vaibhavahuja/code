#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>

void show(vi a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

int answer(vi a, int i, int sum, int b){
  if(i < 0) return abs(b-sum);
  return min(answer(a, i-1, sum+a[i], b), answer(a, i-1, sum, b+a[i]));
}

int dpAnswer(vi a, int sum, int b){

}

int main(){
  vi arr;
  // vi a = {3, 1, 4, 2, 2, 100};
  vi a = {36,7,46,40};
  cout<<answer(a, a.size()-1,0,0);


}
