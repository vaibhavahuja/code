#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(vi a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}


int main(){
  ios_base::sync_with_stdio(false);
  
  string str = "jyhrcwuengcbnuchctluxjgtxqtfvrebveewgasluuwooupcyxwgl";
	queue<char> q; 
    string b;
    int charCount[26] = { 0 }; 
  
    // traverse whole stream 
    for (int i = 0; str[i]; i++) { 
  
        // push each character in queue 
        q.push(str[i]); 
  
        // increment the frequency count 
        charCount[str[i] - 'a']++; 
  
        // check for the non pepeating character 
        while (!q.empty()) { 
            if (charCount[q.front() - 'a'] > 1) 
                q.pop(); 
            else { 
                b.push_back(q.front());
                break; 
            } 
        } 
  
        if (q.empty()) 
            b.push_back('#'); 
    } 
    // return b;

  cout<<b<<endl;

}
