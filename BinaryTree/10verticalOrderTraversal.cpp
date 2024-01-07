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

vector<vector<int> >  verticalTraversal(TreeNode* root){
  queue<pair<TreeNode*, pair<int,int>>> todo;
  map<int,map<int,multiset<int>>> nodes;
  todo.push({root,{0,0}});
  while(!todo.empty()){
    auto p = todo.front();
    todo.pop();
    TreeNode * node = p.first;
    int x = p.second.first;
    int y = p.second.second;
    nodes[x][y].insert(node->val);
    if(node->left){
      todo.push({node->left,{x-1,y+1}});
    }
    if(node->right){
      todo.push({node->right,{x+1,y+1}});
    }
  }
  vector<vector<int>> ans;
  for(auto &p: nodes){
    vector<int> col;
    for(auto q:p.second){
      col.insert(col.end(),q.second.begin(),q.second.end());
    }
    ans.push_back(col);
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
  
  vector<vector<int> > ans = verticalTraversal(a);
  for(int i=0;i<ans.size();++i){
    for(auto &val: ans[i]){
      cout<<val<<" ";
    }
    cout<<endl;
  }
  return 0;
}