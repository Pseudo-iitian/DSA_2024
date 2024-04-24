#include<bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <bitset>
#include <queue>
#include <stack>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);


class TreeNode{
  public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
      this->val= val;
      this->left = NULL;
      this->right = NULL;
    }
};

int inorder(TreeNode* root,int &sum){
  if(!root) return 0;
  sum = sum * 10 + root->val;

  if(!root->left && !root->right) return sum;

  return inorder(root->left,sum) + inorder(root->right,sum);
}

int main() {
  fastio
  TreeNode* a = new TreeNode(1);
  TreeNode* b = new TreeNode(2);
  TreeNode* c = new TreeNode(3);

  a->left = b;
  a->right = c;

  int sum = 0;
  cout<<inorder(a,sum);
  return 0;
}