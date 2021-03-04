#include <iostream>
#include <vector>
using namespace std;

typedef vector <int> v1;


int main(){
  v1 g1;
  v1 :: iterator i;

  for(int i=1;i<=5;i++){
    g1.push_back(i);
  }
  cout<<"output"<<endl;

  for(i = g1.begin();i!=g1.end();i++){
    cout<<*i<<" ";
  }
  cout<<endl;

  cout<<g1[2]<<endl;
  g1[2] = 13;
  cout<<g1[2]<<endl;

  cout<<g1.size()<<endl;
  cout<<g1.capacity()<<endl;
  cout<<g1.max_size()<<endl;

}
