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

int maxDepth(TreeNode* root) {
  if(root==NULL) return 0;
  int lh = maxDepth(root->left);
  int rh = maxDepth(root->right);
  if(abs(lh-rh)>1) return -1;
  return 1+max(lh,rh);
}

bool isBalance(TreeNode* node){
  if(maxDepth(node)==-1) return false;
  return true;
};
int main(){
  TreeNode* a = new TreeNode(3);
  TreeNode* b = new TreeNode(9);
  TreeNode* c = new TreeNode(20);
  TreeNode* d = new TreeNode(15);
  TreeNode* e = new TreeNode(7);

  a->left = b;
  a->right = c;
  c->left = d;
  c->right = e;
  cout<<isBalance(a);
  return 0;
}