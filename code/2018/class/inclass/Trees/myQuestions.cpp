#include "tree2.h"
#include <iostream>
#include <queue>
using namespace std;

//input has to be 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
//tree will be as below
 //        1
 //      /   \
 //    2     3
 //  /  \   /  \
 // 4   5  6    7

int cntNodes(TreeNode *root){
  if(root==NULL) return 0;
  int m = cntNodes(root->left) + cntNodes(root->right) + 1;
  return m;
 }

int sumNodes(TreeNode *root){
  if(root == NULL) return 0;
  int m = sumNodes(root->left) + sumNodes(root->right) + root->data;
  return m;
}

void inOrder(TreeNode *root){
  if(root==NULL) return;
  inOrder(root->left);
  cout<<root->data<<" ";
  inOrder(root->right);
}

TreeNode *levelWiseInput(){
  queue<TreeNode*> q;
  int x; cin>>x;
  if(x==-1) return NULL;

  TreeNode* root = new TreeNode(x);
  q.push(root);
  while(!q.empty()){
    TreeNode *cur = q.front();
    q.pop();

    cin>>x;
    if(x!=-1){
      cur->left = new TreeNode(x);
      q.push(cur->left);
    }

    cin>>x;
    if(x!=-1){
      cur->right = new TreeNode(x);
      q.push(cur->right);
    }
  }
  return root;
}

void levelWiseOutput(TreeNode *root){
  if(root==NULL) return;
  queue<TreeNode*> q;
  TreeNode* const DELIMITER = NULL;
  q.push(root);
  q.push(DELIMITER);

  while(!q.empty()){
    TreeNode *cur = q.front();
    q.pop();

    if(cur == DELIMITER){
      cout<<endl;
      if(!q.empty()){
        q.push(DELIMITER);
      }
      continue;
    }

    cout<<cur->data<<" ";
    if(cur->left) q.push(cur->left);
    if(cur->right) q.push(cur->right);
  }
}


//to do top view later.


int main(){
    TreeNode *root = createTree();
    // inOrder(root);
    // TreeNode *root2 = levelWiseInput();
    // inOrder(root2);
    levelWiseOutput(root);
    // cout<<cntNodes(root);
    // cout<<sumNodes(root)<<endl;


}
