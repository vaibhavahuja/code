#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n, v;
  cin>>n>>v;
  int cost = 1, i = 0, fuel = 0, city = 1;
  int cityLeft = n-1;
  if(v < cityLeft){
    cost *= v;
    fuel = v;
  }else{
    cost *= cityLeft;
    fuel = cityLeft;
  }
  city++;
  // cout<<cost<<endl;
  while(fuel < cityLeft){
    cost += city;
    cityLeft--;
    city++;
    // cout<<cost<<endl;
  }
  cout<<cost<<endl;
}
