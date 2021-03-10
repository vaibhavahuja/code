#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(vi a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int numRange(vector<int> &A, int B, int C) {
    
    int i = 0;
    int j = 0;
    int sum = 0;
    int count = 0;
    
    while(i < A.size()){
        sum = sum + A[j];
        if((sum >= B) && (sum <= C)){
            count++;
            j++;
        }
        else if(sum < B){
            j++;
        }
        else if(sum > C){
            i++;
            j = i;
            sum = 0;
        }
        if(j == A.size()){
            sum = 0;
            i++;
            j = i;
        }
    }
    
    return count;
}

int main(){
  ios_base::sync_with_stdio(false);
  vi a = {10, 5, 1, 0, 2};
  int b = 6, c = 8;
  cout<<numRange(a, b, c)<<endl;

}
