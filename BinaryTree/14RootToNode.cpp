#include<bits/stdc++.h>
using namespace std;

class TreeNode{
  public:
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(){
    this->left = NULL;
    this->right = NULL;
    this->val = 0;
  }
  TreeNode(int val){
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};

void RootToNode(TreeNode* root){
  vector<int> ans;

  if(root==NULL) return ;
  RootToNode(root->left);
  ans.push_back(root->val);
  
  RootToNode(root->right);
}
int main(){
  TreeNode* a = new TreeNode(1);  
  TreeNode* b = new TreeNode(2);  
  TreeNode* c = new TreeNode(3);  
  a->left = b;
  a->right = c;
  TreeNode* d = new TreeNode(4);  
  TreeNode* e = new TreeNode(5);  
  b->left = d;
  b->right = e;
  TreeNode* f = new TreeNode(6);  
  TreeNode* g = new TreeNode(7);  
  e->left = f;
  e->right = g;


  return 0;
}