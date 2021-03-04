#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
  float r, a, b, c, d;
  cin>>r>>a>>b>>c>>d;
  double e = sqrt(pow(c-a, 2.0) + pow(d-b, 2.0));
  cout<<(int)(ceil)(e/r/2)<<endl;

}
