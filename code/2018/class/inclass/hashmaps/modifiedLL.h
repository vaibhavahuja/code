#include <iostream>
using namespace std;

class mNode{
public:
  int data;
  mNode *next, *random;

  mNode(int d){
    data = d;
    next = NULL;
    random = NULL;
  }
};

mNode *createmodLL(){
  mNode *temp1 = new mNode(1);
  mNode *temp2 = new mNode(2);
  mNode *temp3 = new mNode(3);
  mNode *temp4 = NULL;

  temp1->next = temp2;
  temp2->next = temp3;
  temp3->next = temp4;

  temp1->random = temp1;
  temp2->random = temp3;
  temp3->random = temp1;

  // temp4->random = temp2;
  // temp4->next = NULL;
  return temp1;
}
