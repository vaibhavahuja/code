#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

float answer(float a, float b){
  return a/b;
}

int main(){
  int a, b;
  cin>>a>>b;
  cout<<answer(a, b)<<endl;
  cout<<fixed<<setprecision(100)<<answer(a, b)<<endl;

}
