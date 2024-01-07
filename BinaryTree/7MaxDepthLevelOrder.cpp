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
    if(root==NULL) 0;
    queue<TreeNode*> q;
    q.push(root);
    int mx = 0;
    while(!q.empty()){
        int size = q.size();
        vector<int> level;
        int lh = 0;
        int rh = 0;
        for(int i=0;i<size;++i){
            TreeNode* node = q.front();
            q.pop();
            if(node->left!=NULL){
                q.push(node->left);
                lh++;
            }
            if(node->right!=NULL){
                q.push(node->right);
                rh++;
            }
            level.push_back(node->val);
        }
        mx += max(lh,rh);
    }
    return mx;
}

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
  cout<<maxDepth(a);
  return 0;
}