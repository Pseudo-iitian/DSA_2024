#include<bits/stdc++.h>
using namespace std;

class TreeNode{
  public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data){
      this->val = data;
      this->left = NULL;
      this->right = NULL;
    }
};

void convert(TreeNode* current,int parent, unordered_map<int,unordered_set<int>> &map){
  if(current==NULL) return;
  if(map.find(current->val) == map.end()){
    map[current->val] = unordered_set<int>();
  }
  unordered_set<int> &adj = map[current->val];
  if(parent!=0){
    adj.insert(parent);
  }
  if(current->left!=NULL){
    adj.insert(current->left->val);
  }
  if(current->right!=NULL){
    adj.insert(current->right->val);
  }
  convert(current->left,current->val,map);
  convert(current->right,current->val,map);
}

int amountOfTime(TreeNode* root, int start) {
  unordered_map<int,unordered_set<int> > map;
  convert(root,0,map);
  unordered_set<int> visited;
  queue<int> q;
  q.push(start);
  visited.insert(start);
  int minute=0;
  while(!q.empty()){
    int size = q.size();
    while(size>0){
      int top = q.front();
      q.pop();

      for(auto &val: map[top]){
        if(visited.find(val)==visited.end()){
          // not visisted
          visited.insert(val);
          q.push(val);
        }
      }
      size--;
    }
    minute++;
  }
  return minute-1;
}

int main(){
  TreeNode* a = new TreeNode(1);
  TreeNode* b = new TreeNode(5);
  TreeNode* c = new TreeNode(3);
  a->left = b;
  a->right = c;
  TreeNode* d = new TreeNode(4);
  b->right = d;
  TreeNode* e = new TreeNode(10);
  TreeNode* f = new TreeNode(6);
  c->left = e;
  c->right = f;
  TreeNode* g = new TreeNode(9);
  TreeNode* h = new TreeNode(2);
  d->left=g;
  d->right=h;
  unordered_map<int,unordered_set<int> > map;
  cout<<amountOfTime(a,3);
  return 0;
}