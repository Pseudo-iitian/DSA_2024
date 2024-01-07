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

vector<int >  verticalTraversal(TreeNode* root){
  queue<pair<TreeNode*, int> > todo;
  map<int,int> nodes;
  vector<int> ans;
  if(root==NULL) return ans;
  todo.push({root,0});

  while(!todo.empty()){
    auto p = todo.front();
    todo.pop();
    TreeNode* node = p.first;
    int x = p.second;
    if(node->left){
      todo.push({node->left,x-1});
    }
    if(node->right){
      todo.push({node->right,x+1});
    }
    nodes[x]=node->val; // nhi mila to 
  }
  for(auto &val: nodes){
    ans.push_back(val.second);
  }
  return ans;
}

int main(){
  TreeNode* a = new TreeNode(1);
  TreeNode* b = new TreeNode(2);
  TreeNode* c = new TreeNode(3);
  a->left = b;
  a->right = c;
  TreeNode* h = new TreeNode(4);
  TreeNode* i = new TreeNode(5);
  b->left = h;
  b->right = i;
  TreeNode* d = new TreeNode(6);
  TreeNode* e = new TreeNode(7);
  c->left = d;
  c->right = e;
  TreeNode* f = new TreeNode(8);
  i->left = f;// new one
  TreeNode* g = new TreeNode(9);
  d->right = g;

  vector<int> ans = verticalTraversal(a);
  for(auto &val: ans){
    cout<<val<<" ";
  }
  return 0;
}