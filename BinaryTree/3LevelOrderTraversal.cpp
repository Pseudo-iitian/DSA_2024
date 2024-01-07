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

vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int> > ans;
    if(root==NULL) return ans;
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
        ans.push_back(level);
    }
    return ans;
}

int main(){
  
  return 0;
}