// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// #include <map>
// #define mii map<long long int, long long int>
// #define vi vector<long long int>
//
// int main(){
//   mii table;
//   long long int n;
//   cin>>n;
//   while(n--){
//     long long int a, b;
//     cin>>a>>b;
//     if(table.find(a) == table.end()){
//       table[a] = b;
//     }else table[a] = max(table[a], b);
//   }
//   vi bc;
//   for(auto i = table.begin(); i != table.end(); i++){
//     bc.push_back(i->second);
//   }
//   long long int ans = -1;
//   for(long long int i = 0; i < bc.size() - 1; i++){
//     if(bc[i+1] < bc[i]){
//       ans = 0;
//       break;
//     }
//   }
//   auto j = --table.end();
//   if(ans == -1){
//     cout<<min(j->second, j->first)<<endl;
//   }else if(ans == 0){
//     cout<<j->first<<endl;
//   }
// }
//
//
#include <bits/stdc++.h>

#define debug(x) cout << "> " << #x << " = " << x << endl;

using namespace std;

typedef long long ll;
typedef pair<ll, ll> ii;

int main() {
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<ii> mp;
    for(int i = 0; i < n; ++i) {
        ll a, b;
        cin >> a >> b;
        mp.push_back({a, b});
    }

    sort(mp.begin(), mp.end());
    ll ans = -1;

    for(auto p : mp) {
        if(ans > p.second)
            ans = p.first;
        else
            ans = p.second;
    }
    cout << ans << "\n";
    return 0;
}
