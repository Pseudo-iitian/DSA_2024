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

// top view traversal 
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
    if(nodes.find(x)==nodes.end()) nodes[x]=node->val; // nhi mila to 
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
  TreeNode* h = new TreeNode(9);
  TreeNode* i = new TreeNode(10);
  c->left= h;
  c->right = i;
  TreeNode* d = new TreeNode(4);
  TreeNode* e = new TreeNode(10);
  b->left = d;
  b->right = e;
  TreeNode* f = new TreeNode(5);
  TreeNode* g = new TreeNode(6);
  d->right = f;
  f->right = g;

  vector<int> ans = verticalTraversal(a);
  for(auto &val: ans){
    cout<<val<<" ";
  }
  return 0;
}