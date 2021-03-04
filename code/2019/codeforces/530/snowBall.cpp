//right answer

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int answer(int h, int w, int u1, int d1, int u2, int d2){
    int ans = w;
    while(h > 0){
      if(h == d1){
        ans += d1;
        ans -= u1;
        if(ans<0) ans = 0;
      } else if(h == d2){
        ans += d2;
        ans -= u2;
        if(ans<0) ans = 0;
      } else ans += h;

      h--;
    }
    return ans;
}

int main(){
  int w, h;
  cin>>w>>h;
  int u1, d1;
  cin>>u1>>d1;
  int u2, d2;
  cin>>u2>>d2;

  cout<<answer(h, w, u1, d1, u2, d2)<<endl;

}
