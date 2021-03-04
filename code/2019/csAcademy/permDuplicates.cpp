#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define vi vector<int>

void show(vi a){
  for(int i = 0; i < a.size(); i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}

void perm(vi a, int i){

  if(i == a.size()-1){
    swap(a[i], a[i-1]);
    show(a);
    return;
  }
  for(int j = 0; j < a.size(); j++) perm(a, j+1);

}

int main(){
  vi a = {1,2,3};
  perm(a, 0);




}
