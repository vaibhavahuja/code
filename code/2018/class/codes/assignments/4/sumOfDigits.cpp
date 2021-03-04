#include <iostream>
using namespace std;

int findSum(int n){

  if(n<10) return n;
  return findSum(n/10) + n%10;
}



int main(){
  int t;
  cin>>t;
  cout<<findSum(t);

}
