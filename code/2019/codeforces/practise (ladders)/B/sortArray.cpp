//wrong answer
///check later

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define vi vector<int>
bool check(vi a, int start, int end){
  for(int i = start; i < end; i++){

    // cout<<a[i+1]<<" "<<a[i]<<endl;
    if(a[i+1] > a[i]) return false;
    // cout<<i<<endl;
  }
  return true;
}

void times(vi a, int start, int end){
  vi b = a;
  sort(a.begin(), a.end());

  for(int i= 0; i < a.size(); i++){
    if(a[i] != b[i] && start == -1) start = i;
    else if(a[i] != b[i] && start != -1) end = i;
  }
  // cout<<start<<" "<<end<<endl;
  // for(int i = start; i <= end; i++) cout<<b[i]<<endl;
  if(check(b, start, end)){
    cout<<"yes"<<endl;
    if(start == -1 && end == -1) cout<<1<<" "<<1<<endl;
    else cout<<start+1<<" "<<end+1<<endl;
  } else cout<<"no"<<endl;



}


int main(){
  int n;
  cin>>n;
  vi a;
  while(n--){
    int p;
    cin>>p;
    a.push_back(p);
  }
  times(a, -1, -1);
}
