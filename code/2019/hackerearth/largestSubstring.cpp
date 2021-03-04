#include <bits/stdc++.h>
using namespace std;

int answer(string bin)
{
    int n = bin.length(), i;


    int S1 = 0;


    unordered_map<int, int> pS;


    int maxlen = 0;


    int currlen;

    for (i = 0; i < n; i++) {

        if (bin[i] == '1')
            S1--;
        else
            S1++;

        if (S1 > 0) {
            maxlen = i + 1;
        }

        else if (S1 <= 0) {
            if (pS.find(S1 - 1) != pS.end()) {
                currlen = i - pS[S1 - 1];
                maxlen = max(maxlen, currlen);
            }
        }

        if (pS.find(S1) == pS.end())
            pS[S1] = i;
    }

    return maxlen;
}



int main(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  cout<<answer(s)<<endl;




}
