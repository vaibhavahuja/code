//passport = 0; ticket = 1; insurance = 2; visa = 3; gifts = 4; exch = 5;

#include <iostream>
#include "basic.h"
using namespace std;
typedef vector<bool> vb1;



int main(){

  Graph g(6);
  g.addEdge(0,1);
  g.addEdge(0,2);
  g.addEdge(1,3);
  g.addEdge(2,3);
  g.addEdge(3,4);
  g.addEdge(3,5);

  g.printGraph();
  cout<<endl;


  g.topSort(0);
  cout<<endl;
  g.dfs(0);


}
