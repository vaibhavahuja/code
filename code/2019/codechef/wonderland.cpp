#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
#define vi vector<int>

long long int NextLargestBinSearch( long long int key, vi data, const long long int len)
{

    long long int low  = 0;
    long long int high = len-1;

    while( low <= high)
    {
        // To convert to Javascript:
        // var mid = low + ((high - low) / 2) | 0;
        long long int mid = low + ((high - low) / 2);

        /**/ if (data[mid] < key) low  = mid + 1;
        else if (data[mid] > key) high = mid - 1;
        else return                      mid + 1;
    }

    if( high < 0 )
        return 0;   // key < data[0]
    else
    if( low > (len-1))
        return len; // key >= data[len-1]
    else
        return (low < high)
            ? low  + 1
            : high + 1;
}


long long int answer(long long int n, vi a){
  sort(a.begin(), a.end());
  vi b;
  for(long long int i = 0; i < a.size(); i++){
    b.push_back(a[i]/(a[i]%n + 2));
  }
  // for(long long int i = 0; i < a.size(); i++){
  //   cout<<a[i]<<" "<<b[i]<<endl;
  // }
  vi c;
  for(long long int i = 0; i < a.size(); i++){
    c.push_back(NextLargestBinSearch(b[i], a, a.size()));
  }
  // for(long long int i = 0; i < c.size(); i++){
  //   cout<<c[i]<<" ";
  // }
  long long int ans = a.size();
  for(long long int i = c.size() - 1; i >= 0; i--){
    if(c[i] >= 0){
      ans -= 1;
    }
    return ans;
  }
}

int main(){
  // vi a = {15,14,8,12,30};
  long long int t;
  cin>>t;
  while(t--){
    long long int a, b;
    cin>>a>>b;
    vi q;
    while(a--){
      long long int p;
      cin>>p;
      q.push_back(p);
    }
    cout<<answer(b, q);
  }



}
