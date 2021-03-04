#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define mii map<long long int, long long int>

void show(vi a){
  long long int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void show(mii table){
  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->first<<" "<<i->second<<endl;
  }
}


long long int answer(long long int arr[], long long int n) 
{ 
    long long int increasing[n];
    long long int decreasing[n];
    long long int i, max; 
  
  
    increasing[0] = 1; 
  
  
    decreasing[n-1] = 1; 
  

    for (i = 1; i < n; i++) 
       increasing[i] = (arr[i] >= arr[i-1])? increasing[i-1] + 1: 1; 
  
  
    for (i = n-2; i >= 0; i--) 
       decreasing[i] = (arr[i] >= arr[i+1])? decreasing[i+1] + 1: 1; 
  
  
    max = increasing[0] + decreasing[0] - 1; 
    for (i = 1; i < n; i++) 
        if (increasing[i] + decreasing[i] - 1 > max) 
            max = increasing[i] + decreasing[i] - 1; 
  
    return max; 
} 


int main(){
  long long int t;
  cin>>t;
  while(t--){
  	long long int n;
  	cin>>n;
  	long long int arr[n];
  	for(long long int i = 0; i < n; i++){
  		cin>>arr[i];
  	}
  	cout<<answer(arr, n)<<endl;
  }
}
