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

bool isSymmetric(TreeNode* left, TreeNode* right){
  // i will use level order traversal
  if(left==NULL || right==NULL){
    return left==right;
  }
  if(left->val!=right->val) return false;
  return isSymmetric(left->left, right->right) && isSymmetric(left->right,right->left);
}
int main(){
  // TreeNode* a = new TreeNode(1);
  // TreeNode* b = new TreeNode(2);
  // TreeNode* c = new TreeNode(2);
  // a->left = b;
  // a->right = c;
  // TreeNode* d = new TreeNode(3);
  // TreeNode* e = new TreeNode(4);
  // b->left = d;
  // b->right = e;
  // TreeNode* f = new TreeNode(4);
  // TreeNode* g = new TreeNode(2);
  // c->left = f;
  // c->right = g;

  TreeNode* p = new TreeNode(1);
  TreeNode* q = new TreeNode(2);
  TreeNode* r = new TreeNode(2);
  p->left = q;
  p->right = r;
  TreeNode* s = new TreeNode(3);
  TreeNode* t = new TreeNode(3);
  q->right = s;
  r->right = t;
  int flag = 1;
  cout<<isSymmetric(p->left,p->right);


  // TreeNode* left = NULL;
  // TreeNode* right = new TreeNode(3);
  // cout<<(left==right);
  return 0;
}