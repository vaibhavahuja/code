// do it with memoization

#include <iostream>
using namespace std;

int findProfit(int arr[], int begin, int end, int x){
  if(begin==end) return arr[begin]*x;

  int a = arr[begin]*x + findProfit(arr, begin+1, end, x+1);
  int b = arr[end]*x + findProfit(arr, begin, end-1, x+1);

  return max(a,b);
}

int main(){
  int arr[5] = {2,3,5,1,4};
  cout<<findProfit(arr, 0, 4, 1);
}
