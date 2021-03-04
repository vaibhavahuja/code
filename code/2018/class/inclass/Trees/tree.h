#include <iostream>
using namespace std;

class TreeNode{
public:
  int data;
  TreeNode *left, *right;
  TreeNode(int x){
    data = x;
    left = NULL;
    right = NULL;
  }
};

TreeNode *createTree(){
  int x;
  cin>>x;
  if(x==-1) return NULL;

  TreeNode *root = new TreeNode(x);
  // cout<<"enter left child of "<<root->data<<endl;
  root->left = createTree();
  // cout<<"enter right child of "<<root->data<<endl;
  root->right = createTree();

  return root;
}
