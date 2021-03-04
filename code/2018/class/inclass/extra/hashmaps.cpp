#include <iostream>
#include <map>
#include <iterator>
using namespace std;


int main(){
  map <int,int> gquiz1;
  gquiz1.insert(pair <int, int> (1, 40));
  gquiz1.insert(pair <int, int> (2, 30));
  gquiz1.insert(pair <int, int> (3, 60));
  gquiz1.insert(pair <int, int> (4, 20));
  gquiz1.insert(pair <int, int> (5, 50));
  gquiz1.insert(pair <int, int> (6, 50));
  gquiz1.insert(pair <int, int> (7, 10));

  map <int,int> :: iterator itr;

  for(itr = gquiz1.begin(); itr!=gquiz1.end();itr++){
    cout<<itr->first<<" "<<itr->second<<endl;
  }
  gquiz1.erase(4);

  itr = gquiz1.find(3);
  cout<<itr->second;

}
