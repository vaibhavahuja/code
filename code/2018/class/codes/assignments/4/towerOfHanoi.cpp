#include <iostream>
using namespace std;

void towerOfHanoi(char a, char b, char c, int n){
  if(n<=0) return;
  towerOfHanoi(a,c,b,n-1);
  cout<<"Moving ring "<< n <<" from " << a << " to "<<b<<endl;
  towerOfHanoi(c,b,a,n-1);
}


int main(){
  int n;
  cin>>n;
  towerOfHanoi('A','B','C',n);
}
