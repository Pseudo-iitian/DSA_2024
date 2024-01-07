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

void printLeft(TreeNode* node){
  if(node==NULL) return;
  cout<<node->val<<" ";
  printLeft(node->left);
  printLeft(node->right);
}
void printRight(TreeNode* node){
  if(node==NULL) return;
  printRight(node->left);
  printRight(node->right);
  cout<<node->val<<" ";
}

TreeNode* boundaryTraversal(TreeNode* root){
  if(root==NULL) return root;
  cout<<root->val<<" ";
  printLeft(root->left);
  printRight(root->right);
  return root;
}

int main(){
  TreeNode* a = new TreeNode(1);
  TreeNode* b = new TreeNode(2);
  a->left = b;
  TreeNode* c = new TreeNode(3);
  b->left = c;
  TreeNode* d = new TreeNode(4);
  c->right = d;
  TreeNode* e = new TreeNode(5);
  d->left = e;
  TreeNode* f = new TreeNode(6);
  d->right = f;
  TreeNode* g = new TreeNode(7);
  a->right = g;
  TreeNode* h = new TreeNode(8);
  g->right = h;
  TreeNode* i = new TreeNode(9);
  h->left = i;
  TreeNode* j = new TreeNode(10);
  i->left =j;
  TreeNode* k = new TreeNode(11);
  i->right = k;

  boundaryTraversal(a);
  return 0;
}