#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void show(int arr[], int n){
  for(int i =0; i < n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int answer(string s, int k){
  int arr[26] = {0};

  for(int i = 0; i < s.length(); i++){
    arr[s[i] - 'A'] += 1;
  }

  int q = 1e7;
  for(int i = 0; i < k; i++){
    if(arr[i] == 0) return 0;
    else q = min(arr[i], q);
  }
  // show(arr, 26);
  return q*k;
}

int main(){
  int n, k;
  string s;
  cin>>n>>k>>s;
  cout<<answer(s, k);

}
